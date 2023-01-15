#include <bits/stdc++.h> 
void solve(string str, string output,int i,vector<string> &ans){
    if(i >= str.length()){
        if(output.length()>0){
            ans.push_back(output);
        }
        return;
    }
    // exclude 
    solve(str, output, i+1 , ans);
    
    //include 
     char element = str[i];
    output.push_back(element);
    solve(str, output,i+1,ans);
}
vector<string> subsequences(string str){
    vector<string>ans;
    string output="";
    int i=0;
    solve(str,output,i,ans);
    return ans;
    
    // Write your code here
    
}
