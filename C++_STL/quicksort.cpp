#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a=b;
    b= temp;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];

    int i = (low-1);

    for(int j=low; j<=high-1;j++){
        if(arr[j]<=pivot){
        i++;
        swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pivotIndex = partition(arr,low,high);


        quicksort(arr,low,pivotIndex-1);
        quicksort(arr,pivotIndex+1,high);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    quicksort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}