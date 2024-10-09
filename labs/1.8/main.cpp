/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 * Lab 1.8
 */

#include <iostream>
using namespace std;

int main()
{
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        if (number > 0)
        {
            cout << "The number is positive" << endl;
        }
        else if (number < 0)
        {
            cout << "The number is negative" << endl;
        }
        else
        {
            cout << "The number is zero" << endl;
        }

        cout << "Numbers from 1 to 10: ";
        for (int i = 1; i <= 10; i++)
        {
            cout << i << " ";
        }
        cout << endl;

        int counter = 5;
        while (counter > 0)
        {
            cout << "Countdown: " << counter << endl;
            counter--;
        }
    }

    {
        int a = 33, b = -6, c = 26;

        cout << "Relation operation (<):" << endl;
        if (a < b)
        {
            cout << a << " < " << b << endl;
        }
        else
        {
            cout << a << " >= " << b << endl;
        }

        if (b < c)
        {
            cout << b << " < " << c << endl;
        }
        else
        {
            cout << b << " >= " << c << endl;
        }

        int counter = -128;
        cout << "\nIncrement counter by 1:" << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << "Value: " << counter << endl;
            counter++;
        }
    }
    return 0;
}