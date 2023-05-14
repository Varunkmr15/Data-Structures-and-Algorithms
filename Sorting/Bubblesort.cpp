// Push the maximum element to the last
// Adjacent swapping is the key
// After adjacnet swaps the last element will be sorted
// Time complexity: O(n^2) -> worst/average case
// Can be optimised to O(n) by keeping a check that if no swapping occur in any pass that means array is sorted
// and we can simply break out at that point of time

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>&v){
	for(int i=v.size()-1;i>0;i--){
		bool swapoccur=0;
		for(int j=0;j<i;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
				swapoccur=1;
			}
		}
		if(swapoccur==0)
			break;
	}
}


int main(){
	vector<int>v={20,50};
	bubble_sort(v);
	for(auto x:v){
		cout <<x <<" ";
	}
	cout <<endl;
}
