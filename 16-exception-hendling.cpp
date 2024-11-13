// exceptional is any abnormal behaviour , run time error .

// c++  provide a built-in landline  mechanism that is  called exception handling .

// using expection handling you can more easily manage and respond to runtime error .

// we can use three keywords :-
// (1) try
// (2) catch
// (3) throgh

#include <iostream>
using namespace std;

int main()
{
    cout << "WELCOME SATENDER YADAV" << endl;
    int a, b, sum, sum_store;
    cout << "enter two number. ";
    cin >> a, b;
    try
    {
        throw(sum);
    }

    catch (int sum)
    {
        cout << "sum of two number is = " << sum_store;
        }
}