#include<iostream>

using namespace std;

void addNumbers(string a, string b, string &ans, int carry, int i, int j){

    if(i < 0 && j < 0 && carry == 0) return;

    int first = 0;
    int second = 0;

     if(i >= 0) first = a[i] - '0';

     if(j >= 0) second = b[j] - '0';

    int sum = first + second + carry;

    int lastDigit = sum % 10;

    carry = lastDigit / 10;

    ans.push_back(lastDigit + '0');

    addNumbers(a, b, ans, carry, i-1, j-1);
}

void reverseString(string &name, int start, int end){

    if(start >= end) return;

    swap(name[start], name[end]);

    reverseString(name, start+1, end-1); // Tail Recursion

}

int main(){

    string a = "25";
    string b = "41";

    string ans = "";

    addNumbers(a, b, ans, 0, a.length()-1, b.length()-1);

    reverseString(ans, 0, ans.length()-1);

    cout<<"The Sum is : " << ans << endl;

    return 0;
}