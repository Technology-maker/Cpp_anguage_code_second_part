

// sintax of the file is :-
//    ofstream ofs;
//    ofs.open("file_name",file_opening _mode);
//    ifstream ifs;
//    ifs.open("file_name",file_opening_mode);
//
//
//

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     char ch;
//     ifstream fin;
//     fin.open("first-file.txt");
//     ch = fin.get();

//     while (!fin.eof())
//     {
//         cout << ch;
//         ch = fin.get();
//     }
// }

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fos;
    ifstream fis;

    // Set Value In a file.

    char ch;
    fos.open("second-handling.txt", ios::app);
    fos << "hello bhai";
    fos << "yadav ji";
    fos.close();

    // read the value from file.

    fis.open("second-handling.txt", ios::app);

    ch = fis.get();

    while (!fis.eof())
    {
        cout << ch;
        ch = fis.get();
    }
}