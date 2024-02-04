#include<iostream>
#include<vector>

using namespace std;

int countSubseqWithSumK(vector<int> &arr, int k, int i, int s, int n){

    // Base case
    if(i == n){
        if(s == k)
            return 1;
        return 0;
    }

    s += arr[i];

    int leftRecCall = countSubseqWithSumK(arr, k, i+1, s, n);

    s -= arr[i];

    int rightRecCall = countSubseqWithSumK(arr, k, i+1, s, n);

    return leftRecCall + rightRecCall;

}
int main(){

    vector<int> arr = {1,2,1,1};

    int n = 4, k = 2, i = 0, s = 0;

    cout<<countSubseqWithSumK(arr, k, i, s, n);


    return 0;
}