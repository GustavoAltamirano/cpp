#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a = 50;
	int b = 10;
	int c = 7;
	
	if (a > b && a > b)
	{
		cout << "a es el mayor";
	}
	else if (b > a && b > c)
	{
		cout << "b es el mayor";
	}
	else
	{
		cout << "c es el mayor";
	}
	
	return 0;
}