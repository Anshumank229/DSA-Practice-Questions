#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool hashing(int nums[], int n){
    unordered_set<int>st;
    for(int i = 0; i < n; i++){
            if(st.count(nums[i])){
                return true;
            }
            st.insert(nums[i]);
    }
    return false;
}
int main(){
    int nums[]={1,2,56,67,7,4,3,33,3,23};
    int n = sizeof(nums)/sizeof(nums[0]);
    hashing(nums,n);
}