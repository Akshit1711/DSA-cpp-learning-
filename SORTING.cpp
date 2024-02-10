#include <iostream>
using namespace std;
                     

                     // easy and simple sorting algorithm  & time complexity O(n^2) and a space complexity of O(1).
int main() {
    // Define the array to be sorted
    int arr[] = {48, 15, 1, 78, 645, 15, 48, 24, 3, 65, 884, 254, 651, 9874, 321, 65, 3, 21, 65, 3354, 32};
    
    
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    
    
    // Bubble sort algorithm
    for (int i = 0; i < size - 1; i++) {
        // Last i elements are already sorted, so no need to check them again
        for (int j = 0; j < size - 1 - i; j++) {
            // If current element is greater than the next one, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
