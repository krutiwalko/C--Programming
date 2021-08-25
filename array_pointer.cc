#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	int *p=arr; //pointing p to array arr
	for(int i=0;i<n;i++){
		cin>>*p;
		p++;
	}
	p=arr; //pointing p again to array arr
	for(int j=0; j<n; j++){
		cout<<*p<<" ";
		p++;
	}
	return 0;
}
