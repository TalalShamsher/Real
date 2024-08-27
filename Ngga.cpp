#include<iostream>

using namespace std;
int main()
{
	int x, y, sum, prod;
	cout << "\nEnter first number\t";
	cin >> x;
	cout << "\nEnter second number\t";
	cin >> y;
	if (x>y)
	{
		sum = x + y;
		prod = x * y;
		cout << "\nThe Sum is=\t" << sum << endl;
		cout << "\nThe Product is=\t" << prod << endl;
	}
	else
	{
		cout << "\nBhosrike munh me lele";
	}
	return 0;
}