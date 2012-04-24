all: cap_new.test

%.test: %.c capsicum.h test_harness.h
	gcc -g -Wall -Werror -o $@ $<

