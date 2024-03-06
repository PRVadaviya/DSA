#include<iostream>
using namespace std ;


class student 
{
     private : 
               string name ;
               int rollno ;
               float cpi ;
     
     public :
               void getdata () ;
               void putdata () ;
               void sum (string , int , float ) ;
               
};

void student :: getdata (void)
{
     cout << "name==" << endl ;
     cin >> name ;
     cout << "rollno==" << endl ;
     cin >> rollno ;
     cout << "cpi==" << endl ;
     cin >> cpi ;
}

void student :: putdata (void)
{
     cout << "name==" <<name << endl ;
     cout << "rollno==" << rollno <<  endl ;
     cout << "cpi==" << cpi << endl ;

}

void student :: sum (string a , int b , float c)
{
     name = a;
     rollno = b;
     cpi = c;
}
int main ()
{

     student s1;
     s1.getdata();
     s1.putdata();

     cout << "enter a insert data" << endl ;

     s1.sum( "jeel" , 139 , 8.7 );

     s1.putdata();
     return 0;
}