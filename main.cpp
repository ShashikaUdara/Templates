#include <iostream>
#include "Temp.h"

using namespace std;

int main()
{
	Temp t;
	cout<<"Integer input: "<<t.simpleTemplateDemo<int>(6,3)<<endl;
	cout<<"Char input: "<<t.simpleTemplateDemo<char>('a', 'b')<<endl;
	return 0;
}