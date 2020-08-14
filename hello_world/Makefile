ifneq ($(KERNELRELEASE),)
	obj-m := hello_world_kernel_module.o

else
	KDIR ?= /lib/modules/`uname -r`/build

default:
	$(MAKE) -C $(KDIR) M=$$PWD

endif
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .*.flags
	make -C $(KDIR) M=$(PWD) clean
test:
	sudo dmesg -C
	sudo insmod hello_world_kernel_module.ko
	sudo rmmod hello_world_kernel_module.ko
	dmesg
