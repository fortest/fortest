// hello-world.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "template.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	A<int> c;
	cout<<c.getA();
	return 0;
}

