#include<stdio.h>
#include<stdlib.h>

struct student 
{
     char name[20];
     int roll;
     float cpi;
} s1 ;
void main ()
{
     struct student *p;
     p=(struct student *)calloc(3,sizeof(s1));

     if(p==NULL)
     {
     printf("memory not allocated \n ");
     exit(0);
     }
     else
     {
           
          s1.roll = 136;
          s1.cpi = 8.22;

          printf("%c---%d----%f",s1.name,s1.roll,s1.cpi);
     }

     free(p);

     

}