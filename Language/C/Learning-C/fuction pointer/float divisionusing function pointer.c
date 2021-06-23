#include<stdio.h>
double* div (double*,double*);

int main()
{
  double a=18.78,b=1.345;
  double* (*ptr)(double*,double*);
  ptr=&div;
  double *res=ptr(&a,&b);
  printf("result :%lf",*res);
  return 0;
}

double* div(double *x, double *y)
{
  double di=(*x)/(*y);
  double *d=&di;
  return d;
}