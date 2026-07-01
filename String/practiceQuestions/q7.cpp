// Count uppercase letters.
#include<iostream>
using namespace std;
int main(){
    int count=0;
    string ss="AnsHuman";
    for(char ch:ss){
        if (isupper(ch)){
            count++;
        }
    }
    cout<<count;
}