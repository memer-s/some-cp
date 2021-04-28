#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {

	int q; cin >> q;
	set<int> s;
	for (int i = 0,x,y; i < q; i++)
	{
		cin >> x >> y;
		if (x==1)
		{
			s.insert(y);
		}

		else if(x==2) {
			s.erase(y);
		}

		else {
			set<int>::iterator itr = s.find(y);
			if(itr!=s.end()) {
				cout << "Yes" << endl;
			} 

			else {
				cout << "No" << endl;
			}
		}
		
	}
	



    return 0;
}



