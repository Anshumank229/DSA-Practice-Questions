#include<iostream>
#include<string>
using namespace std;
int main(){
    // string to array
    string str="Anshuman";
    char arr[str.length()+1];
    for (int i = 0; i < str.length(); i++) {
        arr[i] = str[i];
    }
    arr[str.length()] = '\0';
    cout<<arr[3];
}