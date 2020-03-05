#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n) {  
    int i, key, j;  
    for (i = 1; i < n; i++) {  
        key = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  

int main() {
	int n;
	cout<<"Enter the array size: "<<endl;
    	cin >> n;
    	int arr[n];
    	cout<<"Enter the array elements: "<<endl;
    	for (int i = 0; i < n; ++i) cin >> arr[i];
	clock_t start,end;
	start = clock();    
    	insertionSort(arr, n);
    	cout<<"Sorted array: "<<endl;
    	for (int i = 0; i < n; ++i) cout << arr[i] << endl;
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
	cout << "Time taken by program is : " << fixed << time_taken << setprecision(5); 
	cout << " sec " << endl;
    	return 0;
}

