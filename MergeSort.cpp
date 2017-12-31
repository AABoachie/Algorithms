#include <iostream>
#include <vector>
using namespace std;

void divide(vector <int> & arr, int left, int right){
	/*cout << "left: " << left << endl;
	cout << "right: " << right << endl;*/
	
	cout << right - left << endl;	
	
	if(right - left > 0){		
		divide(arr, (right/2) + 1, right);
	}else{
		//cout << arr[left] << " ";
		return;
	}
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	vector<int> vect(arr, arr + sizeof(arr) / sizeof(int));
	
	divide(vect, 0, vect.size()-1);
	return 0;
}
