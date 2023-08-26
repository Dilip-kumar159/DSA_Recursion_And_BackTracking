#include<iostream>

using namespace std;

// Approach 1
void maxElement1(int *arr, int size, int ind, int &maxi){

    // Base Case
    if(ind == size)
        return;

    maxi = max(maxi, arr[ind]);

    // Recurence Relation
    maxElement1(arr, size, ind+1, maxi);
}

// Approach 2
int maxElement(int *arr, int size, int ind){

    // Base Case
    if(ind == size)
        return INT_MIN;
    
    int ans = arr[ind];

    int recAns = maxElement(arr, size, ind+1);

    return max(ans, recAns);
}
int main(){

    int arr[10];
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
        cin>>arr[i];

    int maxi = INT_MIN;

    // maxElement1(arr, size, 0, maxi);

    // cout<<"Max Element is : "<<maxi<<endl;

    cout<<maxElement(arr, size, 0);

    return 0;
}