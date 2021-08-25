#include<iostream>

using namespace std;

bool prime(int num)
{
	int i;
	bool isPrime = true;
	
	if(num ==0 || num ==1){
		isPrime = false;
	}
	else{
		for(i=2; i<=num/2; i++){
			if(num % i == 0){
				isPrime = false;
				break;
			}
		}	
	}
	return isPrime;	
}
int main()
{
	int n,i;
	bool flag = false;
	
	cout<<"Enter a positive integer: ";
	cin>>n;
	for(i = 2; i<=n/2; i++){
		if(prime(i)){
			if(prime(n-i)){
				cout<<n<<" = "<< i <<" + "<< n-i<<endl;
				flag = true;
			}
		}
	}	
	if(!flag)
		cout<<n<<": Invalid"<<endl;
	return 0;
}
