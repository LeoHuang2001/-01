#include<iostream>
#include<fstream>
using namespace std;
int main()
{	
    int a,i,j,z=0,d=0;
    int b[50],c[50];
	ifstream A("1.txt");
	A>>a;
	cout<<a<<endl<<"Ans=";
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			while(a%i==0)
			{
				a=a/i;
				z++;
			}
			b[d]=i;
			c[d]=z;
			z=0;
			d++;
		}
	}
    for(i=d-1;i>=0;i--)
	{
		cout<<b[i]<<"("<<c[i]<<")";
		}
		cout<<endl;
		return 0;
		A.close();
}
