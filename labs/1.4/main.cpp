/*
* Done by:
* Student Name: David Hrytsenok
* Student Group: B-121-24-1-SE
* Lab 1.4 
*/
#include <iostream>
using namespace std;

int main() {
    unsigned short int var1 = 612;
    int var2 = -805;
    float var3 = 14.4328f;
    double var4 = -30.22e100;

    unsigned short int* ptr1 = nullptr;
    int* ptr2 = nullptr;
    float* ptr3 = nullptr;
    double* ptr4 = nullptr;
    void* voidPtr = nullptr;

    ptr1 = &var1;
    ptr2 = &var2;
    ptr3 = &var3;
    ptr4 = &var4;

    cout << "unsigned short int: " << sizeof(var1) << " byte" << endl;
    cout << "int: " << sizeof(var2) << " byte" << endl;
    cout << "float: " << sizeof(var3) << " byte" << endl;
    cout << "double: " << sizeof(var4) << " byte" << endl;
    cout << "unsigned short int pointer: " << sizeof(ptr1) << " byte" << endl;
    cout << "int pointer: " << sizeof(ptr2) << " byte" << endl;
    cout << "float pointer: " << sizeof(ptr3) << " byte" << endl;
    cout << "double pointer: " << sizeof(ptr4) << " byte" << endl;

    voidPtr = ptr1;
    cout << "ptr1 (unsigned short int*): " << voidPtr << endl;
    
    voidPtr = ptr2;
    cout << "ptr2 (int*): " << voidPtr << endl;

    voidPtr = ptr3;
    cout << "ptr3 (float*): " << voidPtr << endl;

    voidPtr = ptr4;
    cout << "ptr4 (double*): " << voidPtr << endl;

    int& ref2 = var2;
    cout << "var2: " << ref2 << endl;

    return 0;
}
