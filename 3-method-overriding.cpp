// 1 (mehod overloading) or (function overriding)
// 2 (method overloadig) or (function overloading)/
// 3 (method hiding) or (function hiding)

/*
#include <iostream>
using namespace std;

class A //    class (A) is a parent class of class (B)
{
public:
    void first()
    {
    }

    void second()
    {
    }
};

class B : public A //   class (B) is a child class of class (A)
{
public:
    void first() // function overriding
    {
    }

    void second(int a) //   function hiding
    {
    }
};

int main()
{

    B obje;
    obje.first();
    obje.second(7);
}

*/

//
//
//
//
//
//
//
//
//
//
//
//

//                               function overloading

#include <iostream>
using namespace std;

void add_data(int i);
void add_data(int i, int = 0);

class c
{
    int x, y;

public:
    void add_data(int i)
    {
        x = i;

        cout << "value of x = " << x << endl;
    }

    void add_data(int i, int j)
    {
        x = i;
        y = j;
        cout <<"addition of two number is = "<<x+y;
        
    }
};

int main()
{
    c c1;
    c1.add_data(4,7);
}
