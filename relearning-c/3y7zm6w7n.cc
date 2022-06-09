#include <stdio.h>
void fun(int **p){static int q=10;*p=&q;printf("%d", **p);}
int main()
{
int r=8, *p;
p = &r;
fun(&p);
printf("%d", *p);
}