/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Part I" << endl;
    {
        float a = 5.8,
              b = 39.1;
        int c = 70,
            d = 42;

        bool res = (!(a = b) ^ (-(c < d)));

        cout << "Result: " << boolalpha << res << endl;
    }

    {
        int a = 85,
            b = 85;
        float c = 6.4,
              d = 9.3;

        bool res = (!(a = b) ^ (-(c < d)));
        cout << "Result: " << boolalpha << res << endl;
    }
    cout << "Part II" << endl;

    {
        const int A = 49;
        int B = -65,
            C = 23,
            D = 13,
            E = 2;
        const char *F = "long";

        long result = (A ^ (-B)) + (C * D) - (E << sizeof(F));

        cout << "Result: " << result << endl;
    }

    return 0;
}