// type convesion class to class
#include <iostream>
using namespace std;

class product
{
    int a, b;

public:
    void set_data(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    int getm()
    {
        return a;
    }
    int getn()
    {
        return b;
    }
};

class item
{
    int m, n;

public:
    item(product p)
    {
        m = p.getm();
        n = p.getn();
    }

    item()
    {
    }
    void show_data()
    {
        cout << m << endl
             << n;
    }
};

int main()
{
    item i1;
    product p1;
    p1.set_data(2, 4);
    i1 = p1;
    i1.show_data();
}