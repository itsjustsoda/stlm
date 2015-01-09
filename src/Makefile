STD=-std=c99 -pedantic
WARN=-Wall -W

default: all

all: stlm

.DEFAULT: stlm
	
stlm: stlm.c
	gcc -o ../stlm stlm.c
	

clean:
	rm stlm

.PHONY: clean
