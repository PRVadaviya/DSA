//s.s--37

#include<iostream>
using namespace std ; 

class a
{
     private:
               int x;
     protected:          
               void setvalue(int k)
               {    x=k;
                    cout<< x << endl;
               }
};

class b : public a       //child class 
{
     public:
               void setdata (int p)
               {setvalue(p);}
};


int main ()
{
     b obj ;
    // obj.setvalue(3);         // error -- because visibility mode is public that reason we must use protected to protected function  
                               //  remember graps 
     obj.setdata(4);  
     return 0;
}