// Picks up an element and places it in its correct position
// Something like inserting a new element than swapping with the left elements until the picked element is at its correct position
// Tc: O(n^2) -> Worst/average case
// Best case-> O(n)

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>&v){
	for(int i=1;i<v.size();i++){
		int j=i;
		while(j>0 && v[j-1]>v[j]){
			swap(v[j],v[j-1]);
			j--;
		}
	}
}

int main(){
	vector<int>v={1,2,3,4,4,5,6};
	insertion_sort(v);
	for(auto x:v){
		cout <<x <<" ";
	}
	cout <<endl;
}
