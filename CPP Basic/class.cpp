#include<iostream>
using namespace std;

class number
{
     private:
          int a,b;

     public:
          void setdata(int x,int y)
          {
               a=x;
               b=y;
          }

          void showdata()
          {
               cout<<"a="<<a<<" b="<<b<<endl ;
          }
};


int main()
{
     number a1,a2;
     a1.setdata(3,4);
     a2.setdata(5,6);
     a1.showdata();
     a2.showdata();
     return 0;
}
