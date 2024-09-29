/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 * Prac 1.6
 */
#include <iostream>
#include <bitset>  // For task I
#include <cstdlib> // For task II
#include <ctime>   // For task II
using namespace std;

int main()
{
    cout << "Task I" << endl
         << endl;
    {
        int number;
        int counterForOne = 0;
        int counterForZero = 0;
        cout << "Enter a number: ";
        cin >> number;
        bitset<8> binary(number);

        for (int i = 0; i < 8; i++)
        {
            if (binary[i] == 1)
            {
                counterForOne++;
            }
            else
            {
                counterForZero++;
            }
        }

        cout << "Binary representation of " << number << " is: " << binary << endl;
        cout << "1s:" << counterForOne << endl;
        cout << "0s:" << counterForZero << endl;

        if (counterForZero > counterForOne)
        {
            cout << "There are more 0s than 1s." << endl;
        }
        else if (counterForOne > counterForZero)
        {
            cout << "There are more 1s than 0s." << endl;
        }
        else
        {
            cout << "The number of 1s and 0s is equal." << endl;
        }
        cout << endl;
    }

    cout << "task II" << endl
         << endl;
    {
        int size;
        cout << "Enter the size of the sequences: ";
        cin >> size;

        int A[size], B[size], C[size];

        srand(time(0));

        cout << "First sequence: ";
        for (int i = 0; i < size; i++)
        {
            A[i] = rand() % 2;
            cout << A[i] << " ";
        }
        cout << endl;

        cout << "Second sequence: ";
        for (int i = 0; i < size; i++)
        {
            B[i] = rand() % 2;
            cout << B[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < size; i++)
        {
            C[i] = A[i] ^ B[i];
        }

        cout << "Result of XOR operation: ";
        for (int i = 0; i < size; i++)
        {
            cout << C[i] << " ";
        }
        cout << endl;
    }
    return 0;
}