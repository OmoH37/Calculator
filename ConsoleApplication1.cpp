#include <iostream>
#include <string>
using namespace std;

int x;
int y;
void func()
{
	cout << "First num" << endl;
	cin >> x;
	cout << "Second num" << endl;
	cin >> y;
}
int main()
{
	string operation;
	cout << "+   -   *   /" << endl;
	cin >> operation;

	if (operation == "+") 
	{
		func();
		cout << x + y << endl;
		main();
	}

	if (operation == "-")
	{
		func();
		cout << x - y << endl;
		main();
	}

	if (operation == "*")
	{
		func();
		cout << x * y << endl;
		main();
	}


	if (operation == "/")
	{
		func();
		cout << x / y << endl;
		main();
	}
	return 0;
}

