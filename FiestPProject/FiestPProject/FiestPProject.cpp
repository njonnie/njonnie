#include <iostream>
using namespace std;

int main()
{
//	int a;
//	int b;

//	cout << "Hello World!\n";
//	cout << (2+3)*5<<"\n";

//	cout << "Input a and b\n";
//	cin >> a >> b;

//	cout << "a + b: " << a + b << endl;
//	cout << a << " + " << b;
//	cout << " = " << a + b << endl;

//	cout << "a - b: " << a - b << endl;
//	cout << a << " - " << b;
//	cout << " = " << a - b << endl;
	//delenie s okrugleniem v verh (a + b - 1) / b

//	int n, k;
//	cin >> n >> k;
//	cout << k / n << endl;

//	cin >> n >> k;
//	cout << k % n << endl;

//	cout << "Poluchit posledhuyu n%10 cifru" << endl;
//	cout << "Vvedite chislo n:" << endl;
//	cin >> n;
//	cout << n % 10 << endl;

//	cout << "Poluchit pervuyu n/10 cifru" << endl;
//	cout << n + 2 - (n % 10 % 2) << endl;
//	cout << n % 10 % 2 << endl;
//	cout << (n % 10 % 2) / 2 << endl;

//	int n1, n2, n3;
//Выведите наименьшее число парт, которое нужно приобрести для них
//	primer 20, 21, 22 ----> 32

	cout << "Vvedite chisla:" << endl;
//	cin >> n1 >> n2 >> n3;
//	cout << (n1 + (n1 % 10 % 2)) / 2 + (n2 + (n2 % 10 % 2)) / 2
//		+ (n3 + (n3 % 10 % 2)) / 2;
//	cin >> n1;
//	cout << n1 % 86400 /3600 << ":"
//	<< (n1 % 86400 % 3600 / 60) / 10
//	<< (n1 % 86400 % 3600 / 60) % 10 << ":"
//	<< (n1 % 86400 % 3600 % 60) / 10
//	<< (n1 % 86400 % 3600 % 60) % 10;

//	cout << ((n1 % 109) + 109) % 109 << endl;

	int n12, n21;
	n21 = 0;
	cin >> n12;
	n21 = n12 % 10 * 1000 + n12 / 10 % 10 * 100 + n12 / 100 % 10 * 10 + n12 / 1000 % 10;
	cout << n12 % 10 << endl;
	cout << n12 / 10 % 10 << endl;
	cout << n12 / 100 % 10 << endl;
	cout << n12 / 1000 % 10 << endl;
	cout << n21 << endl;
	cout << n21 / n12;

	return 0;
}