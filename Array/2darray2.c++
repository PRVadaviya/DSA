//spire wave  ---    complexsity - 0(nm) //travel all element ohk.

#include<iostream>
#include<vector>
using namespace std; 

vector<int> wave ( vector<vector<int>> v1 )
{
     int row = v1.size();          // ketla vector 6 tenathi row made 
     int col = v1[0].size();      // child vector ni size ii colum thay  

     int total = row*col ;
     int count = 0;

     int startrow = 0;
     int endrow=row-1;
     int startcol=0;
     int endcol=col-1;

     vector<int>ans;

     while(count < total)
     {
          //paheli row mate -> paheli column thi last column

          for(int index=startcol ; (count < total && index <= endcol) ; index++)
          {
               ans.push_back(v1[startrow][index]);
               count++;
          }

          startrow++;

          //last column mate -> paheli row to last row 

          for(int index=startrow ; (count < total && index <= endrow) ; index++)
          {
               ans.push_back(v1[index][endcol]);
               count++;
          }

          endcol--;

          //last row -> travel endcol to startcol

          for(int index=endcol ; (count < total && index >= startcol ) ; index--)
          {
               ans.push_back(v1[endrow][index]);
               count++;
          }

          endrow--; 

          // first col ->  travel endrow to startrow

          for(int index=endrow ; (count < total && index >= startrow) ; index--)
          {
               ans.push_back(v1[index][startcol]);
               count++;
          }

          startcol++;    

     }

          return ans ;
}

int main ()
{
     vector<int>v;
     vector<vector<int>>v3 { {1,2,3} , {4,5,6} , {7,8,9}};

     v=wave(v3);

     for(int i=0; i<v.size() ; i++)
     {
          cout << v[i] << " ";
     }
     return 0;
}