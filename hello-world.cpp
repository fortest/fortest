// hello-world.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char ans = 'n';
	cout<<"yes/no(y/n)\n"
	cin>>ans;
	if(ans=='n')
	{
		cout<<"no"<<endl;
	}
	else if(ans=='y')
	{
		cout<<"yes"<<endl;
	}
	return 0;
}

