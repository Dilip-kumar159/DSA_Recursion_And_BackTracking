#include<iostream>

using namespace std;

void printInDecreaseOrder(int n){
    if(n==0) return;

    cout<<n<<" ";

    printInDecreaseOrder(n-1);
}
int main(){

    int n;
    cin>>n;
    printInDecreaseOrder(n);
    return 0;
}