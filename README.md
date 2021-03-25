```shell
sudo apt intall make
apt search libc6
sudo apt-get install libc6-i386
sudo apt-get isntall libc6
sudo apt install binutils
sudo apt install g++
sudo apt-get install gcc-multilib

gcc -m32 test.c -o test
gcc test.c -o test
gcc test.c -o test -fno-pie -no-pie

file test
objdump -d test
nm test

make mykernel.bin
```