# Apptainer portability testing

## Getting started with apptainer

See http://apptainer.org/docs/user/latest/

## Where to find images

* You can find docker containers on https://hub.docker.com

## Notes on writing .def files

### Example using a docker image
```
BootStrap: docker
From: ubuntu:16.04
```

### Example using a docker image from quay.io
```
BootStrap: docker
From: quay.io/centos/centos:stream9
```

### Notes about command sections
`%post` commands run as root
`%runscript` commands run as regular user

## Commands to run

By default, environment is included in run commands.
Also the directory stays the same (so e.g. a chapel directory
will appear next to image.sif if it is created from
within the image)

### To construct the image
```bash
apptainer build --fakeroot image.sif image.def
```

### To create sandbox image you can work on and modify
```bash
sudo apptainer build --sandbox image.sif image.def

# to explore as root
sudo apptainer shell --writable image.sif

# to explore not as root
apptainer shell --writable image.sif
```

### to run the runscript
```bash
apptainer run image.sif
```

### to run a shell within the image
```bash
apptainer shell image.sif
```
