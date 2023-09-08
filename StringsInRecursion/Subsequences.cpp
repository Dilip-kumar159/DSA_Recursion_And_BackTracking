#include<iostream>

using namespace std;

void subsequences(string name, int index, string ans){

    if(index == name.length()) {
        cout << ans <<endl;
        return;
    }

    // include
    subsequences(name, index+1, ans + name[index]);

    // exclude 
    subsequences(name, index+1, ans);
}
int main(){

    string name = "abcd";

    subsequences(name, 0, "");

    return 0;
}