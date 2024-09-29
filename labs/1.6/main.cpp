/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 *  Lab 1.6
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "Part I" << endl;
    {
        const char CONST_SYMBOL_1 = '1';
        const char CONST_SYMBOL_2 = 'p';
        const char CONST_SYMBOL_3 = '№';

        char var1 = CONST_SYMBOL_1;
        char var2 = CONST_SYMBOL_2;
        char var3 = CONST_SYMBOL_3;

        char code_symbol1 = 0x7a;
        char code_symbol2 = 0x3b;
        char code_symbol3 = 0x09;

        cout << "Constant values: " << CONST_SYMBOL_1 << ", " << CONST_SYMBOL_2 << ", " << CONST_SYMBOL_3 << endl;
        cout << "Initialized variables: " << var1 << ", " << var2 << ", " << var3 << endl;
        cout << "Variables from codes: " << code_symbol1 << ", " << code_symbol2 << ", " << code_symbol3 << endl;
    }

    cout << "Part II" << endl;

    {
        int varInt = 3841;
        float varFloat = 954.67;
        unsigned short varUShort = 6429;

        // Неявне приведення типів
        double varDouble = varInt;

        // Явне приведення типів
        int varInt2 = static_cast<int>(varFloat);

        // Обхід суворої типізації
        char varChar = static_cast<char>(varUShort);

        cout << "Variable values:" << endl;
        cout << "varInt = " << varInt << endl;
        cout << "varFloat = " << varFloat << endl;
        cout << "varUShort = " << varUShort << endl;
        cout << "varDouble  = " << varDouble << endl;
        cout << "varInt2  = " << varInt2 << endl;
        cout << "varChar  = " << varChar << endl; // Data loss as I understood
    }

    return 0;
}
