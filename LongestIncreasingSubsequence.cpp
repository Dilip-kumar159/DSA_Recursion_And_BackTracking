#include<iostream>

using namespace std;

int solve(int *arr, int n, int cur, int prev){
    // base case
    if(n == cur) return 0;

    // include
    int pick = 0;
    if(prev == -1 || arr[cur] > prev) 
        pick = 1 + solve(arr, n, cur+1, cur);

    // exclude
    int notPick = 0 + solve(arr, n, cur+1, prev);

    return max(pick, notPick);
}   
int main(){

    int arr[] = {0,1,0,3,2,3};
    int n = 6;

    int curr = 0;
    int prev = -1;
    int ans = solve(arr, n, curr, prev);

    cout << "Longest Increasing Subsequence is " << ans << endl;
    return 0;
}