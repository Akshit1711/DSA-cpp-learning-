#include<iostream>
#include<string>
using namespace std;

int binarySearch(int arr[], int key, int end){
    int start = 0;
   
    while (start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        } else if(key < arr[mid]){
            end = mid - 1;
        } else if(key > arr[mid]){
            start = mid + 1;
        }             
    }

    return -1;
}

int main(){
    int arr[100] = {1, 2, 4, 6, 7, 9, 12, 45, 67, 90, 100};
  
    int find = binarySearch(arr, 9, 11);
    if(find == -1){
        cout << "Element not found";
    } else {
        cout << "Position is " << find << endl;
    }

    return 0;
}
