/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 * Prac 1.4
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    {
        int N;
        cout << "Enter an integer N: ";
        cin >> N;

        int sum = 0;
        int count = 0;

        for (int i = 1; i <= N; i += 2)
        {
            sum += i;
            count++;
        }

        if (count == 0)
        {
            cout << "No odd numbers in the interval." << endl;
        }
        else
        {
            double average = static_cast<double>(sum) / count; // static_cast<double>(sum) converts the data type from int to double. Although this operator is not needed here at all,but it is useful information.
            cout << "The arithmetic mean of odd numbers from 0 to " << N << ": " << average << endl;
        }
        {
            double b1, q;
            int n;
            cout << "S_avg = (b1 * (1 - q^n)) / (n * (1 - q))\n";5
            
            cout << "Enter the first element of the progression (b1): ";
            cin >> b1;
            cout << "Enter the common ratio (q): ";
            cin >> q;
            cout << "Enter the number of elements (n): ";
            cin >> n;

            double sum = 0.0;

            for (int i = 0; i < n; ++i)
            {
                sum += b1 * pow(q, i); // pow(q, i) = q^i
            }

            double average = sum / n;
            cout << "Arithmetic mean of the first " << n << " elements of the progression: " << average << endl;
        }
    }
    return 0;
}