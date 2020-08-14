obj-m += hello_device.o

all:
	make -C /lib/modules/`uname -r`/build M=$(PWD) modules

clean:
	make -C /lib/modules/`uname -r`/build M=$(PWD) clean

test:
	# We put a - in front of the rmmod command to tell make to ignore
	# any error in case the module isn't loaded
	-sudo rmmod hello_device
	# Clear the kernel log without echo
	sudo dmesg -C
	# Insert the module
	sudo insmod hello_device.ko
	# Display the kernel log
	dmesg
