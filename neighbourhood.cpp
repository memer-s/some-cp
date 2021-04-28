#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
	
	int lastsum = -64;

	for(int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 4; j++)
		{
			int sum = 0;

			sum = arr[i+1][j+1] + sum; // mid

			sum = arr[i][j+2] + sum; // upper
			sum = arr[i][j] + sum;
			sum = arr[i][j+1] + sum;

			sum = arr[i+2][j+2] + sum; //lower
			sum = arr[i+2][j] + sum;
			sum = arr[i+2][j+1] + sum;

			if (sum > lastsum)
			{
				lastsum = sum;
			}
			
		}
	}

	return lastsum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
