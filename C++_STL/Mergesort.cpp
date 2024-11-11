#include<iostream>

using namespace std;

void merge(int arr[],int left,int mid,int right){
    int n1 = mid-left+1;

    int n2 = right-mid;

    int leftarr[n1], rightarr[n2];

    for(int i=0;i<n1;i++){
        leftarr[i] = arr[left+i];
    }

    for(int i=0;i<n2;i++){
        rightarr[i] = arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k= left;

    while(i<n1 && j<n2){
        if(leftarr[i]<=rightarr[j]){
            arr[k] = leftarr[i];
            i++;
        }else{
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = leftarr[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = rightarr[j];
        j++;
        k++;
    }

}

void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid = left + (right-left)/2;


        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);


        merge(arr,left,mid,right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: ";
    printArray(arr, arr_size);

    mergesort(arr, 0, arr_size - 1);

    cout << "Sorted array: ";
    printArray(arr, arr_size);

    return 0;
}