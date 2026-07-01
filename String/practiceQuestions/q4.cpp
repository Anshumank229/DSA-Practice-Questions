// Find the length of a string without using length().
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int count=0;
    string ss="Anshuman";
    for(char ch: ss){
        count++;
    }
    cout<<count;
}