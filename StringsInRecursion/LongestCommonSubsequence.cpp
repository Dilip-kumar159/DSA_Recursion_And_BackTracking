#include<iostream>

using namespace std;

int LCS(string &a, string &b, int i, int j){

    // Base Case
    if(i == a.size()) return 0;

    if(j == b.size()) return 0;

    int ans = 0;
    // If match
    if(a[i] == b[j]){
        ans = 1 + LCS(a, b, i+1, j+1);
    }
    else{
        // if does not match 
        ans = max(LCS(a, b, i+1, j), LCS(a, b, i, j+1));
    }

    return ans;
}
int main(){

    string a = "adbfgce";
    string b = "abfc";

    int ans = LCS(a, b, 0, 0);

    cout<<"LCS -> "<<ans<<endl;

    return 0;
}