#include <iostream>
#include<string>

using namespace std;

int main() {
    // Write C++ code here
    string text1 = "abcdefhjkh";
    
    string text2 = "defxahjk";
    
    // Substring are : 
    
    // d 
    // de
    // def 
    // e
    // ef
    // f
    // a 
    
    string ans = "";
    
    int n = text1.size();
    
    int m = text2.size();
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            
            // When both the string contains equal characters
             if(text1[i] == text2[j] && j < m && i < n){
                
                cout<<text1[i]<<" ";
                
                int k = i, t = j;
                
                while(k < n && t < m){
                    
                    if(text1[i] == text2[j]){
                        
                             ans = ans+text1[k];
                    }
                        
                        k++;
                        t++;
                        
                        if(ans.size() > 1)
                            cout<<ans<<" ";
                }
            }
            
        }
        
        ans = "";
    }
    

    return 0;
}