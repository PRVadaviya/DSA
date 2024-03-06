#include<iostream>
using namespace std;

class a
{
     private:
               int x;

     public:
               friend a operator - (a);

               void getdata (int p)
               {
                    x=p ;
               }

               void setdata()
               {
                    cout << x << endl ;
               }
};

     a operator - (a peak)
     {
          a temp ;
          temp.x=(-peak.x);
          return (temp) ; 
     }

int main ()
{
     a obj,obj1;
     obj.getdata(15);
     obj1 = -obj ;
     obj1.setdata();

}