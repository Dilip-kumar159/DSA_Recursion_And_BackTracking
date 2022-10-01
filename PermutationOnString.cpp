#include<iostream>
#include<vector>

using namespace std;

void permutation(string str, int index, vector<string> & output){

    int n = str.length();
    // Base Case
    if(index == n){ 
        output.push_back(str);
        return;
    }

    for(int j=index; j<n; j++){
        swap(str[index], str[j]);

        // Recursive call
        permutation(str, index+1, output);

        // BackTrack
        swap(str[index], str[j]);
    }
}

int main(){

    string str = "xyz";

    vector<string> output;

    int index = 0;

    permutation(str, index, output);

    cout<<"Permutation of the string is "<<endl;

    for(string i : output){
        cout<<i<<" "<<endl;
    }
    cout<<endl;

    return 0;
}