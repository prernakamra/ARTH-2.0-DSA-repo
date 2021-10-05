#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int IndexEqualsValue(vector<int> v){
    for(int i=0;i<v.size();i++){
        if(i==v[i])return i;
    }
    return -1;
}
int main(){
    vector<int> v {-5,-3,0,3,4,5,9};
    cout<<IndexEqualsValue(v);
    return 0;
}