#include<iostream>

using namespace std;

void permute(string &str, string output, int ind){

    if(ind == str.length()){
        cout<<output<<endl;
        return;
    }

    // include spaces
    permute(str, output + "_" + str[ind], ind+1);

    // exclude spaces
    permute(str, output + str[ind], ind+1);

}
int main(){

    string str = "ABCD";

    string output = "";

    output += str[0];

    permute(str, output, 1);


    return 0;
}