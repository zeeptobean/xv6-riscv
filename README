### zeeptobean's xv6 study repo

1. build docker
```
docker build . -t xv6-docker
```

2. run dockerfile

```
docker run --name xv6-docker -it --rm -v $(pwd):/home/xv6 xv6-docker
```

(or run bash script `run-docker`)

by now you are in the shell, run `make` to build, `make qemu` to build and run emulator, `make clean` to clean working tree

if the docker container is frozen, run `docker kill xv6-docker` to kill it