#include<iostream>
using namespace std;

void merge(int *arr, int s, int e, int mid){

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // copy of the first array
    int *first = new int[len1];

    // copy of the second array
    int *second = new int[len1];

    // Copy the values of main array to two different array
    int idx = 0;
    for(int i=s; i<mid; i++){
        first[idx] = arr[i];
        idx++;
    }

    int j = 0;
    for(int i=mid+1; i<e; i++){
        first[j] = arr[i];
        j++;
    }





}

void mergeSort(int *arr, int s, int e){

    if(s>=e) return;

    int mid = s - (e+s)/2;

    // recursive call on left part
    mergeSort(arr, s, mid);

    // recursive call on Right part
    mergeSort(arr, mid+1, e);

    // merge sorted array
    merge(arr, s, e, mid);
}
int main(){

    int arr[] = {9,3,1,19,42,93,78,2,0};

    int size = end(arr) - begin(arr);

    mergeSort(arr, 0, size-1);

    return 0;
}