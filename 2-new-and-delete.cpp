#include <iostream>
using namespace std;

class complex
{
};

int main()
{

    // dianamic variables

    int *p = new int;
    float *f = new float;

    // dianimic object

    complex *ptr = new complex;

    // danimic array

    float *point = new float[6];

    // Delete Is Used To release the memory of a  dianamic varible,object,array.

    delete[] p;
    delete[]f;
    delete []ptr;

}





