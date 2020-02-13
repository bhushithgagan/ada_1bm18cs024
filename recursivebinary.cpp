#include <bits/stdc++.h>
using namespace std;  
int binarySearch(int arr[], int f, int l, int ele) 
{ 
   if (l >= f) 
   { 
        int mid = (f+l)/2;  
        if (arr[mid] == ele)  
		return mid;  
        if (arr[mid] > ele) 
		return binarySearch(arr, f, mid-1, ele);  
        return binarySearch(arr, mid+1, f, ele); 
   }  
   else 
	return -1; 
} 
  
int main() 
{ 
int a[20],n,ele,b;
cout<<"Enter the number of elements: "<<endl;
cin>>n;
cout<<"Enter the array elements :"<<endl;
for(int i=0;i<n;i++)
	cin>>a[i];
cout<<"Enter the element to be searched: "<<endl;
cin>>ele;
b = binarySearch(a, 0, n-1, ele); 
if(b == -1) 
	cout<<"Element is not present in array"<<endl;
else 
	cout<<"Element is present"<<endl; 
return 0; 
} 
