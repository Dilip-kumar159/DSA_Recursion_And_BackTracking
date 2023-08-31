#include<iostream>

using namespace std;

void printSubseq(string str, int ind, string ans){

    // Base Case
    if(ind == str.length()){
        cout<<ans<<endl;
        return;
    }

    // include the string
    printSubseq(str, ind+1, ans + str[ind]);

    // exclude
    printSubseq(str, ind+1, ans);
}
int main(){

    string str = "abcd";

    string ans = "";

    printSubseq(str, 0, ans);

    return 0;
}