#include<iostream>

using namespace std;

void printNBitPrefix(int n, string s, int oneBit, int zeroBit){

    if(n == 0){
        cout<<s<<" ";
        return;
    }

    printNBitPrefix(n-1, s + "1", oneBit + 1, zeroBit);

    if(oneBit > zeroBit){

        printNBitPrefix(n-1, s + "0", oneBit, zeroBit + 1);
    }
}
int main(){

    int n = 4;
    string s = "";
    int oneBit = 0, zeroBit = 0;

    printNBitPrefix(n, s, oneBit, zeroBit);

    return 0;
}