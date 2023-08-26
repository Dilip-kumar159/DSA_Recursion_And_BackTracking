#include<iostream>

using namespace std;

void reverse1(int *arr, int size, int index){

    if(index == size) return;

    // Recursence relation
    reverse1(arr, size, index+1);

    cout<<arr[index]<<" ";
}

void reverse2(int *arr, int size){

    // Base Case
    if(size < 0) return;

    cout<<arr[size]<<" ";

    // Recursence Relation
    reverse2(arr, size-1);
}


int main(){

    int arr[10];
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
        cin>>arr[i];

    // reverse1(arr, size, 0);
    reverse2(arr, size-1);
    return 0;
}