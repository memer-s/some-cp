#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,y;
    cin >> n;
    vector<int> v;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    cin >> q;
    for (int j = 0; j < q; j++)
    {
        cin >> y;

        vector<int>::iterator low;

        low = lower_bound(v.begin(), v.end(), y);

        if(binary_search(v.begin(), v.end(), y)) {
            cout << "Yes ";
        }
        else {
            cout << "No ";
        }
        cout << (low - v.begin() + 1) << endl;
        
        
    }
    
    
    return 0;
}

// 8 1 1 2 2 6 9 9 15 4 1 4 9 15