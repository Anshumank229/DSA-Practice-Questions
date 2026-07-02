// Learn Frequency Counting
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int Inputarr[]={1, 2, 1, 3, 2, 1,};
    unordered_map<int ,int>mp;
    for(int i=0;i<6;i++){
        mp[Inputarr[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    


}