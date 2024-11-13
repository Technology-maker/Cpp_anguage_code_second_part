// what is initilizer ?

// ans :-
//         initilizers list is used to initilize data member of a class.

//         the list of member to be initilzed is indicate with constructor as a comma seperated list folloed by a colon.

//
//

// syntax of initilizer

#include <iostream>
using namespace std;

class dummy
{

    int a, b;
    const int x = 78;
    int &y;

public:
    dummy(int &n) : a(38), b(35), x(45), y(n)
    {
        cout << n << endl;
        cout << &y << endl;
        cout << y << endl;
    }
};

int main()
{
    int m = 6;
    dummy d1(m);
}
