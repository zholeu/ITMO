EXTRA_CFLAGS+=-DLINUX_DRIVER -mhard-float
obj-m += disk_my.o 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules  -I /usr/src/kernel-src-6.1.1/include/
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean  -I /usr/src/kernel-src-6.1.1/include/linux
