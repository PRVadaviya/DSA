#include<iostream>
using namespace std;
int binary (int a[],int n,int key);


int binary (int a[],int n,int key)
{
     int start,end,mid;
     start = 0;
     end = n-1;
                                    //becuase time & space compexity
     mid = (start + end )/2;        //start + (end - start) / 2

     while(start <= end )
     {
          if(a[mid] == key)
          return mid ;
          else if( a[mid] < key)
               start = mid + 1 ;
          else
               end = mid - 1 ;

          mid = (start + end)/2 ;
     }
     return -1 ;
}



int main()
{
     int even[ ]={5,8,10,15,19,25};
     int odd[ ]={2,6,7,11,17};
     int c;

     c= binary(even ,6,19);
     cout << c << endl;

     cout << binary(odd , 5, 17) << endl ;


     return 0;
}