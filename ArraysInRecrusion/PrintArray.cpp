#include<iostream>

using namespace std;

// Approach 1
void print1(int *arr, int size, int index){

    // Base case
    if(index == size) return;

    cout<<arr[index]<<" ";

    print1(arr, size, index+1);

}

// Approach 2
void print2(int *arr, int size){

    // Base Case
    if(size == 0) return;

    cout<<arr[0]<<" ";

    print2(arr+1, size-1);
}
int main(){

    int arr[10];
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
        cin>>arr[i];

    // print1(arr, size, 0);
    print2(arr, size);

    return 0;
}