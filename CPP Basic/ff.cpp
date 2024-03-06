// benefits 1 of friend funtion 

#include<iostream>
using namespace std ;
class b;
class a
{
     private:
               int x ;

     public:
               void getdata(int p)
               {
                    x=p;
               }
               friend void sum (a,b);
 
};

class b
{
     private:
               int y;

     public:
               void getdata(int q)
               {
                    y=q;
               }
               friend void sum (a,b);

};

          void sum(a ob1,b ob2)
          {
               cout << "sum is " << ob1.x + ob2.y;
          }

int main ()
{
     a obj1 ;
     b obj2 ;
     obj1.getdata(3);
     obj2.getdata(4);
     sum(obj1,obj2);
     return 0;
}