#include<iostream>
using namespace std;
int power(int x,int n){
    if (n==0){
        return 1;
    }
    else if(n<0){
        return 1/power(x,-n);
    }
    return x*power(x,n-1);
}
int main(){
int x,n;
cin>>x;
cin>>n;
cout<<power(x,n);
}