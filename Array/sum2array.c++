#include<iostream>
using namespace std;

int ans[9];

void sum (int a[] , int b[] , int m , int n)
{
     int i=m-1 , j=n-1 ;
     int sum=0 ,carry=0 ,k=0;

     while(i>=0 && j>=0)
     {
          sum=a[i]+b[j]+carry;
          carry=sum/10;
          ans[k]=sum%10;
          k++;
          i--;
          j--;
     }

     while(i>=0)
     {
          sum=a[i]+carry;
          carry=sum/10;
          ans[k]=sum%10;
          k++;
          i--;
     }

     while(j>=0)
     {
          sum=b[j]+carry;
          carry=sum/10;
          ans[k]=sum%10;
          k++;
          j--;
     }


     for(int y=k-1 ; y >= 0 ; y--)
     {
          cout << ans[y] << "\t";
     }

}

int main ()
{
     int a[4]={9,9,9,9};
     int b[2]={9,9};
     sum(a,b,4,2);
     return 0;
}