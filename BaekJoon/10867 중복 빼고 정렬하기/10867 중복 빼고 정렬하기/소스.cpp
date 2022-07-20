#include <iostream>

using namespace std;

int main()
{
	bool test[2010] = { false, };
	int n = 0, x = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		test[x + 1000] = true;
	}

	for (int i = 0; i < 2010; i++)
	{
		if (test[i] == true)
		{
			cout << i - 1000 << " ";
		}
	}
	cout << endl;
}