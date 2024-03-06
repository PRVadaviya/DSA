#include<stdio.h>
#include<stdlib.h>

void main ()
{

     int *p,n;
     scanf("%d",&n);
     p=(int *)malloc(n*sizeof(int));

     if(p == NULL)
     {
     printf("memory not allocated \n ");
     exit(0);
     }
     else
     {
          for(int i=0 ; i<n ;i++)
          {
               scanf("%d",p+i);
          }

          for(int i=0 ; i<n ;i++)
          {
               printf("\n ui===%u %10.0d",p+i,*(p+i));
          }

          free(p);

     }
}