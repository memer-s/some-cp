#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << hex << left << showbase << nouppercase;
		cout << (long long) A << endl;
		

		cout << showpos;
		cout.width(15); cout << dec << right << setprecision(2) << fixed << setfill('_') << B << endl;

		cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;
	}
	return 0;

}