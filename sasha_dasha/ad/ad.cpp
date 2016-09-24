#include<iostream>
#include<locale.h>
using namespace std;
int a,b,sum,raz,umn,del;
void razn()
{   
    cin>>a;
    cout<<"„исло а ="<<a<<endl;
    cin>>b;
    cout<<"„исло б ="<<b<<endl;
    raz=a-b;
    cout<<"разность="<<raz<<endl;
    system("pause");
}
void um()
{   
    cin>>a;
    cout<<"„исло а ="<<a<<endl;
    cin>>b;
    cout<<"„исло б ="<<b<<endl;
    umn=0;
	for (int i=0;i<b;++i)
	{umn=umn+a;
	}
    cout<<"умножение="<<umn<<endl;
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
    cout<<"„исло а ="<<a<<endl;
    cin>>b;
	summ(a,b);
    cout<<"„исло б ="<<b<<endl;
    cout<<"сумма="<<summ(a,b)<<endl;
    system("pause");
	;
}
