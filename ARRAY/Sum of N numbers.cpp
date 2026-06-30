#include<iostream>
using namespace std;
int main(){
	int sum=0;
	cout<<"Enter the number that you want to find sum of it";
	int nums;
	cin>>nums;
	for(int i=0;i<nums;i++){
	sum+=i;
	cout<<"SUM is "<<sum;
	}
}