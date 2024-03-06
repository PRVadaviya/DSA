// ++ operator overloading
#include<iostream>
using namespace std ;

class complex
{
     private:
          int a,b;

     public:
          void setdata(int x,int y)
          {
               a=x;
               b=y;
          }

          complex operator ++ (int)
          {
               complex temp;
               temp.a=a+1;
               temp.b=b+1;
               return temp ;
          }

          void showdata()
          {
               cout<<"a="<<a<<" b="<<b<<endl ;
          }
};

int main()
{
     complex a1,a2;
     a1.setdata(3,5);
     a2 = a1++ ;
     a2.showdata();
     return 0;
}