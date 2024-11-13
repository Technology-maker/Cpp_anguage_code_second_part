// usage of seekp
// with the help of seekp we can add position of a get pointer

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream fin;
//     fin.open("seekg.txt");
//     char read;
//     int current_location;

//     current_location = fin.tellg();
//     cout << "" << current_location;

//     fin.seekg(3);
//     cout << " " << fin.tellg();
//     cout << " " << (char)fin.get();

//     fin.seekg(3, ios_base::cur);

//     cout << " " << fin.tellg();
//     cout << " " << (char)fin.get();

//     fin.seekg(4, ios_base::beg);

//     cout << " " << (char)fin.get();

//     fin.close();
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

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("seekp.txt", ios ::app);

    cout << " " << fout.tellp();
    fout << "yadav ji";
    fout.seekp(3,ios_base::beg);
    cout << " " << fout.tellp();
    
    fout.close();
}