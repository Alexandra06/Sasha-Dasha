#include<iostream>
#include<locale.h>
using namespace std;
int f(int n)
{
	if(n<=1)
	return 1;
	return f(n-1)+f(n-2);
	system("pause");
}
void main()
{
cout<<"Hello!"<<endl;
int a;
cin>>a;
cout<<f(a)<<endl;
system("pause");
}

