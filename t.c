//E:E;e|e e:nve|te| t:n|v v:tA|V n:t[E]|(E)|{E}|N  u:{$["v"~c x;x,":";x]}
#include"t.h"
typedef int I;
I ix(S x,C c){I i=-1;W(x[++i])P(c==x[i],i);R-1;}
Z J i;S m[]={"av;","['/\\",":+-*%!&|<>=~,^#_$?@.",";)]\n "};
Z C c[256];I c0(){I f(C x,S s){W(*s)c[*s++]=x;}N(256,c[i]=' ')*c=';';N(3,f(m[0][i],m[i+1]));}

Z C s[10100];T e(T),t();
T n(){R A(s[i]?s[i++]:s[i]);}
C q(){R ';'==c[s[i]];}
T E(T x){W(1+ix(";[(",(J)n()))x=join(x,t1(e(t())));R x;}
T t(){P(q(),tn(0));T x='('-s[i]?n():3>(J)count(x=E(A(s[i])))?A(x[1]):x;W('a'==c[s[i]])x='['==s[i]?E(x):t2(n(),x);R x;}
T e(T x){I v(){R ';'<c[s[i-1]];}T f;P(q(),x);I v_=v();R (f=t(),v())>v_?t3(f,x,e(t())):t2(x,e(f));} //change > to < and reorder with v_
T parse(S x){R i=0,*s='(',t();}

Z FILE*f;
int main(I c,S*v){c0();f=c>1?fopen(v[1],"r"):stdin;W(fgets(s+1,10000,f))t0(),o(parse(s)),O("\n");}