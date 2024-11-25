#include <bits/stdc++.h>

using namespace std;

void merge (int *arr, int left, int mid, int right){
	int size_left= mid-left+1;
	int size_right= right-mid;
	
	int LeftArray[size_left], RightArray[size_right];
	
	int i,j,k=left;
	
	
	for(i=0;i<size_left;i++){
		LeftArray[i]=arr[i+left];
	}
	for(j=0;j<size_right;j++){
		RightArray[j]=arr[j+mid+1];
	}
	i=0;
	j=0;
	
	while (i < size_left && j < size_right){
		if(LeftArray[i] < RightArray[j]){
			arr[k++]=LeftArray[i++];
		}
		else {
			arr[k++]=RightArray[j++];
		}
	}
	
	while (i < size_left){
		arr[k++]=LeftArray[i++];
	}
	
	while (j < size_right){
		arr[k++]=RightArray[j++];
	}
	
}

void mergesort(int *arr, int left, int right){
	if(left < right){
		size_t mid = left + (right- left)/2;
		mergesort(arr, left, mid);
		mergesort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main ()
{
	int N;
	cin >> N;
	int rating[3*N];
	for(int i = 0; i < 3*N ; i++)
	{
		cin >> rating[i];
	}
	mergesort(rating, 0, 3*N - 1);
	cout<< rating[N] << endl;
	return 0;
}
