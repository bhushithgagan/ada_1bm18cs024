#include<iostream>
using namespace std;
int main() {
int a[10],ele,n,pos,i,j,found,m,f = 0,l,t;
cout<<"Enter the number of test cases: ";
cin>>t;
for (j=0;j<t;j++) {
	cin>>n>>ele;
	l = n-1;
	f = 0;
	for(i = 0; i<n;i++) 
		cin>>a[i]; 
	
	while (f <= l) {
	m = (f + l) / 2;  
   	if (a[m] < ele) 
            f = m + 1;
 	else if (a[m] == ele) {
            cout<<1; 
	    break;
	}
  	else 
            l = m - 1; 
	}
	if(f>l)
		cout<<-1;
}
return 0;
}

 

