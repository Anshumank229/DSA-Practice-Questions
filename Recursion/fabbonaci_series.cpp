// fabbonaci series
#include<iostream>
using namespace std;
int  fabbonaci(int n){
    if (n==0||n==1){
        return n;
    }
    return  fabbonaci(n-1)+fabbonaci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fabbonaci(n);
}