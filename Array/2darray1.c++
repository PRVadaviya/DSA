//print 2d array of wave foam
#include<iostream>
using namespace std;


int main ()
{
     int arr[4][4];

     for(int i=0 ; i<4 ; i++)
     {
          for(int j=0 ; j<4 ; j++)
          {
               cin >> arr[i][j];
          }
     }

     for(int i=0 ; i<4 ; i++)
     {
          for(int j=0 ; j<4 ; j++)
          {
               cout << arr[i][j] << " ";
          }
          cout << endl ;
     }

     for(int i=0 ; i<4 ; i++)
     {
               if(i%2==0)                             
               {
                    for(int z=0 ; z<4 ; z++)
                    {
                         cout << arr[i][z] << " ";
                    }
                    
                    cout << endl ;
               }
               else                                    // if(i&1)//second approch
               {
                   for(int z=3 ; z>=0 ; z--)
                    {
                         cout << arr[i][z] << " ";
                    } 

                    cout << endl ;
               }
          
     }

     return 0;
}