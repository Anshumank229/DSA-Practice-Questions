#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char ch[]="chacha";
    // for(int i=0;i<strlen(ch);i++){
    //     cout<<ch;
    //     break;
    // }
    // return 0;
//     char name[]="Hello";

// cout<<name;
char cha='A';
string s(1,cha);

string t="Apple";
char ch=t[0];
// cout<<s<<endl;
// cout<<ch;
for(char ch:t){
    cout<<ch;
}
}



