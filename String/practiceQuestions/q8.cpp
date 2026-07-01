// Count lowercase letters.
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    string ss="SmmnhuaasaseeEEE";
    int count=0;
    for(char ch:ss){
        if (islower(ch)){
            count++;
        }
    }
    cout<<count;
}