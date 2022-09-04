#include<iostream>

using namespace std;


void reverseString(string &name, int start, int end){

    if(start >= end) return;

    swap(name[start], name[end]);

    reverseString(name, start+1, end-1); // Tail Recursion

}

void reverseString2(string name, int s, string &ans){

    if(s == name.length()) return;

    reverseString2(name, s+1, ans);  // Head Recursion

    ans+=name[s];

}


int main(){

    string name = "Dilip";

    int size = 4;

    reverseString(name, 0, name.length()-1);
    cout<<"This is First Reverse "<<  name <<endl;


    string ans = "";
    reverseString2(name, 0, ans);
    cout << "This is Second Reverse " << ans << endl;

    return 0;
}