#include<stdio.h>
#include<stdlib.h>
#define O printf
#define Oc(x) (x>9&&x<255?O("%c",x):O("<0x%x>",x))
#define R return
#define W(x) while((x))
#define N(x,y...) {J _n=x,i=0;for(;i<_n;i++){y;}}
#define $(x,y...) if((x)){y;}else
#define P(x,y...) $((x),R (y))
#define Z static
#define _ static inline
typedef long J,*T;typedef void V;typedef char C,*S;Z T b[100100];Z T p=(J*)b+1;
#define $n(x) ((J*)(x))[-1]
#define $t(x) (((J)(x))>255) //((J)(x)>>8)
#define xn $n(x)
#define xt $t(x)
#define xj ((J)x)
#define yj ((J)y)
#define zj ((J)z)
#define Xc ((C)(J)x[i])
#define Xx ((T)x[i])
#define A  (T)(J)
#define L O("\n")

_ T tn(J n){T x=p+$n(p)+1;$n(p)+=8;R xn=n,x;}
_ T t1(T x){T r=tn(1);*r=xj;R r;}
_ T t2(T x,T y){T r=tn(2);*r=xj;r[1]=yj;R r;}
_ T t3(T x,T y,T z){T r=tn(3);*r=xj;r[1]=yj;r[2]=zj;R r;}
_ T tc(C c){R (T)(J)c;}
_ T o(T x){$(!xt,Oc((C)(J)x)){O("(");N(xn,$($t(x[i]),o(Xx))Oc(Xc);i<xn-1?O(";"):0)O(")");};R x;}
_ T first(T x){R A(xt?*x:xj);}
_ T drop(J n,T x){J m=$t(x)?xn-n:0;T r=tn(m);N(m,r[i]=x[i+n])R r;}
_ T list(T x){R xt?x:t1(x);}
_ T join(T x,T y){J n;x=list(x),y=list(y);n=xn+$n(y);T r=tn(n);N(n,r[i]=i<xn?x[i]:y[i-xn]);R r;}
_ T count(T x){R A(xt?xn:1);}
_ T one(T x){R xt&&xn==1?first(x):x;}
                      
_ T t0(){$n(p)=0;}