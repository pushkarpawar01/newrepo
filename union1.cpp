#include "iostream"
#include "vector"

using namespace std;

vector<int> unionofsortedarrays(vector<int> &arr1, int size1, vector<int> &arr2, int size2){
	vector<int> newarr;
	int i=0;
	int j=0;
	while(i<size1 && j<size2){
		if(arr1[i]<=arr2[j]){
			if(newarr.size()==0 || newarr.back() != arr1[i]){
				newarr.push_back(arr1[i]);
				i++;
			}
		}
		else if(arr2[j]<=arr1[i]){
			if(newarr.size()==0 || newarr.back() != arr2[j]){
				newarr.push_back(arr2[j]);
				j++;
			}
		}
		else{
			if(newarr.size()==0 || newarr.back() != arr1[i]){
				newarr.push_back(arr1[i]);
			}
		}
	}
	while(j<size2){
		if(arr2[j]<=arr1[i]){
			if(newarr.size()==0 || newarr.back() != arr2[j]){
				newarr.push_back(arr2[j]);
				j++;
			}
		}
}
	while(i<size1){
		if(arr1[i]<=arr2[j]){
			if(newarr.size()==0 || newarr.back() != arr1[i]){
				newarr.push_back(arr1[i]);
				i++;
			}
		}
	}
	return newarr;
}
int main(){
	vector<int> arr1 = {1,2,2,3,4,5,6};
	vector<int> arr2 = {2,3,3,4,7,8,9};
	int size1 = arr1.size();
	int size2 = arr2.size();
	vector<int> arr = unionofsortedarrays(arr1, size1, arr2, size2);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}
