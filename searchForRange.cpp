#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> searchForRange(vector<int> v,int target){
    //linear search
    vector<int> res;
    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            res.push_back(i);
        }
    }
    if(res.size()>1) return {res[0],res[res.size()-1]};
    else return {-1,-1};
}
int main(){
    vector<int> v {0,1,21,33,45,45,45,45,45,45,61,71,73};
    int target = 45;
    vector<int> ans(2);
    ans = searchForRange(v,target);
    cout<<"[";
    for(auto i:ans){
        cout<<i<<",";
    }  
    cout<<"]";

    return 0;
}