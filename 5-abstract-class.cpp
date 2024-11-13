// pure vertual function

// a do nothig functon is pure vertual function.

// (some rules of do nothing function in c++)
// rules:-

// (1) we cannot make the object of class person.
// (2) we can make overriding of a  finction.
// (3) without child class we canot accessable parent functions.

//
//
//
//
//
//
//
//

// v.important

// abstract class : ->
//                       those class which contain atleast one ( pure virtual function ) that is called abstract class.

#include <iostream>
using namespace std;

class person
{

public:
    virtual void fun() = 0; // pure virtual function.

    void f1() {

    };
};

class student : public person
{

public:
    void fun()
    {
    }
    void in_data()
    {
        cout << "hello";
    }
};

int main()
{
    student s1;
    s1.in_data();
}