#include <iostream>
using namespace std;

int main() {
    int b[5][3];
    cout << "sizeof(int) = \t\t" << sizeof(int) << endl;
    cout << "sizeof(int*) = \t\t" << sizeof(int*) << endl;
    cout << "sizeof(double) = \t" << sizeof(double) << endl;
    cout << "sizeof(double*) = \t" << sizeof(double*) << endl;
    cout << "sizeof(char) = \t\t" << sizeof(char) << endl;
    cout << "sizeof(char*) = \t" << sizeof(char*) << endl;
    cout << "sizeof(bool) = \t\t" <<sizeof(bool) << endl;
    cout << "sizeof(bool*) = \t" <<sizeof(bool*) << endl;
    cout << "sizeof(b) = \t\t" << sizeof(b) << endl;
    cout << "sizeof(b+0) = \t\t" << sizeof(b+0) << endl;
    cout << "sizeof(b[0]) = \t\t" << sizeof(b[0]) << endl;
    cout << "sizeof(*(b+0)) = \t" << sizeof(*(b+0)) << endl;
    cout << "sizeof(b[0][1]) = \t" << sizeof(b[0][1]) << endl;
    cout << "sizeof(*(*(b+0)+1)) is: " << sizeof(*(*(b+0)+1)) << "\n\n";

    cout << "b is: " << b << endl; 
    cout << "b + 1 is: " << b + 1 << endl;
    cout << "&b is: " << &b << endl;
    cout << "&b + 1 is:" << &b + 1 << endl << endl;

    cout << "sizeof((int*)(b+0)) = \t" << sizeof((int*)(b+0)) << endl;
    int* z = (int*)(b+0);
    cout << "int* z has " << z << endl;
    cout << "z + 15 = " << z + 15 << endl;
    cout << "z + 5 * sizeof(b[0]) / sizeof(int) = " 
         << z + 5 * sizeof(b[0]) / sizeof(int) << endl;
    return 0;
}
