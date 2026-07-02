// Frequency of Character
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<char ,int>mp;
    string ss="programming";
    for(char ch:ss){
        mp[ch]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}