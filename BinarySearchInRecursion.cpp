#include<iostream>

using namespace std;

bool search(int arr[], int s, int key, int e){

    if(s > e) return false;

   int mid = s + (e - s)/2;

   if(key == arr[mid]) return true;

   if(key < arr[mid]) 
   // search in right.
   return search(arr, s, key, mid-1);

    // search in left.
   else return search(arr, mid+1, key, e);
}

int main(){

    int arr[] = {1,3,4,9,13,23,89};

    int size = 7;

    int key = 39;

    bool target = search(arr, 0, key, size-1);
    
    if(target) cout<<"Key found"<<endl;

    else cout<<"Key Not found"<<endl;
    
    return 0;
}