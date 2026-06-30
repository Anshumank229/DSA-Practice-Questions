#include<iostream>
using namespace std;
void lastoccourrance(int arr[],int size, int target){
	int low=0;
	int high= size - 1;
	int ans=-5;
	
	while(low<=high){
	int mid=(low+high)/2;
	if( arr[mid]==target){
		ans=mid;
		low=mid-1;
	}
	else if(arr[mid]<target){
	    low =mid+1;
    }
	else{
	high=mid-1;	
    }
    	
  }
  cout<<ans;
}

int main(){
    int arr[]={1,2,2,3,4,5,6,} ;
    int target=2;
    int size = sizeof(arr) / sizeof(arr[0]);
    lastoccourrance(arr,size,target);
    return  0;
}
