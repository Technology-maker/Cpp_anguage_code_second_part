// tellg

// #include <iostream>
// #include <stdio.h>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream fin;
//     fin.open("tellg.txt", ios::in);

//     char ch;
//     int pos;

//     pos = fin.tellg();

//     // reading the charactor.

//     while (!fin.eof())
//     {
//         pos = fin.tellg();
//         cout << " " << pos;
//         fin >> ch;
//     }

//     fin.close();
// };

//
//
//
//
//
//
//
//
//

// tellp

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {

//     ofstream fout;
//     int pos;
//     char ch;
//     fout.open("tellp.txt", ios::app);
//     pos = fout.tellp();
//     cout << " " << pos;
//     fout << "satender";
//     pos = fout.tellp();
//     cout << " " << pos;

//     fout.close();
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

// usage of tellg

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ifstream fin;

//     fin.open("tellg.txt",ios :: in);
//     int current_position;
//     char read;

//     current_position = fin.tellg();
//     cout << current_position; //                     print the position
//     fin >> read;              //                     read the charactor from the file.

//     current_position = fin.tellg(); //               tellg is used to give position ( they can give intiger value ).
//     cout << current_position;       //               print current position

//     fin.close();                    //    it is used to close the function.
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

// use of tellp

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("tellp.txt", ios::app);
    int current_position;
    
    current_position = fout.tellp();
    cout << current_position;
    fout << " satender yadav";
    current_position = fout.tellp();
    cout << current_position;
}