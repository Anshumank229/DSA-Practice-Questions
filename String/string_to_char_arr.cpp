#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // string to char
    string str="Anshuman";
    char arr[10];
    strcpy(arr,str.c_str());
    cout<<arr;
}