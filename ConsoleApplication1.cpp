#include <iostream>
#include <string>
using namespace std;
int usl = 1;
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
	cout << "+   -   *   /   %" << endl;
	cin >> operation;

	if (operation == "+") 
	{
		while (usl == 1)
		{
			func();
			cout << x + y << endl;
			cout << "+ - * /" << endl;
			cin >> operation;
		}

	}

	if (operation == "-")
	{
		while (usl == 1)
		{
			func();
			cout << x - y << endl;
			cout << "+ - * /" << endl;
			cin >> operation;
		}
	}
	if (operation == "*")
	{
		while (usl == 1)
		{
			func();
			cout << x * y << endl;
			cout << "+ - * /" << endl;
			cin >> operation;
		}
	}
	if (operation == "/")
	{
		while (usl == 1) {
			func();
			cout << x / y << endl;
			cout << "+ - * /" << endl;
			cin >> operation;
		}
	}
	if (operation == "%")
	{
		while (usl == 1) {
			func();
			cout << x % y << endl;
			cout << "+ - / *" << endl;
			cin >> operation;

		}
	}
	return 0;
}