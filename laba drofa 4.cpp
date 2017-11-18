#include <conio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main() {
	const int n = 5, m = 5; // розмірність матриці
	const int w = 3; // ширина виводу
	int ar[n][m];
	srand(time(NULL));

	//заповнення масиву
	cout << "Write elements:" << endl;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{

			cin >> ar[i][j];
		}
	}

	// вивід масиву
	cout << "Matrix: " << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << setw(w) << ar[i][j];
		}
		cout << endl;
	}
	//сортування бульбашкою
	for (int k = 0; k < n; ++k)
	{
		for (int l = 0; l < m; ++l)
		{
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					if (i + 1 == n && j + 1 == m)
					{
						continue;
					}
					else
					{
						if (j + 1 == m && ar[i][j] < ar[i + 1][0])
						{
							int t = ar[i][j];
							ar[i][j] = ar[i + 1][0];
							ar[i + 1][0] = t;
						}
						else
						{
							if (ar[i][j] < ar[i][j + 1])
							{
								int t = ar[i][j];
								ar[i][j] = ar[i][j + 1];
								ar[i][j + 1] = t;
							}
						}
					}
				}
			}
		}
	}
	// matrix
	cout << "SORT MATRIX: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << setw(w) << ar[i][j];
		}
		cout << endl;
	}
	cin.get();
	cin.get();
	return 0;
}