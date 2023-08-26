#include<iostream>

using namespace std;

int lastIndex(int *arr, int size, int ind, int target){

    // Base case
    if(ind < 0) return -1;

    if(arr[ind] == target) return ind;

    // Recurence Relation
    return lastIndex(arr, size, ind-1, target);

}
int main(){

    int arr[10];
    int size, target;
    cin>>size>>target;

    for(int i=0; i<size; i++)
        cin>>arr[i];

    int ans = lastIndex(arr, size, size-1, target);

    cout<<ans<<endl;

    return 0;
}