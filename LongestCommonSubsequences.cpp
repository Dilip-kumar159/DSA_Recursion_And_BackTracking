#include<iostream>

using namespace std;

int solve(string a, string b, int i, int j){

    if(i == a.length()) return 0;

    if(j == b.length()) return 0;

    int ans = 0;

    // If Matches
    if(a[i] == b[j]){
        ans = 1 + solve(a, b, i+1, j+1);
    }
    else  // if doesn't matches
        ans = max(solve(a,b,i+1,j), solve(a,b,i,j+1));

        return ans;
}
int main(){

    string a = "abcdef";
    string b = "acdegf";

    int ans = solve(a, b, 0, 0);

    cout<<"Longest Common Subsequence is : " <<ans<<endl;

    return 0;
}