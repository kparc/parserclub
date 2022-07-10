C=$(shell env env which gcc-11||which gcc-10||env which gcc-9||env which gcc-8||echo gcc)
O=-O2 -W -Wno-variadic-macros -Wno-dollar-in-identifier-extension -Wno-empty-body

T=x.in

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

# brackets
b: c
	./c xxx.in

# numerals
bb: c
	./c xxxx.in

# literals
bbb: c
	./c xxxxx.in

clean:
	rm -rf o c t y && mkdir o

.PHONY:all rpn b c t y t clean
