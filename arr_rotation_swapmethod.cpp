#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void cyclicRightRotation(int arr[], int size, int rotations) {
    rotations %= size;
    reverse(arr, 0, size - 1);
    reverse(arr, 0, rotations - 1);
    reverse(arr, rotations, size - 1);
}

void cyclicLeftRotation(int arr[], int size, int rotations) {
    rotations %= size;
    reverse(arr, 0, rotations - 1);
    reverse(arr, rotations, size - 1);
    reverse(arr, 0, size - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size, rotations;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
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
