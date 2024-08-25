
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

bool customSort(const pair<int,int>&a, const pair<int, int>&b) {
    if(a.second==b.second) return a.first<b.first;
    return a.second<b.second;
}
int main() {
    
    int n;
    cin>>n;
    unordered_map<int,int>mymap;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        mymap[a]=b;
    }
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(mymap[x]>=z){
            mymap[x]-=z;
            mymap[y]+=z;
            cout<<"Success"<<"\n";
        }else{
            cout<<"Failure"<<"\n";
        }
    }
    cout<<"\n";
    vector<pair<int,int>>myvector;
    for(auto it:mymap){
        myvector.push_back({it.first,it.second});
    }
    sort(myvector.begin(), myvector.end(),customSort);
    for (auto j:myvector) {
        cout<<j.first<<" "<<j.second<<"\n";
    }
    
    return 0;
}