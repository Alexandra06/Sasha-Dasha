#include<iostream>
#include<locale.h>
using namespace std;
int a,b,sum,raz,umn,del;
void razn()
{   
    cin>>a;
    cout<<"����� � ="<<a<<endl;
    cin>>b;
    cout<<"����� � ="<<b<<endl;
    raz=a-b;
    cout<<"��������="<<raz<<endl;
    system("pause");
}
void um()
{   
    cin>>a;
    cout<<"����� � ="<<a<<endl;
    cin>>b;
    cout<<"����� � ="<<b<<endl;
    umn=0;
	for (int i=0;i<b;++i)
	{umn=umn+a;
	}
    cout<<"���������="<<umn<<endl;
    system("pause");
	razn();
}
int summ(int a,int b)
{
	int c=a+b;
	return c;
}
void main()
{
	setlocale(LC_ALL,"RUS");
    cin>>a;
    cout<<"����� � ="<<a<<endl;
    cin>>b;
	summ(a,b);
    cout<<"����� � ="<<b<<endl;
    cout<<"�����="<<summ(a,b)<<endl;
    system("pause");
	;
}
