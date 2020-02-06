 
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int n,i,k,ele,l,h,mid,count,fpos,lpos;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	int a[n];
	l = 0;
	h = n-1;
	cout<<"Enter the array elements:\n";
	for(int j=0;j<n;j++)
		cin>>a[j];
	cout<<"Enter the element to be searched:"<<endl;
	cin>>ele; 
	for(int i=0;i<n;i++) {
		if(a[i]>a[i+1]) {
		cout<<"invalid entry!"<<endl;
		exit(0);
		}
	}	
	while(l<=h)
	{
		mid = (int)(l+h)/2;
		if(a[mid]==ele)
		{	
			i = mid;
			k = mid;			
			while(a[i]==ele)
			{			
				fpos = i;
				i--;
			}
			while(a[k]==ele)
			{
				lpos = k;
				k++;
			}
			cout<<"First occurrance at: "<<fpos<<endl;
			cout<<"Last occurrance at: "<<lpos<<endl;
			count = lpos-fpos+1;
			cout<<"Count: "<<count<<endl;		
			break;
		}
		else if(a[mid]<ele)
			l = mid+1;
		else 
			h = mid-1;
	}
	if(l>h)
		cout<<"Element is not present"<<endl;
	return 0;
}
