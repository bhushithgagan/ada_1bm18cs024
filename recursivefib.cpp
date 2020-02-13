#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
if(n==1)
	return 0;
if(n==0)
	return 1;
return (fib(n-1) + fib(n-2));
}

int main()  {
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	int f = fib(n);
	cout<<f<<endl;
return 0;
}
