### zeeptobean's xv6 study repo

#### Run xv6
1. Build Docker container
```
docker build . -t xv6-docker
```

2. Run container

```
docker run --name xv6-docker -it --rm -v .:/xv6-riscv xv6-docker
```

(or run bash script `run-docker`)

By now you are in the shell inside the Docker image. The current directory is also mounted in the container to persist changes. 

Run `make` to build, `make qemu` to build and run emulator, `make clean` to clean working tree

If the container is frozen, run `docker kill xv6-docker` to kill it