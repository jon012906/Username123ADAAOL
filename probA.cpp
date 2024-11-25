#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a; 
	string strings[a]; 							// 1
    cin >> a;									// 1
    for (int i = 0; i < a; i++){				// n + 1
        cin >> strings[i];						// n
    }
    for (int i = 0; i < a; i++){				// n + 1
        int len = strings[i].length();			// n
        for (int j = 0; j < len; j++)  {
            if (strings[i][j] == 'c')
            {
                if (strings[i][j+1] == 'h'){
                    cout << "c";
                    j++;
                    continue;
                } 
				else if (
					strings[i][j+1] == 'e' || 
					strings[i][j+1] == 'i' || 
					strings[i][j+1] == 'y'){
                    cout << "s";
                    continue;
                } 
				else {
                    cout << "k";
                    continue;
                }
            }
			else{
                cout << strings[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
