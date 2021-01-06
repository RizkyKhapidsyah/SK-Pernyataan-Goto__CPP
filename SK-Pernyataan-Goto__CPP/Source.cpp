#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	int a, b;
	char lagi;

atas:
	cout << "Masukkan Bilangan = ";
	cin >> a;

	b = a % 2;

	printf("Nilai %d %% 2 adalah = %d", a, b);
	printf("\n\nIngin Hitung Lagi [Y/T] : ");
	
	lagi = _getche();
	
	if (lagi == 'Y' || lagi == 'y') {
		cout << "\n" << endl;
		goto atas;
	}
		
	_getch();
	return 0;
}