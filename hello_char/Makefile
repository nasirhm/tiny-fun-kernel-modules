ifneq ($(KERNELRELEASE),)
# kbuild part of makefile
obj-m := hello_char.o

else
	KDIR ?= /lib/modules/`uname -r`/build

default:
	$(MAKE) -C $(KDIR) M=$$PWD

endif
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .*.flags
	make -C $(KDIR) M=$(PWD) clean
