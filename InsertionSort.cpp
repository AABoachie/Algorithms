#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

void swap(int & x, int & y){
	int temp = x;
	x = y;
	y = temp;	
}

void insertion_sort(vector<int> &nums){
	int pointer = 0;
	for(int i = 1; i < nums.size(); i++){	
		int temp = i;	
		for(int j = i - 1; j >= 0; j--)				
			if(nums[j] > nums[j + 1])
				swap(nums[j +  1], nums[j]);				
			else
				break;
	}
}

int main(){
	vector<int> nums = {3, 1, 0, 4, 7, 8, 10, 2, 90, 89};
	
	cout << "sorted: " << is_sorted(nums.begin(), nums.end()) << endl;
	copy(nums.begin(), nums.end(), 
		 ostream_iterator<int>(cout, " "));
		 
	insertion_sort(nums);
	//sort(nums.begin(), nums.end());
	cout << "\nsorted: " << is_sorted(nums.begin(), nums.end()) << endl;
	copy(nums.begin(), nums.end(), 
		 ostream_iterator<int>(cout, " "));
}
