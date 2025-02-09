#include <iostream>
using namespace std;

int main() {
    int array1[10], array2[10], mergedArray[20];
    int size1, size2;

    cout << "Enter the number of elements in the first array (max 10): ";
    cin >> size1;
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
    }

    cout << "Enter the number of elements in the second array (max 10): ";
    cin >> size2;
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }

    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

    
    for (int i = 0; i < size1 + size2 - 1; i++) {
        for (int j = 0; j < size1 + size2 - i - 1; j++) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    cout << "Merged array in descending order: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
