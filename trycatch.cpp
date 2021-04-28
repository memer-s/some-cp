#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative"); // throw
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0; // throw
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
		// locked

		Server serv;

		try
		{
			cout << serv.compute(A,B) << endl;
		}


		catch(std::bad_alloc bal) {
			cout << "Not enough memory" << endl;
		}

		catch(std::exception& exc) {
			cout << "Exception: " << exc.what() << endl;
		}

		catch(int e) {
			if (e==1||e==0)
			{
				cout << "Other Exception" << endl;
			}
			
		}

		// locked
	}
	cout << Server::getLoad() << endl;
	return 0;
}