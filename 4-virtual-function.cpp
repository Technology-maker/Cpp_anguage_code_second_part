


#include <iostream>
using namespace std;

class a
{
public:
    virtual void fun1()   //virtual function
    {
    }
};

class b : public a
{

public:
      void fun1() //        function overloading
    {
        cout<<"hi";
    }
};

int main()
{

    

    a *a1, a2;
    b o1;
    a1 = &a2;
    a1 = &o1;
    a1->fun1();

}







