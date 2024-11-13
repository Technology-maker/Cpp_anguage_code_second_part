// inharitance (two parente and one child .)

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int x = 49;
//     void val_x()
//     {
//         cout << "value of x = " << x << endl;
//     }
// };

// class B
// {
// public:
//     int y = 50;
//     void val_y()
//     {
//         cout << "value of y = " << y << endl;
//     }
// };
// class C : public A, public B
// {
// public:
//     int sum;

//     int add()
//     {
//         int sum = x + y;
//         cout << sum;
//     };
// };

// int main()
// {
//     C c1;
//     c1.add();
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
//
//

// inharitance

// two child one parent.

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int x = 49;
//     void val_x()
//     {
//         cout << "value of x = " << x << endl;
//     }
// };

// class B : public A
// {
// };
// class C : public A
// {
// public:
// };

// int main()
// {
//     B b1;
//     C c1;
//     b1.val_x();
//     c1.val_x();
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
//
//
//
//
//

// #include <iostream>
// using namespace std;

// class item
// {
//     int a, b;

// public:
//     item(product p)
//     {
//         a = p.geta();
//         b = p.getb();
//     }
//     item()
//     {
//     }
//     void show_data()
//     {
//         cout << "val of a = " << a << endl
//              << "val of b = " << b;
//     }
// };

// class product
// {
//     int a, b;

// public:
//     void set_data(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     int geta()
//     {
//         return a;
//     }

//     int getb()
//     {
//         return b;
//     }
// };

// int main()
// {
//     product p1;
//     item i1;
//     p1.set_data(2, 7);
//     i1 = p1;
//     i1.show_data();
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

//                    exception in c++.
//

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Hello to addition of two number. " << endl;
//     try
//     {

//         char ch[20];
//         cout << "enter your name . ";
//         gets(ch);
//         throw ch;
//     }
//     catch (char name[20])
//     {
//         cout << "your name is = " << name << endl;
//     }

//     catch (char ch[20])
//     {
//         cout << "hello";
//     }

//     catch (int ch)
//     {
//     }
//     cout << " last line .";
// }
//
//
//
//
//
//
//

// exception handlin

// #include <iostream>
// using namespace std;

// void fun(int i);

// int main()
// {

//     cout << "Hello to addition of two number. " << endl;
//     int i = 2;
//     try
//     {
//         fun(i);
//     }
//     catch (int i)
//     {
//         cout << "value of i = " << i << endl;
//     }

//     catch (int i)
//     {
//         cout << "value of i = " << i;
//     }

//     catch (int)
//     {
//     }

//     catch (int i)
//     {
//         cout << "value of i = " << i;
//     }

//     cout << " last line .";
// }

// void fun(int i)
// {
//     throw i;
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

// #include <iostream>
// using namespace std;

// void runclass();

// class dstruct
// {
//     int a, b;
//     int *ptr;

// public:
//     void function(int n1, int n2, int n3)
//     {
//         a = n1;
//         b = n2;
//         ptr = new int;
//         *ptr = n3;
//     }

//     void display()
//     {
//         cout << "val of a = " << a << endl;
//         cout << "val of b = " << b << endl;
//         cout << "val of ptr = " << *ptr << endl;
//     }

//     ~dstruct()
//     {
//         delete ptr;
//     };
// };

// int main()
// {
//     runclass();
// }

// void runclass()
// {
//     dstruct d1;
//     d1.function(23, 3, 6);
//     d1.display();
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
// #include <iostream>
// using namespace std;
// template <class x, class y>

// x bignumber(x n1, y n2)
// {
//     if (n1 > n2)
//     {
//         return n1;
//     }
//     else if (n2 > n1)
//     {
//         return n2;
//     }
//     else
//     {
//         cout << "invalid number !";
//     }
// }

// int main()
// {
//     cout << "maximum number. ", bignumber(567, 56.65);
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
// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> li1{35, 235, 56, 43, 25, 6, 7, 5, 1, 4, 56, 654};
//     li1.remove(5);

//     list<int>::iterator i1 = li1.begin();
//     cout << "total size of list = " << li1.size() << endl;

//     while (i1 != li1.end())
//     {
//         cout << " " << *i1;
//         i1++;
//     }
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

// #include <iostream>
// using namespace std;
// int multiply(int, int);
// float multiply(float, float);

// int main()
// {
//     int x, y, z;
//     float f1, f2, f3;
//     cout << "Enter two int number of multiplication . ";
//     cin >> x >> y;
//     cout << "Enter two float number of multiplication . ";
//     cin >> f1 >> f2;
//     z = multiply(x, y);
//     f3 = multiply(f1, f2);
//     cout << "multyply of int = " << z << endl;
//     cout << "multyply of float = " << f3 << endl;
// }

// int multiply(int a, int b)
// {
//     return (a * b);
// }

// float multiply(float a, float b)
// {
//     return (a * b);
// }

// #include <iostream>
// using namespace std;

// class addition
// {
//     int a, b;

// public:
//     void data_in(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     void display()
//     {
//         cout << " value of a = " << a << endl
//              << "value of b = " << b;
//     }

//     addition add(addition x)
//     {
//         addition store;
//         store.a = x.a + a;
//         store.b = x.b + b;
//         return store;
//     }
// };

// int main()
// {
//     addition a1, a2, a3;
//     a1.data_in(2, 3);
//     a2.data_in(2, 3);
//     a3 = a1.add(a2);
//     a3.display();
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

// #include <iostream>
// using namespace std;

// class stats
// {
//     static int s; // static member veriable.

// public:
//     static void set_s(int a) // class function (or) static member function.
//     {
//         s = a;
//     }
//     void display()
//     {
//         cout << "value of s = " << s;
//     }
// };

// int stats::s = 10;

// int main()
// {
//     static float f1; // static local variable function.
//     stats ::set_s(23);
//     stats s1;
//     s1.display();
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

#include <iostream>
#include<string.h>
#include<stdio.h>
#include<
using namespace std;
class norcar
{
    string name[20];
    char eingin_type[10];
    float price;
    int horce_pow;

public:
};

int main()
{
    string car_name;
    string eingin_type;
    float car_price;
    cout << "Enter thecar name. ";
    gets(car_name);
    cout << "enter car price. ";
    cin >> car_price;
    cout << "enter eingin type (Petrol/Desil). ";
    gets(eingin_type);


    norcar shift, bugatti, lemborgani;
}
