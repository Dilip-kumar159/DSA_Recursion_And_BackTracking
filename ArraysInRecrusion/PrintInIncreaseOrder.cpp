#include<iostream>

using namespace std;

void printInIncreaseOrder(int n){
    if(n==0) return;

    printInIncreaseOrder(n-1);

    cout<<n<<" ";
}
int main(){

    int n;
    cin>>n;

    printInIncreaseOrder(n);
    return 0;
}