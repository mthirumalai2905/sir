#include <iostream>
using namespace std;

template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        T temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 25, 12, 22, 11};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    
    cout << "Original Integer Array: ";
    printArray(intArr, intSize);
    
    selectionSort(intArr, intSize);
    
    cout << "Sorted Integer Array: ";
    printArray(intArr, intSize);

    float floatArr[] = {64.5, 25.3, 12.7, 22.1, 11.9};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    
    cout << "Original Float Array: ";
    printArray(floatArr, floatSize);
    
    selectionSort(floatArr, floatSize);
    
    cout << "Sorted Float Array: ";
    printArray(floatArr, floatSize);

    return 0;
}
