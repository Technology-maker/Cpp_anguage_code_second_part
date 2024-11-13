// list can be accessed ( front to back ) or ( back to front ).

// some important function in list class :-

// 1) short()
// 2) size()
// 3) push_aback()
// 4) push_front()
// 5) pop_back()         to dete the last value
// 6) pop_front()         to delete the frot value
// 7) reverse
// 8) remove
// 9) clear                clear all data in array.

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> lis1{24, 345, 54, 3, 6, 3, 76, 3, 7};
    list<string> lis2{"satender", "yadav"};
    list<float> lis3{5678.345, 345.34, 3456.2345, 345.234};

    list<string>::iterator p = lis2.begin();

    // use of (push_back) or (push_front)

    lis2.push_front("sonu yadav. ");
    lis2.push_back("is a bca student. ");

    cout << "total size of list = " << lis2.size() << endl;
    while (p != lis2.end())
    {
        cout << " " << *p;
        p++;
    }

    // use of (pop_back) or (pop_front)

    list<int>::iterator i1 = lis1.begin();

    lis1.pop_front();
    lis1.pop_back();
}

//
//
//
//
//
//
//
//
//

// shorting of array

//
//
//

// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> li1{35, 235, 56, 43, 25, 6, 7, 5, 1, 4, 56, 654};
//     li1.sort();

//     list<int>::iterator i1 = li1.begin();
//      cout << "total size of list = " << li1.size() << endl;
//     while (i1 != li1.end())
//     {
//         cout << " "<<*i1;
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
//
//
//
//
//
//
//
//
//

// reverse of array

//
//
//
// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> li1{35, 235, 56, 43, 25, 6, 7, 5, 1, 4, 56, 654};
//     li1.reverse();

//     list<int>::iterator i1 = li1.begin();
//     cout << "total size of list = " << li1.size() << endl;

//     while (i1 != li1.end())
//     {
//         cout << " " << *i1;
//         i1++;
//     }
//}

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

// remove function to remove the value from the array we can pass the value of the array.
