#include<iostream>
using namespace std;

void towhan(int n, char src, char temp, char dest) {
	if (n==1) {
	cout<<"Disc"<<" "<<n<<" "<<"moved from"<<" "<<src<<" "<<"to"<<" "<<dest<<endl;
		return;
	}
	towhan(n-1,src,dest,temp);
	cout<<"Disc"<<" "<<n<<" "<<"moved from"<<" "<<src<<" "<<"to"<<" "<<dest<<endl;
	towhan(n-1,temp,src,dest);
}

int main() {
	int n;
	char src = 'a', dest = 'b', temp = 'c';
	cout<<"Enter the number of discs:"<<endl;
	cin>>n;
	towhan(n,src,temp,dest);
	cout<<"Discs moved from source to destination!"<<endl;
	return 0;

}



