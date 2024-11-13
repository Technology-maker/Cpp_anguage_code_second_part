// normal constructor

// #include <iostream>
// using namespace std;

// class A
// {
//     char name[20];
//     int age;
//     long int number;
//     int rollnumber;
//     float idnumber;

// public:
//     A()
//     {
//     }
//     A(char naam, int umar, long int mobnumber, int rolnumber, float stdidnum)
//     {
//         name[20] = naam;
//         age = umar;
//         number = mobnumber;
//         rollnumber = rolnumber;
//         idnumber = stdidnum;
//     };
//     void show_data()
//     {
//         cout << endl
//              << "name = " << name << endl;
//         cout << "age  = " << age << endl;
//         cout << "mobile number  = " << number << endl;
//         cout << "roll number  = " << rollnumber << endl;
//         cout << "student id number  = " << idnumber << endl;
//     }
// };
// int main()
// {
//     char name[20];
//     int age;
//     long int mobnumber;
//     int rollno;
//     float student_idnum;
//     cout << "enter your name = ";
//     gets(name);
//     cout << "enter your age = ";
//     cin >> age;
//     cout << "enter your mobile number = ";
//     cin >> mobnumber;
//     cout << "enter your roll number = ";
//     cin >> rollno;
//     cout << "enter your student id = ";
//     cin >> student_idnum;

//     A a1(name[20], age, mobnumber, rollno, student_idnum);
//     a1.show_data();
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
//
//
//

// dianimic cnstructor

#include <iostream>
using namespace std;

class A
{
    int a, b;
    int *ptr;

public:
    A(int n1, int n2, int n3) //      this is a dynamic constructor.
    {
        a = n1;
        b = n2;
        ptr = new int; //             (dyanamic block are formed and (ptr will point the block))
        *ptr = n3;
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << *ptr << endl;
    }
};

int main()
{
    A a1(24, 45, 33);
    a1.display();
}
