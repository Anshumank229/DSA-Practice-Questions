#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
	int search(vector<int>& arr, int key) {
		// Code Here
		int low = 0;
		int high = arr.size() - 1;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			if (arr[mid] == key)
				return mid;
			
			
			if (arr[low] <= arr[mid]) {
				if (key >= arr[low] && key < arr[mid]) {
					high = mid - 1;
				} else {
					low = mid + 1;
				}
			}
			
			else {
				if (key > arr[mid] && key <= arr[high]) {
					low = mid + 1;
				} else {
					high = mid - 1;
				}
			}
		}
		
		return - 1;
	}
};


int main() {
    	vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
	int target = 0;

	Solution obj;
	int ans = obj.search(arr, target);

    if (ans != -1)
        cout << "Element found at index " << ans;
    else
        cout << "Element not found";

    return 0;
}