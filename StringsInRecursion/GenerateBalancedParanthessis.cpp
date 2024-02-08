#include<iostream>
#include<vector>

using namespace std;

void balancedParan(int n, int open, int close, string output){

    if(open == 0 && close == 0){
        cout<<output<<endl;
        return;
    }

    if(open != 0){

        balancedParan(n, open-1, close, output + "(");
    }

    if(close > open){

        balancedParan(n, open, close-1, output + ")");
    }
}
int main(){

    int n = 3;
    string output = "";
    int open = n;
    int close = n;

    balancedParan(n, open, close, output);

    return 0;
}