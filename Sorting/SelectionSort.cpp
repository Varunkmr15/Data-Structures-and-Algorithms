// In selection sort we basically select the minimum element from the list and sort it first (basically place it at the first index) 
// then find the smallest element in rest n-1 list and sort that also we (place it at 2nd index) keep on doing this
// Until the last elemnt and all the items in the list gets sorted

// Time complexity : O(n^2)

#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>&v){
	for(int i=0;i<=v.size()-2;i++){
		int index=min_element(v.begin()+i,v.end())-v.begin();
		swap(v[i],v[index]);
	}
}

int main(){
	vector<int>v={9,13,20,24,52,46};
	selection_sort(v);
	for(auto x:v){
		cout <<x <<" ";
	}
	cout <<endl;
}
