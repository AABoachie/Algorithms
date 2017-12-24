#include <iostream>
#include <vector>
using namespace std;

bool lessThan(int x, int y){
	return x < y;
}

bool isSorted(vector <int> & arr){
	for (int i = 0; i < arr.size()-2; i++){
		if(arr[i] < arr[i+1]){
			return false;
		}
	}
	return true;
}

void swap(vector <int> & arr, int index1, int index2){
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

void bubbleSort(vector <int> & arr, bool(* test)(int, int)){
	for(int i = 0; i < arr.size() - 1; i++){
		for(int j = 0; j < arr.size() - 1; j++){
			if(test(arr[i], arr[j])){
				swap(arr, j, i);
			}
		}
	}
}

void display(vector <int> & arr){
	for(int i = 0 ; i < arr.size() - 1; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr[] = {9, 10, 11, 12, 13, 15, 10, 9, 8, 6, 2, 7};
	vector <int> vect(arr, arr + sizeof(arr) / sizeof(int));
	
	cout << "unsorted: \t";
	display(vect);
	
	bubbleSort(vect, lessThan);
	
	cout << "sorted: \t";
	display(vect);	
	return 0;
}
