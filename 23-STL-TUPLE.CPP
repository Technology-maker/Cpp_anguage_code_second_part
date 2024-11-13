// tuple is use to make pare of three or more than three data and objects.
// exapmle :-  tuple <string,int ,int > tup1;

// we can also make comparesion B/W two tuple.
// using :- ==,!=,>,<,<=,>=

#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    tuple<string, int, float, char> tup1;             // making tuple
    tup1 = make_tuple("Yaduvanshi", 18, 789.56, 'a'); // making pairr with the help of tuple
    cout << get<0>(tup1) << endl;
    cout << get<1>(tup1) << endl;
    cout << get<3>(tup1) << endl;
}
