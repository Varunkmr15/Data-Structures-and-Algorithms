// This is an example of divide and conquer algorithm in which we firstly divide the array into smaller chunks 
// As the smallest chunk of a single element will be sorted so we stop dividing there and merge on our way back
// In sorted ordered So we basically update our original array and that's how merge sort works
// TC: O(nlogn)
// SC: O(N)

#include <bits/stdc++.h>
using namespace std;

void merge(int l, int mid, int h, vector<int>&v ){
	int i=l,j=mid+1,k=0;
	vector<int>c(h+1);
	while(i<=mid && j<=h){
		if(v[i]<=v[j]){
			c[k]=v[i];
			i++,k++;
		}
		else{
			c[k]=v[j];
			j++,k++;
		}
	}
	while(i<=mid){
		c[k]=v[i];
		i++,k++;
	}
	while(j<=h){
		c[k]=v[j];
		j++,k++;
	}
	for(int i=l;i<=h;i++){
		v[i]=c[i-l];				 // Updating the array after merging
	}
}

void mergeSort(int l, int h,vector<int>&v){
		if(l<h){
		int mid=(l+h)/2;
		mergeSort(l,mid,v);
		mergeSort(mid+1,h,v);
		merge(l,mid,h,v);
	}
}

int main(){
	vector<int>v={1,2,3,4,5,6,7,8};
	mergeSort(0,7,v);
	for(auto x:v){
		cout <<x <<" ";
	}
	cout <<endl;
	
}
