// class inside a class that is called class

#include <iostream>
#include <string.h>
using namespace std;

class student
{
    char name[20];
    int age;
    float student_id;

    class address
    {
        int house_no;
        int pincod;
        char landmark[30];
        char city[20];
        char state[23];

    public:
        void set_data(int h, int pin, char *land, char *ct, char *ste)
        {

            house_no = h;
            pincod = pin;
            strcpy(landmark, land);
            strcpy(city, ct);
            strcpy(state, ste);
        }

        void show_address()
        {
            cout << "house number = " << house_no << endl;
            cout << "pincode = " << pincod << endl;
            cout << "landmark = " << landmark << endl;
            cout << "city = " << city << endl;
            cout << "state = " << state << endl;
        }
    };

public:
    address addrs;

    void set_data(char *naam, int umar, float stuid)
    {
        strcpy(name, naam);
        age = umar;
        student_id = stuid;
    }

    void show_data_ourer()
    {
        cout << "name = " << name << endl;
        cout << "age  = " << age << endl;
        cout << "student_id = " << student_id << endl;
    }
};

int main()
{
    char name[20], landmark[20], citty[20], state[23];
    int age, pincode, houseno;
    float student_id;

    cout << "enter your name. ";
    gets(name);
    cout << "enter your age. ";
    cin >> age;
    cout << "enter your college id. ";
    cin >> student_id;

    cout << "enter house number = ";
    cin >> houseno;
    cout << "enter your pincode = ";
    cin >> pincode;
    cout << "enter your landmark = ";
    gets(landmark);
    cout << "enter your city = ";
    gets(citty);
    cout << "enter your state = ";
    gets(state);

    student s1;
    s1.set_data(name, age, student_id);
    s1.addrs.set_data(houseno, pincode, landmark, citty, state);
    s1.show_data_ourer();
    s1.addrs.show_address();
}