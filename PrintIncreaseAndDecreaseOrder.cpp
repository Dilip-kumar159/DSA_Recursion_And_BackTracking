#include<iostream>

using namespace std;

// Writing Both Increasing And Decreasing Order in Same function Using Recursion

void printIncreaseAndDecrease(int n, int countN){
        if(countN == n){
            return;
        }

        cout << countN+1 << " ";

        printIncreaseAndDecrease(n, countN+1);

        cout << countN+1 << " ";
}

int main(){

    int n, countN;
    cin>>n>>countN;

    printIncreaseAndDecrease(n, countN);

    // print(n, countN);

    return 0;
}
