default: all

.DEFAULT:
	cd src && $(MAKE) $@

clean:
	rm stlm

.PHONY: clean
