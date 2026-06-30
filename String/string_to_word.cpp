#include<iostream>
#include<sstream>
using namespace std;
int main(){
    // string to char
    string s="I Love India";
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }
    

}