#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nodd(a,b)
{
int del, dil, ost = 1, nod=0;
if (a>b)
{
del=a;
dil=b;
}
else
{
del=b;
dil=a;
}

while (ost !=0)
{
ost = del % dil;
nod = dil;
del = dil;
dil = ost;
}
return nod;
}

void cancel (int* a, int* b)
{
int i;
i=*a;

int nod = nodd(*a,*b);
*a = *a / nod;
*b = *b/nod;
}

int main ()
{
int a, b, c, d, p, q;
printf ("enter the a value\na=");
scanf ("%d", &a);
printf ("enter the b value\nb=");
scanf ("%d", &b);
printf ("enter the c value\nc=");
scanf ("%d", &c);
printf ("enter the d value\nd=");
scanf ("%d", &d);
if (b==d)
{
p=a+c;
q=b;
}
else
{
p=a*d + c*b;
q=b*d;
}
cancel (&p, &q);
printf ("%d/%d", p, q);
return 0;
}
