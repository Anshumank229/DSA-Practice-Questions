#include <iostream >
using namespace std;
void reverse( int arr){
	while(left<right){
	int temp =arr[left];
	arr[left]=arr[right];
	arr[right]=temp;
	}
	right++;
	left++;
}
int main(){
	int arr[]={1,2,54,5,7};
	reverse(arr);


}