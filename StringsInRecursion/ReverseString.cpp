#include<iostream>

using namespace std;

void reverse(string &s, int start, int end){

    // Base Case
    if(start >= end) return;

    // operation
    swap(s[start], s[end]);

    // Recurence Relation
    reverse(s, start+1, end-1);
    
}

void reverse1(string s, int ind, string &ans){

    if(ind == s.length()) return;

    reverse1(s, ind+1, ans);

    ans = ans + s[ind];
}
int main(){

    string s;
    cin>>s;

    // reverse(s, 0, s.length()-1);

    string ans = "";

    reverse1(s, 0, ans);

    cout<<ans<<endl;

    return 0;
}