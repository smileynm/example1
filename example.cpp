#include <iostream>
using namespace std;

int cal(int x)
{
	int D[100];
	D[0] = 0;
	D[1] = 1;
	D[2] = 2;
	D[3] = 4;

	for (int i = 4; i < 12; i++)
		D[i] = D[i - 1] + D[i - 2] + D[i - 3];

	return D[x];
}

int main(void)
{
	int T;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		cout << cal(n) << "\n";
	}

	system("pause");
}