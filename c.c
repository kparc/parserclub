//E:E;e|e e:nve|te| t:n|v v:tA|V n:t[E]|(E)|{E}|N  u:{$["v"~c x;x,":";x]}
#include"c.h"
I ix(S x,C c){I i=-1;W(x[++i])P(c==x[i],i);R-1;}
S m[]={"av;0","['/\\",":+-*%!&|<>=~,^#_$?@.",";)]\n ","0123456789"};
V f(C x,S s){W(*s)c[*s++]=x;}ZV c0(){N(256,c[i]=' ')*c=';';N(4,f(m[0][i],m[i+1]));/*pc();*/}      //!< build class map

T E(T x){W(1+ix(";[(",(J)n()))x=join(x,t1(e(t())));R x;}
T n(){bb();P('0'==c[s[i]],I n;UJ r=sJ(s+i,&n);i+=n;T x=t1(A(r));xn=-1,x)R A(s[i++]);}
I v(){R';'<c[s[i-1]]&&'0'!=c[s[i-1]];}I q(){R';'==c[s[i]];}
T e(T x){T f;P(q(),x);I v_=v();R(f=t(),v())>v_?t3(f,x,e(t())):t2(x,e(f));}       //!< change > to < and reorder with v_
T t(){P(q(),tn(0))T x='('-s[i]?n():3>(J)count(x=E(A(s[i])))?A(x[1]):x;W('a'==c[s[i]]){x='['==s[i]?E(x):t2(n(),x);}R x;}

T prs(S x){_b=i=0,*s='(';T r=t();R b0(),r;}
I main(I c,S*v){c0();f1(v[1],c);W(fgets(s+1,10000,in))t0(),o(prs(s)),L;R f0();}

//:~
