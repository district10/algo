all: test.exe

test.exe: test.c
	gcc $< -o $@

edt:
	$(EDITOR) test.c

edc:
	$(EDITOR) wheels/c.h

edcpp:
	$(EDITOR) wheels/cpp.h
