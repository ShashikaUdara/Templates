#ifndef TEMP_H
#define TEMP_H

using namespace std;

class Temp
{
public:
	Temp() {}
	~Temp() {}
	template <typename T>
	T simpleTemplateDemo(T a, T b)
	{
		return (a > b)? a : b;
	}
};

#endif