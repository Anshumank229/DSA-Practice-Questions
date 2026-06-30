#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
int main(){
string s="Ilove my INDIA";
stringstream ss(s);
string word;
string arr[10];
int i=0;
while(ss>>word){
    arr[i]=word;
    i++;
}
cout<<word;
}

