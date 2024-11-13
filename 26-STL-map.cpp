// map always arranged its key in shorted order
// in case the key are of string type they are shorted in dictionary order

// useful function in map

// 1. at()                 it is used to print the data  ex:- map_name.at(key);
// 2. []
// 3. size()
// 4. empty()
// 5. insert()
// 6. clear()              it is use to clear data from array

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> costomer;

    costomer[100] = "satender yadav"; // 100 is key and (satender yadav is value)
    costomer[123] = "sahil yadav";    // 123 is key and (sahil yadav)
    costomer[138] = "sonu yadav";     // 138 is key and (sonu yadav);
    costomer[190] = "mohit lakhera";  // 190 is key and (mohit lakhera)

    // second way to write values in the array

    map<int, string> c{{100, "satender"}, {130, "mohit yadav"}, {170, "sonu don"}}; // numbers are (key) and strings are (values)

    // print the data of a map with the help of iterator.

    map<int, string>::iterator ite = costomer.begin();
    while (ite != costomer.end())
    {
        cout << "" << ite->second << endl;
        ite++;
    }

    // use of at() function

    cout << costomer.at(100) << endl;

    // use of size()  function

    cout << "values in our array = " << costomer.size() << endl;

    // use of empty()  function

    cout << "aarray is empty = " << costomer.empty() << endl; //  this function give (true and false).

    // use of insert()  function

    costomer.insert(pair<int, string>(130, "devil"));

    cout << costomer.at(130);
}