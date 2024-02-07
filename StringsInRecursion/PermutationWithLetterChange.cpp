#include<iostream>

using namespace std;

void helper(string &s, string output, int i){

    if(i == s.length()){
        cout<<output<<endl;
        return;
    }

    if(isalpha(s[i])){

        // include lower case
        char ch = tolower(s[i]);

        helper(s, output + ch, i+1);

        // include upper case
        char ch1 = toupper(s[i]);

        helper(s, output + ch1, i+1);
    }
    else{

        helper(s, output + s[i], i+1);
    }
}
int main(){

    string s = "a1B2";

    string output = "";

    helper(s, output, 0);

    return 0;
}