#makefile
reverse = $(1) $(2) $(3) $(4)
HOSTCC = $(call reverse, 10, 5, "cc", "gcc")

all:
	echo $(HOSTCC)
