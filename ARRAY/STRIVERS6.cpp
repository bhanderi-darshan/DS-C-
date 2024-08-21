#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int last = arr[n];
    for (int i = n; i>=0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = last;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftRotateByOne(arr, n);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
