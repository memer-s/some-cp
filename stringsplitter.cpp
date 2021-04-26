#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> vect;
    stringstream ss(str);
    char ch;
    // dumb
    int commas = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==',')
        {
            commas++;
        }
    }
    

    for (int i = 0, temp; i < commas+1; i++)
    {
        ss >> temp >> ch;
        
        vect.push_back(temp);
    }

    return vect;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}