#include<iostream>
#include<vector>
using namespace std ;

int main()
{
     
     vector<int> arr = {2,10,4,8,6,9,11};
     int n = 7,temp,j ;

     for(int i=1 ; i<n ; i++)
     {
          temp = arr[i];

          for(int j=i-1 ; j>=0 ; j--)
          {
               if(arr[j] > temp)
               {
                    arr[j+1] = arr[j];  //become a space
               }
               else
               {
                    break;
               }
          }
          arr[j] = temp ;
     }

     for(int z : arr)
     {
          cout << z  << "  " ;
     }

     return 0;
}