#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

void swap(int & x, int & y){
	int temp = x;
	x = y;
	y = temp;	
}
int partition(vector<int> & nums, int start, int end){
	int pivot = nums[end];
	int j = start - 1;
	for(int i = start; i < end; i++){		
		if(nums[i] < pivot){
			j++;
			swap(nums[i], nums[j]);
		}			
	}
	swap(nums[j+1], nums[end]);
	return j + 1;
}
void quicksort_partition(vector<int> & nums, int start, int end){
	//split into halfs, call quick sort on the halves, recursively igorne the middle element
	if(end > start){
		int middle = partition(nums, start, end);		
		quicksort_partition(nums, start, middle - 1);
		quicksort_partition(nums, middle + 1, end);
	}
}
void quicksort(vector<int> & nums){
	quicksort_partition(nums, 0, nums.size() - 1);
}
int main(){
	vector<int> nums = {7, 23, 10, 1, 11, 12, 8, 99, 9, 2};
	
	quicksort(nums);

	copy(nums.begin(), nums.end(), 
		 ostream_iterator<int>(cout, " "));
	
	return 0;
}
