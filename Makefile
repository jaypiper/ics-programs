DIRS = $(shell ls -l| grep ^d |awk '{print $$9}')
ALL = $(basename $(notdir $(shell find tests/. -name "*.c")))

all:
	$(foreach DIR,$(DIRS),\
		make -C $(DIR) -f ../Makefile compile \
	)
	echo $(DIRS)

CFILES=$(basename $(notdir $(shell find . -name "*.c")))
compile:
	mkdir -p build
	echo $(CFILES)
	$(foreach file,$(CFILES),$(shell riscv64-linux-gnu-gcc -O1 \
	-fno-ipa-pure-const  \
	-fno-inline-functions-called-once \
	-fno-stack-protector \
	-Wall -Werror -march=rv64g $(file).c -o build/$(file)) \
	$(shell riscv64-linux-gnu-objdump -d build/$(file) > build/$(file).txt) \
	)

.PHONY: all compile