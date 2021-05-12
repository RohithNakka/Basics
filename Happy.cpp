#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num;
cout<<"Enter a Number";
cin>>num;
int r,res=0;
while(1)
{
	r=num%10;
	num=num/10;
	res=res+(r*r);
	if(num==0)
	{
		num=res;
		res=0;
		if(num>=1&&num<=9)
		{
			break;
		}
	}
}
	if(num==1)
	{
		cout<<"HAPPY NUMBER";
	}
	else{
		cout<<"NOT A HAPPY NUMBER";
		
	}
	return 0;
}