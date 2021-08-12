#include <iostream>

using namespace std;

int main()
{
	int choice;
	while(1)
	{
		cout<<"\n\n1. To Vote\n2. Exit\n";
		cout<<"Enter you choice: ";
		cin>>choice;
		if(choice == 2)
		{
			break;
		}
		int age;
		char name[20];
		cout<<"Enter User Name: ";
		cin>>name;
		cout<<"Enter Age of User: ";
		cin>>age;
		
		switch(choice)
		{
			case 1:
			{	
				if(age >= 18)
				{
					cout<<"\nYou are eligible for voting!";
				}
				else{
					cout<<"\nYou are not eligible for voting!";
				}
				break;
			}
			default: 
				cout<<"\nTry Again!\n";
				break;
		}
	}
	
	return 0;
	
}
