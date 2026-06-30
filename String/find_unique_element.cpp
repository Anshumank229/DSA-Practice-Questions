#include<iostream>
using namespace std;
int main(){
    string str="NAMEANSHUMAN";
    // finding unique element
    char fre[str.length()+1];
    for(int i=0;i<str.size();i++){
         fre[str[i]-'a']++;
    }

    

}