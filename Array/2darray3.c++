//matrix roteted 90 degree

#include<iostream>
#include<vector>
using namespace std ;

vector<vector<int>> change (vector<vector<int>> v1)
{
     int row = v1.size();
     int col = v1[0].size();
     vector<vector<int>>ans(row, vector<int>(col, 0));//{ {0,0,0} ,{0,0,0} , {0,0,0}} ;//chatgpt
    // int row = v1.size();
    // int col = v1[0].size();

     int startrow = 0;
     int startcol = 0;
     int endrow = row-1;
     int endcol = col-1 ;

     while(endrow>=startrow && startcol<=endcol)
     {
          for(int index=0 ; (index<col && index<row) ; index++)
          {
               ans[index][startcol] = v1[endrow][index];
          }
          endrow--;
          startcol++;
     }

     return ans;
}

int main ()
{
     vector<vector<int>> v{ {1,2,3},{4,5,6},{7,8,9} };
     vector<vector<int>> v2;
     v2=change(v);

     for(int i=0 ; i<v2.size() ; i++)
     {
          for(int j=0 ; j<v2[0].size() ; j++)
          {
               cout << v2[i][j] <<" " ;
          }
          cout << endl ;
     }
     return 0;
}
