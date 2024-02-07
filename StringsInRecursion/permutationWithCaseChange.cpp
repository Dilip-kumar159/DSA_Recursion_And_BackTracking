#include<iostream>

using namespace std;

void permuteCaseChange(string &s, string output, int i){

    if(i == s.length()){
        cout<<output<<endl;
        return;
    }
    // recursive call for no Case change
    permuteCaseChange(s, output + s[i], i+1);

    // recursive call for Case change to upper

    // char ch = s[i] - 'a' + 'A';  one more method

    // char ch = s[i] - 32; one more method

    char ch = toupper(s[i]); // one more method

    permuteCaseChange(s, output + ch, i+1);
}
int main(){

    string s = "ab"; 

    string output = "";  // output -> ab, aB, Ab, AB

    permuteCaseChange(s, output, 0);

    return 0;
}