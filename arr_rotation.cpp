#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void cyclicRightRotation(int arr[], int size, int rotations) {
    for (int i = 0; i < rotations; i++) {
        int lastElement = arr[size - 1];
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = lastElement;
    }
}

void cyclicLeftRotation(int arr[], int size, int rotations) {
    for (int i = 0; i < rotations; i++) {
        int firstElement = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = firstElement;
    }
}

int main() {
    int size, rotations;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i <size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of rotations: ";
    cin >> rotations;

    cout << "Original array: ";
    printArray(arr, size);

    cyclicRightRotation(arr, size, rotations);
    cout << "After cyclic right rotation: ";
    printArray(arr, size);

    cyclicLeftRotation(arr, size, rotations);
    cout << "After cyclic left rotation: ";
    printArray(arr, size);

    return 0;
}
