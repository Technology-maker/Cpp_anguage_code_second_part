// A pointer contain address of an object that is known as object pointer.

#include <iostream>
using namespace std;

class point
{
    int x;

public:
    void data_in(int a)
    {
        x = a;
    }

    void data_show()
    {
        cout << "value of x = " << x;
    }
};

int main()
{

    point *p2;
    point p1;

    p2 = &p1;

    p2->data_in(3);

    p2->data_show();
}