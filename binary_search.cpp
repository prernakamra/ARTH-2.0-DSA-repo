#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v,int target){
    int n= v.size();
    int lo=0;
    int hi=n-1;
    int mid;
    while(lo<hi){
        mid=lo+(hi-lo+1)/2;
        if(v[mid]<target){
            lo=mid+1;
        }
        else{
            hi=mid;
        }

    }
    if(v[lo]==target) return lo;
    else return -1;

}
int main(){
    vector<int> v {0,1,21,33,45,45,61,71,72,73};
    int target = 33;
    cout<<binarySearch(v,target);
    return 0;
}