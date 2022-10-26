
import Map.map;

class PassiveCache {
    var items: map(int, weakPointer(unmanaged someDataType));

    proc init() {
        this.items = new map(int, weakPointer(unmanaged someDataType));
    }

    proc getOrBuild(key: int) : shared someDataType {
        if this.items.contains(key) {
            // we've computed a value for this key before, try to get a strong pointer to it
            var weak_pointer = this.items.getReference(key);

            // if there is a strong pointer, return it; otherwise recompute the item and return
            var maybe_strong : shared someDataType? = weak_pointer.upgrade();
            return if maybe_strong != nil then (maybe_strong: shared someDataType) else this.buildAndSave(key);

            // Alternative interfaces for the same behavior:
            // return if weak_pointer.canUpgrade() then weak_pointer.forceUpgrade() else this.buildAndSave(key);
            // return if weak_pointer.canUpgrade() then (try! weak_pointer.tryUpgrade()) else this.buildAndSave(key);
        } else {
            // we haven't seen this key before; compute the item and return it
            return this.buildAndSave(key);
        }
    }

    proc buildAndSave(key: int) : shared someDataType {
        // make an array with some relation to the key value
        const item = new shared someDataType(key % 5);

        // create and store a weak pointer to the shared object
        const weak_ptr = new weakPointer(item);
        this.items.add(key, weak_ptr);

        // return the shared pointer to the object
        return item;
    }
}

class PersistentCache {
    var items: map(int, shared someDataType);

    proc init() {
        this.items = new map(int, shared someDataType);
    }

    proc getOrBuild(key: int): shared someDataType {
        if this.items.contains(key) {
           return this.items.getValue(key);
        } else {
            return this.buildAndSave(key);
        }
    }

    proc buildAndSave(key: int): shared someDataType {
        const item = new shared someDataType(key % 5);
        this.items.add(key, item);
        return item;
    }
}

// just a wrapper around an array
class someDataType {
    // var dom: domain(1);
    // var numbers: [dom] real;
    var i: int;

    // proc init(d: domain(1), n: real) {
    //     this.dom = d;
    //     var nums: [d] real = n;
    //     this.numbers = nums;
    // }

    proc init(x: int) {
        this.i = x;
    }
}

proc main() {
    var pc = new PassiveCache();

    var sdt = pc.getOrBuild(21);
    var sdt2 = pc.getOrBuild(10);

    writeln(sdt2);
}
