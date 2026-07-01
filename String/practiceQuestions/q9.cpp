// Count digits
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    string ss="SmmnhuaasaseeEE456789E";
    int count=0;
    for(char ch:ss){
        if (isdigit(ch)){
            count++;
        }
    }
    cout<<count;
}