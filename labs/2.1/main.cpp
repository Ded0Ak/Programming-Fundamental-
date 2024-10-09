/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 *  Lab 2.1
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    {
        const int size = 11;
        int array[size];

        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
            {
                array[i] = i - 7;
            }
            else
            {
                array[i] = 7 + i;
            }
        }

        cout << "Array before sorting: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;

        sort(array, array + size);

        cout << "Array after sorting: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    {
        const int size = 10;
        int array1[size], array2[size], array3[size];

        for (int i = 0; i < size; i++)
        {
            array1[i] = i * i + 76;
        }

        for (int i = 0; i < size; i++)
        {
            array2[i] = 85 - i;
        }

        for (int i = 0; i < size; i++)
        {
            array3[i] = array1[i] + array2[i];
        }

        cout << "Array 1: ";
        for (int i = 0; i < size; i++)
        {
            cout << array1[i] << " ";
        }
        cout << endl;

        cout << "Array 2: ";
        for (int i = 0; i < size; i++)
        {
            cout << array2[i] << " ";
        }
        cout << endl;

        cout << "Array 3 (sum of Array 1 and Array 2): ";
        for (int i = 0; i < size; i++)
        {
            cout << array3[i] << " ";
        }
        cout << endl;

        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += array3[i];
        }

        cout << "Sum of elements in Array 3: " << sum << endl;
    }
    return 0;
}