// virtual distructure

#include <iostream>
using namespace std;

class A
{
    int a;

public:
};

class B : public A
{
    int b;

public:
};

void fun();

int main()
{
    fun();
}

void fun()
{
    A *ptr;
    A a1;
    ptr = new A;

    delete ptr;
}
