#include <bits/stdc++.h> 
using namespace std; 

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right 
of pivot */
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
	
		int pi = partition(arr, low, high);     //pi-> partition index
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 


void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int arr[50],n; 
	cout<<"Enter value of n: "<<endl;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    } 
    clock_t start,end;
    start  = clock();
    quickSort(arr, 0, n-1); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	end = clock();
    double time_taken = double (end - start)/ double (CLOCKS_PER_SEC);
    cout<<"Time taken is " << fixed << time_taken <<setprecision(5) << "seconds "<<endl;
    return 0; 
} 


