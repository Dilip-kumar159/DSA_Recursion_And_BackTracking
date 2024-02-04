#include<iostream>
#include<vector>

using namespace std;

bool oneSubsequenceWithSumK(vector<int> &arr, vector<int> &ds, int i, int k, int n, int s){

    // Base case
    if(i == n){
        if(s == k){
            for(int it : ds) cout<<it<<" ";
            return true;
        }
        return false;
    }


    // add element in ds array and increement the sum
    ds.push_back(arr[i]);
    s += arr[i];

    if(oneSubsequenceWithSumK(arr, ds, i+1, k, n, s) == true) return true;

    // remove element in ds array and decreement the sum
    ds.pop_back();
    s -= arr[i];

    if(oneSubsequenceWithSumK(arr, ds, i+1, k, n, s) == true) return true;

    return false;
}
int main(){

    vector<int> arr = {1,2,1};

    vector<int> ds;

    int n = 3, k = 2, i = 0, s = 0;

    bool isPrinted = oneSubsequenceWithSumK(arr, ds, i, k, n, s);

    if(isPrinted) cout<<"True";

    else cout<<"False";


    return 0;
}