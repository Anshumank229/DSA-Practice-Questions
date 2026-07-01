// Print characters in reverse order.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string ss="anshuman";
    for(int i=ss.length()-1;i>=0;i--){
        cout<<ss[i];
    }
}