#include<stdio.h>
#include<stdlib.h>

void main ()
{
     int *p,n;
     scanf("%d",&n);
     p=(int *)malloc(n*sizeof(int));

     if(p == NULL)
     {
     printf("memory not allocated ");
     exit(0);
     }
     else
     printf("memory allocated ");

}