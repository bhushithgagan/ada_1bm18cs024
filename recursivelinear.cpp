#include<bits/stdc++.h> 
using namespace std; 
    
int reclin(int arr[], int f,  
              int l, int ele) 
{ 
    if (l < f) 
        return -1; 
    if (arr[f] == ele) 
        return l; 
    if (arr[l] == ele) 
        return l; 
    return reclin(arr, f + 1,  
                          l - 1, ele); 
} 
  
 
int main() 
{ 
int a[20], i,ele,n; 
cout<<"Enter the number of elements: "<<endl;
cin>>n;
cout<<"Enter the elements: "<<endl;
for(i=0;i<n;i++) 
	cin>>a[i];
cout<<"Enter the element to be searched: "<<endl;
cin>>ele;		
int b = reclin(a, 0, n - 1, ele); 
if (b != -1) 
	cout << "Element found!"<<endl;
else
        cout << "Element" << ele  << " is not present" ; 
return 0; 
} 
