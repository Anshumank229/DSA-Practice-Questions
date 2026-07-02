// Count Vowels
#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<char,int>mp;
    string ss="Anshuman";
    for(char ch:ss){
        if (ss=='a')
        mp[ch]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
}