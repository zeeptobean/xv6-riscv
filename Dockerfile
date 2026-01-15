FROM debian:trixie-slim

RUN apt update && apt install -y binutils-riscv64-linux-gnu gcc-14-riscv64-linux-gnu qemu-system-riscv64 gdb-multiarch build-essential git \
&& rm -rf /var/lib/apt/lists/*

WORKDIR /xv6-riscv

COPY . .

CMD ["/bin/bash"]