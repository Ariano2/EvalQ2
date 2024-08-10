#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map <char,int> mpp;
    string st;
    cout<<"Enter a paragraph: ";
    getline(cin,st);
    for(char ch:st){
        if(ch!=' ' && ch!=',' && ch!='!' && ch!=';' && ch!=':' && ch!='?')
        mpp[ch]++;
    }
    for(auto it:mpp){
        cout<<it.first<<":"<<it.second<<endl;
    }
    return 0;
}
