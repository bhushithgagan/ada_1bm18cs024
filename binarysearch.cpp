#include<iostream>
using namespace std;
int main() {
int a[10],ele,n,pos,i,j,found,m,f = 0,l,t;
cout<<"Enter the number of test cases: ";
cin>>t;
for (j=0;j<n;j++) {
	cin>>n>>ele;
	l = n-1;
	for(i = 0; i<n;i++) 
		cin>>a[i]; 
	m = (f + l) / 2;
	while (f <= l) {  
   	if (a[m] < ele) 
            f = m + 1;
 	else if (a[m] == ele) {
            cout<<1;
	    exit(0); 
	}
  	else
            l = m - 1; 
	m = (f+l)/2;
	}
	if(f>l)
		cout<<-1;
}
return 0;
}

 

