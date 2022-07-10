#include<stdio.h>  //printf
#include<stdlib.h> //exit
#include<string.h> //memcpy

typedef int I;typedef long long J,*T;typedef unsigned long long UJ;typedef void V;typedef char C,*S;

#define O printf
#define R return
#define W(x) while((x))
#define N(x,y...) {J _n=x,i=0;for(;i<_n;i++){y;}}
#define P(b,a...) if(b)R({a;});
#define $(x,y...) if((x)){y;}else
#define IN(l,x,r) ((l)<=(x)&&(x)<=(r))

#define Z static
#define _ static inline
#define ZV _ V

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
#define L  O("\n")

Z T b[100100];Z T p=(J*)b+1;Z C c[256];
#define GLIM 32
Z J G[GLIM]={0};I g=0;

_ T tn(J n){T x=p+$n(p)+1;$n(p)+=8;R xn=n,x;}
_ V t0(){$n(p)=0;}
_ T t1(T x){T r=tn(1);*r=xj;R r;}
_ T t2(T x,T y){T r=tn(2);*r=xj;r[1]=yj;R r;}
_ T t3(T x,T y,T z){T r=tn(3);*r=xj;r[1]=yj;r[2]=zj;R r;}
_ T tc(C c){R(T)(J)c;}
_ T first(T x){R A(xt?*x:xj);}
_ T drop(J n,T x){J m=$t(x)?xn-n:0;T r=tn(m);N(m,r[i]=x[i+n])R r;}
_ T list(T x){R xt?x:t1(x);}
_ T join(T x,T y){J n;x=list(x),y=list(y);n=xn+$n(y);T r=tn(n);N(n,r[i]=i<xn?x[i]:y[i-xn])R r;}
_ T count(T x){R A(xt?xn:1);}
_ T one(T x){R xt&&xn==1?first(x):x;}

#define Oe(e) if(e)O("err: %s\n",s),exit(1);
#define Oc(x) ( \
	x>9&&x<127?O("%c",x) \
	:-64<x?O("\"%s\"",(S)G[x+64]) \
	:O("%.8s",(S)&G[x+128]) \
	)
_ T o(T x){$(!xt,Oc((C)(J)x))$(-1==xn,O("%lld",(J)*x))
	{O("(");N(xn,$($t(x[i]),o(Xx))Oc(Xc);i<xn-1?O(";"):0)O(")");}R x;}     //!< printer

ZV pc(){N(128,O("%c",(32>i)?'_':(i)))O("\n");N(128,O("%c", c[i]))O("\n");} //!< dump class map

T e(T),t(),n();I q(),v();Z J i;Z C s[10100];   //!< forward decls, \i tape position, \s tape buffer
Z FILE*in;ZV f1(S s,I c){in=1<c?fopen(s,"r"):stdin;Oe(!in);}Z I f0(){R fclose(in);} //!< fio

#if 1                     //!< bracket balancer
#define BLIM 32           //!< max nesting depth
//                        !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~
Z I _b;Z C B[BLIM],bm[]="        ()                                                 ( )                             ( ) ";
Z I bb(){I x=s[i],r=bm[128>x?x-32:0];P(' '==r,x)P(')'==r,Oe(B[_b--]!=x-1-x/64)x)Oe(BLIM==++_b)R B[_b]=x;}ZV b0(){Oe(2-_b);}
#else
Z I _b;Z I bb(){R s[i];}ZV b0(){}
#endif

//! parsers
Z S sc(S s,I c){W(*s-c)P(!*s++,(S)0)R s;}S bq(S x){W((x=sc(++x,'"'))&&!({I i=0;W('\\'==x[--i]);1&i;})){};R x;}   //!< parse quoted string w/esc sequences
Z J sJ(S a,I*n){C c;J i=0,r=*n=0;W((c=*a++)&&IN('0',c,'9'))i++,r=r*10u+((I)c-'0');R*n=i,r;}                    //!< parse signed long long

//:~
