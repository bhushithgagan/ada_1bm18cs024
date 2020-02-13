#include<bits/stdc++.h>
using namespace std;

int main() {
int n,a[20],i,j,temp;
cout<<"Enter the number of elements: "<<endl;
cin>>n;
cout<<"Enter the array elements"<<endl;
for(i=0;i<n;i++)
	cin>>a[i];
clock_t start,end;
start = clock();
for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}		
	}
cout<<"Sorted array: "<<endl;
for(i=0;i<n;i++)
	cout<<a[i]<<endl;
end = clock();
double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
cout << "Time taken by program is : " << fixed << time_taken << setprecision(5); 
cout << " sec " << endl;
return 0;
}
