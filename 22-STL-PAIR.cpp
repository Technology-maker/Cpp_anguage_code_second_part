// pair is used to pairing two things.
// we can also make comparesion B/W two pares.
// using :- ==,!=,>,<,<=,>=

#include <iostream>
using namespace std;

class student
{
    string Name;
    int age;

public:
    void indata(string s, int a)
    {
        Name = s;
        age = a;
    }

    void showdata()
    {
        cout << "\n Name = " << Name << endl
             << "Age = " << age;
    }
};

int main()
{
    student s1;
    s1.indata("satender", 18);
    pair<string, int> p1; //             pairing two things (string and intigers).
    pair<double, float> p2;
    pair<string, string> p3;
    pair<int, student> p4;

    p1 = make_pair("satender yadav", 23); //         To set data in pairs
    p2 = make_pair(2345.345, 2345.2345);
    p3 = make_pair("satender", "yadav ji");
    p4 = make_pair(46, s1);

    cout << p1.first << "  " << p1.second << endl; //           It is used to print the ( p1 ) first value of a pair.
    cout << p2.first << "  " << p2.second << endl; //           It is used to print the ( p2 ) first value of a pair.
    cout << p3.first << "  " << p3.second << endl; //           It is used to print the ( p3 ) first value of a pair.
    cout << p4.first <<endl;

    student s2 = p4.second;
    s2.showdata();
}
