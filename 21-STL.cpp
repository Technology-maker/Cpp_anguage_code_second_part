// STL  id divided into three parts 
// 1) container
// 2) algorithm
// 3) iterator

// container library is a collecction of classes
// important array function of in array class

// 1. at()                   it is used to print a number of a array.

// 2. []operator             ex :- arr1[4]

// 3. front()                this function gives first element of the array

// 4. back()                 this function gives last element of the array

// 5. fill()                 it is use to fill same value in array

// 6. swap()                 it helps to swip two array. but array type will be same

// 7. size()                 this function give size of an array

// 8. begin()                it is point the first elements of a array

// 9. end()                  

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> arr1 = {432, 54, 54, 54, 57};
    array<int, 10> arr2 = {234, 45, 45, 45, 75};

    cout << arr1.at(3) << endl; // use of at function

    cout << arr1[4] << endl; // use of operator

    cout << arr1.front() << endl; // use of front

    cout << arr1.back() << endl; // use of back

    arr1.fill(10); // use of fill

    for (int i = 0; i <= 7; i++)
    {
        cout << " " << arr1[i];
    }

    cout << endl;
    arr1.swap(arr2); // use of swap function (B/W) two array

    for (int i = 0; i <= 7; i++)
    {
        cout << " " << arr1[i];
    }

    cout << endl;
    cout << "size of arr1 = " << arr1.size();
}
