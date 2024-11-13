// (VECTOR) class is a cointainer class

// It support a dynamic array

// we can also make comparesion B/W two pares.
// using :- ==,!=,>,<,<=,>=

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1{23, 45, 75};

    vector<string> v2{"satender yadav ji"};

    vector<int> v3(5); //       5 is the length of a array

    vector<char> v4(3, 10); //        size of array is 3 and value assign in array is 10 in all index.

    vector<string> v5(4, "hello"); // size of array is 4 and value assign in array is (hello) in all index.

    // subscript operator []

    // this operator is also define for vector

    //  use of superscript operator

    cout << v5[0] << endl;
    cout << v5[1] << endl;
    cout << v5[2] << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << v1[i] << endl;
    }

    // push_back()

    // it is a member function which can be use to add value to the vector at the end.

    vector<int> vec1;
    // cout << vec1.capacity() << endl;
    // vec1.push_back(3);
    // cout << vec1.capacity() << endl;

    // by using for loop

    for (int i = 0; i < 10; i++)
    {
        vec1.push_back(10 * (i + 1));
        cout << vec1.capacity() << endl;
    }

    // to print the array.

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << "  " << vec1[i];
    }
    cout << endl;

    // clear function :- it remove all the element from the vector.

    vec1.clear();
    cout << vec1.size();

    // pop_back function.

    // it is use to delete the element from the array.

    vec1.pop_back();
    cout << endl;
    cout << vec1.capacity() << endl;

    vec1.pop_back();
    cout << vec1.capacity() << endl;

    vec1.pop_back();
    cout << vec1.capacity() << endl;

    vec1.pop_back();
    cout << vec1.capacity() << endl;

    // capcity function :- capacity()

    cout << "current capicity = " << vec1.capacity() << endl;

    cout << "current size = " << vec1.size() << endl;

    // at function :- at()   (we can pass index in at they can retuen the data at the index).

    cout << vec1.at(9) << endl
         << endl;

    // fornt and back function :- front() function can return the front value of a vector   .    back() function can return the back value of a vector.

    cout << "front value " << vec1.front() << endl;
    cout << "last value " << vec1.back() << endl;

    // we can add the value in the vector help of iterator

    vector<int>::iterator i1 = vec1.begin();

    vec1.insert(i1 + 2, 45);

}
