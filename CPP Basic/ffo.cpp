//using friend function with operator overloading 

#include<iostream>
using namespace std;

class a
{
     private:
               int x,y;
     
     public :
               void getdata ()
               {
                    cout << "enter a data " << endl ;
                    cin >> x >> y ;
               }

               void showdata()
               {
                    cout <<"x=="<< x <<"  y=="<< y << endl ;
               }

               friend a operator +(a,a) ;
};

               a operator + (a ob1 , a ob2)
               {
                    a temp ;
                    temp.x = ob1.x + ob2.x ;
                    temp.y = ob1.y + ob2.y ;
                    return temp ;
               }

int main ()
{
     a obj1,obj2,obj3 ;

     obj1.getdata();
     obj2.getdata();

     obj3 = obj1 + obj2 ;
     obj3.showdata();
     return 0;     
}