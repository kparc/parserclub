# t expects you have at least some version of gcc installed:
C=$(shell env env which gcc-11||which gcc-10||env which gcc-9||env which gcc-8||echo gcc)
O=-O2 -W -Wno-variadic-macros -Wno-dollar-in-identifier-extension -Wno-empty-body

T=in/x.in

all: clean c t y
	./c $T        > o/c.out
	./t $T        > o/t.out
	diff    o/c.out o/t.out

time: clean c t y
	time ./c $T   > o/c.out
	time ./t $T   > o/t.out
	time ./y $T   > o/y.out

c: c.c c.h
	$C $O $@.c -o $@

t: t.c t.h
	$C $O $@.c -o $@

y: g y.y
	yacc y.y && $C $O y.tab.c -o $@

g:
	yacc y.y
	$C y.tab.c
	$C -E y.tab.c |grep -v '^# *[0-9]'|indent -st -l180 |sed -e 's/\<_T/_ T/g' > y.c
	$C -ggdb3 y.c -o y

# brackets (should fail)
b: c
	./c in/xxx.in

# numerals
bb: c
	./c in/xxxx.in

# literals
bbb: c
	./c in/xxxxx.in

# strings
bbbb: c
	./c in/xxxxxx.in

clean:
	rm -rf o c t y && mkdir o

.PHONY:all rpn b c t y t clean
