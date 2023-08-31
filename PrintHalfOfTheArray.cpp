#include<iostream>

using namespace std;

void printHalf(int arr [], int size){

    if(size < 1) return;

    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    printHalf(arr, size/2);
}

void printHalf2(int arr[], int s, int e){

    if(s == e){
        return;
    }

    for(int i=s; i<e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int mid = s+(e-s)/2;

    printHalf2(arr, s, mid);
}
int main(){

    int arr[] = {3,4,1,2,5,6,9};

    int size = 7;
    cout<<"Printing First Print Function"<<endl;
    printHalf(arr, size);

    cout<<"Printing Second Print Function"<<endl;
    printHalf2(arr, 0, size);
    
    return 0;
#include<iostream>

using namespace std;

void printHalf(int arr [], int size){

    if(size < 1) return;

    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    printHalf(arr, size/2);
}

void printHalf2(int arr[], int s, int e){

    if(s == e){
        return;
    }

    for(int i=s; i<e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int mid = s+(e-s)/2;

    printHalf2(arr, s, mid);
}
int main(){

    int arr[] = {3,4,1,2,5,6,9};

    int size = 7;
    cout<<"Printing First Print Function"<<endl;
    printHalf(arr, size);

    cout<<"Printing Second Print Function"<<endl;
    printHalf2(arr, 0, size);
    
    return 0;
}