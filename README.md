some parsers for k
===

* `t` transliteration of atw's k6 parser (gcc-only, effbiae)
* `y` yacc parser orthogonal to `t` (effbiae)
* `c` extended `t` (portable, bracket balancing, numeric literals)


```
make            # validate c<>t
make time       # benchpress t/c/y
make b          # test brackets
make bb         # test numerals
make bbb        # test literals
make bbbb       # test strings
```
