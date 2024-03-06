// + operator overloading
#include<iostream>
using namespace std;

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

          complex operator+ (complex c)
          {
               complex temp;
               temp.a = a + c.a ; //a1.a + a2.a
               temp.b = b + c.b ; //a1.b + a2.b
               return temp ;

          }

          void showdata()
          {
               cout<<"a="<<a<<" b="<<b<<endl ;
          }
};

int main()
{
     complex a1,a2,a3;

     a1.setdata(3,4);
     a2.setdata(5,6);
     a3 = a1 + a2;
     a3.showdata();
     return 0;
     

}