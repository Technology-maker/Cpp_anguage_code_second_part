/*
(1)namespace is a container for identifires

(2)namespace cope is globaly,( they can define outside of a function. )

(3)we cannot use semicollon when namespace block was end.

(4) we cannot make object of a namespace and this is not a class.

syntax of namespace  :-



namespace satender
{

}




namespace sy = satender
{

}




(5) they can be unnamed namespace

namespace
{
    //declaration
}






*/

// use of namespace

// #include <iostream>
// using namespace std;
// namespace satender
// {
//     int a;
//     float f1;
//     int addition();
//     class c1
//     {
//     public:
//         int clss_one;
//     };

// }
// int main()
// {
//     satender::a = 10;
// }
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
//
//
//
//
// using is a keyword that allows to use namespace in our code
//
//
//
//

#include <iostream>
using namespace std;

namespace student
{
    int age;
    float f1;
    int fun();
    class A
    {
    public:
        void innerfun();
    };
}

void student ::A::innerfun()
{
    cout << "you are in inner function .";
}

int student ::fun()
{
    cout
        << "you are in fun . ";
    return 0;
}
using namespace student;

int main()
{
    age = 29;
    f1 = 34;
    student::fun();
    A a1;

    a1.innerfun();
}

// accessing member of namespace
