#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vect;

    for (int i = 0, a; i < n; i++)
    {
        cin >> a;
        vect.push_back(a);
    }

    sort(vect.begin(), vect.end());

    for (int j = 0; j < n; j++)
    {
        cout << vect[j] << " ";
    }
    
    

    return 0;
}
