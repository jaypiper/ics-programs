DIRS = $(shell ls -l| grep ^d |awk '{print $$9}')

all : $(addsuffix /Makefile,$(DIRS))
	@echo $(DIRS)

%/Makefile: Makefile.in
	@echo "include ../Makefile.in" > $@
	-@make -C $*
	-@rm -f $@

clean:
	rm -rf $(shell find -name "build")

.PHONY: all compile clean