%{
#include"t.h"
//      "                                 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~"
Z C c[]="                                 +'++++/()+++++/``````````+;+++++``````````````````````````[/]++```````````````````````````{+}+";

int v(T x){P(!count(x),0);R !xt?c[xj]=='+':(x=first(x),!xt&&c[xj]=='/');} /*verb?*/
_ T unv(T x){R first(x)?x:drop(1,x);}
#define YYSTYPE T
int yylex();int yyerror(char*);
%}
%%
S:   E             {$$=o(unv($1));O("\n");}
E:   E ';' e       {$$=!count($3)?$1:t2($1,unv($3));}
   | e             {$$=unv($1);};
e:                 {$$=tn(0);}/*              !#e               #e    t is verb                        #e and t is n      nve                                   ne      */
   | t e           {T t=$1,e=$2;$$=!count(e)? (v(t)?t2(0,t):t) :v(t)? (t3(0,t,!first(e)?drop(1,e):e)) :         !first(e)?t3(first(drop(1,e)),t,one(drop(2,e))):t2(t,e);};
t:   n             {$$=$1;}
   | v             {$$=$1;};
v:   t '/'         {$$=t2($2,$1);}
   | '+'           {$$=$1;};
n:   t '[' E ']'   {$$=t2($1,$3);}
   |   '(' E ')'   {$$=one($2);}
   | '`'           {$$=$1;};
%%
Z int end;Z FILE*f;C opt[256];
int yylex(){int y,x=fgetc(f);$(x==10,0>(y=fgetc(f))?x=y:ungetc(y,f));R x==10||(end=(x<0))?0:(yylval=tc(x),c[x]);}
int yyerror(char*s){O("'%s\n",s);exit(0);R 3;}
int main(int c,S*v){f=c>1?fopen(v[1],"r"):stdin;W(!end)t0(),yyparse();}
