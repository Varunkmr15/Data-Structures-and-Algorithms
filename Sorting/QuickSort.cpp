// Divide and conquer algo
// Pick a pivot element let's consider first element to be the pivot element and place it at its correct position
// Smaller on the left and larger on the right
// Select two pointer i,j. i on low and j on high and search for a element bigger then pivot from i moving toward high
// Search for a element smaller or equal than pivot while going towards lower and if i and j not crossed each other swap the values of i and j and continue
// else swap the value of pivot with j and pivot is placed at its correct position
// TC: O(nlogn)
// SC: O(1) 

#include <bits/stdc++.h>
using namespace std;

int partition(int l, int h, vector<int>&v){
	int pivot=v[l];
	int i=l,j=h;
	while(i<j){
		while(v[i]<=pivot && i<h)i++;
		while(v[j]>pivot && j>l)j--;
		if(i<j)
			swap(v[i],v[j]);
		
	}
	swap(v[l],v[j]);
	return j;
}

void quickSort(int l, int h, vector<int>&v){
	if(l<h){
		int partition_index=partition(l,h,v);
		quickSort(l,partition_index-1,v);
		quickSort(partition_index+1,h,v);
	}
}

int main(){
	vector<int>v={76,2,5,2,4,5,6,3};
	quickSort(0,7,v);
	for(auto x:v){
		cout <<x <<" ";
	}
	cout <<endl;
	
}
