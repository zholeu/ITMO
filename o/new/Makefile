EXTRA_CFLAGS +=-I/usr/src/linux-headers-5.15.0-41-generic/include/ -DLINUX_DRIVER -mhard-float
obj-m += d.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules EXTRA_CFLAGS="$(EXTRA_CFLAGS)"

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean EXTRA_CFLAGS="$(EXTRA_CFLAGS)"

