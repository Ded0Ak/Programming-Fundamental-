/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 * Prac 1.5
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void initRandomizer() {
    srand(time(0));  
}

int findIndex(int* arr, int n, int P) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == P) {
            return i;
        }
    }
    return -1; 
}


int findMinPositive(int* arr, int n) {
    int minPositive = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (minPositive == -1 || arr[i] < minPositive) {
                minPositive = arr[i];
            }
        }
    }
    return minPositive;
}


void swapMinMax(int* arr, int n) {
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    initRandomizer();

    int n;
    cout << "Enter the length of the sequence: ";
    cin >> n;

    int* arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 - 50; 
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int P;
    cout << "Enter the value to find P: ";
    cin >> P;
    int indexP = findIndex(arr, n, P);
    if (indexP != -1) {
        cout << "Іndex of " << P << " is " << indexP << endl;
    } else {
        cout << P << " is not found in the sequence." << endl;
    }

    int minPositive = findMinPositive(arr, n);
    if (minPositive != -1) {
        cout << "The smallest positive number is: " << minPositive << endl;
    } else {
        cout << "There is no smallest positive number" << endl;
    }

    swapMinMax(arr, n);

    cout << "Array after swapping min and max values: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
