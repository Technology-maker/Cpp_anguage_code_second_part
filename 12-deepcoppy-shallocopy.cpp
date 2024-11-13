// how to creat a copy of an object

// two types of copy :-  ( shallo copy ) and ( deep copy ) .

#include <iostream>
using namespace std;

class objcpy
{

    int a, b;
    int *ptr;

public:
    void set_data(int, int, int);
    void show_data();

    objcpy()
    {
        ptr = new int;
    }

    ~objcpy()
    {
        delete ptr
    }
};

void objcpy ::set_data(int n1, int n2, int p)
{
    a = n1;
    b = n2;
    *ptr = p;
}

void objcpy ::show_data()
{
    cout << "value of a = " << a << endl
         << "value of b = " << b << endl
         << "value of *ptr = " << *ptr << endl
         << "value of ptr = " << ptr;
}

int main()
{
    objcpy c1, c2;
    c1.set_data(2, 6, 9);
    c2 = c1; // this is known as shallow copy.
    c2.show_data();
}