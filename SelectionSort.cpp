#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void swap(int & x, int & y){
	int temp = x;
	x = y;
	y = temp;	
}

void selectionSort(vector<int> & vec){
	int min_index = 0;
	for(int i = 0; i < vec.size(); i++){
		min_index = i;
		for(int j = i; j < vec.size(); j++){
			if(vec[j] < vec[min_index]){
				min_index = j;
			}
		}
		swap(vec[i], vec[min_index]);
	}
}

int main(){
	vector<int> nums = {3, 1, 0, 4, 7, 8, 10, 2, 90, 89};
	
	cout << "sorted: " << is_sorted(nums.begin(), nums.end()) << endl;
	copy(nums.begin(), nums.end(), 
		 ostream_iterator<int>(cout, " "));
		 
	selectionSort(nums);
	//sort(nums.begin(), nums.end());
	cout << "\nsorted: " << is_sorted(nums.begin(), nums.end()) << endl;
	copy(nums.begin(), nums.end(), 
		 ostream_iterator<int>(cout, " "));
		 	
	return 0;
}
