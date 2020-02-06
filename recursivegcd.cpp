#include<iostream>
using namespace std;

int gcd(int m,int n) {
	if(n==0)
	return m;
	else 
	gcd(n,m%n);
}

int main() {
	int m,n,g;
	cout<<"Enter two numbers:"<<endl;
	cin>>m>>n;
	g = gcd(m,n);
	cout<<"GCD of"<<" "<<"the two numbers is:"<<" "<<g<<endl;
	return 0;
}
