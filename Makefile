DIRS = $(shell ls -l| grep ^d |awk '{print $$9}')

all : $(addsuffix /Makefile,$(DIRS))
	@echo $(DIRS)

%/Makefile:
	@echo "include ../Makefile.in" > $@
	@make -C $*
	-@rm $@

.PHONY: all compile