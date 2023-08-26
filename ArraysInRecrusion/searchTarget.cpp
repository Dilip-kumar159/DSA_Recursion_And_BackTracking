#include<iostream>

using namespace std;

int searchTarget(int *arr, int size, int ind, int target){

    // Base Case
    if(ind == size) return -1;

    if(arr[ind] == target) return ind;

    // Recurence Relation
    return searchTarget(arr, size, ind+1, target);
}

void searchTarget1(int *arr, int size, int ind, int &val, int target){

    // Base Case
    if(ind == size) return;

    if(arr[ind] == target){
        val = ind;
    }

    // Recurence Relation
    searchTarget1(arr, size, ind+1, val, target);
}

void searchTarget2(int *arr, int size, int& ind, int target){

    // Base Case
    if(size == 0) return;

    if(arr[ind] == target){
        return;
    }

    // Recurence Relation
    searchTarget2(arr+1, size-1, ind+1, target);
}
int main(){

    int arr[10];
    int size, target;
    cin>>size>>target;

    for(int i=0; i<size; i++)
        cin>>arr[i];
    
    // int ans = searchTarget(arr, size, 0, target);

    // cout<<"Index of Target is : "<<ans<<endl;

    // int val = 0;
    // searchTarget1(arr, size, 0, val, target);
    // cout<<val<<endl;

    int ind = -1;
    // searchTarget2(arr, size, ind, target);
    cout<<ind<<endl;


    return 0;
}