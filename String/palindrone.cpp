#include<iostream>
using namespace std;
bool palin(string s){
	int left=0;
	int right=s.size()-1;
	while(left<right){
		for (int i = 0; i < s.size(); i++) {
 		   s[i] = tolower(s[i]);
		}
		if (s[left]==s[right]){
			left++;
			right--;
		}
		else{
			return false;
		}
	} 
	return true;
}
int main(){
	string  s;
	cout<<"Enter the Thing You want to check"; 
	cin>>s;
	if (palin(s)) {
    cout << "Palindrome";
	}
	else {
    cout << "Not Palindrome";
	}
}