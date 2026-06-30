// print 1_to and then Reversed
#include<iostream>
using namespace std;
void print1_to_n(int n){
    if (n==0){
        return;
    }
    print1_to_n(n-1);
    cout<<n<<" ";
}
void print1_to_n_reversed(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    print1_to_n_reversed(n=n-1);
    
}
int main(){
    int n;cin>>n;
    print1_to_n(n);
    print1_to_n_reversed(n);
    return 0;
}