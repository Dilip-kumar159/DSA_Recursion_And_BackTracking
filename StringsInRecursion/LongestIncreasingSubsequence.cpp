#include<iostream>
#include<vector>

using namespace std;

int LIS(vector<int> &arr, int curIndex, int prevIndex){

    // Base Case
    if(curIndex == arr.size()) return 0;

    int pick = 0;
    // Check the condition
    if(prevIndex == -1 || arr[curIndex] > arr[prevIndex])
        pick = 1 + LIS(arr, curIndex+1, curIndex);
    
    int notPick = LIS(arr, curIndex+1, prevIndex);

    return max(pick, notPick);
}
int main(){

    vector<int> arr = {1, 0, 1, 2, 1, 3, 1, 4, 3};

    int ans = LIS(arr, 0, -1);

    cout<<"LIS -> "<<ans<<endl;

    return 0;
}