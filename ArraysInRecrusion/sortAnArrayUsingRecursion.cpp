#include<iostream>
#include<vector>

using namespace std;

void insertArr(vector<int> &arr, int temp){

    if(arr.size() == 0 || arr[arr.size()-1] <= temp){
        arr.push_back(temp);
        return;
    }

    int element = arr[arr.size() - 1];

    arr.pop_back();

    insertArr(arr, temp);

    arr.push_back(element);
}

void sortAnArray(vector<int> &arr){

    if(arr.size() == 1) return;

    int temp = arr[arr.size() - 1];

    arr.pop_back();

    sortAnArray(arr);

    insertArr(arr, temp);
}

int main(){

    vector<int> arr = {5,2,4,1,9,0};

    sortAnArray(arr);

    for(auto i : arr) cout<<i<<" ";

    return 0;
}