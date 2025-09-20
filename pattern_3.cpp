/*print the following pattern


1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/

#include<bits/stdc++.h>
using namespace std;

void print3(int n) {
    for (int i = 0;i<=n;i++) {
        for (int j = 0;j<=i;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    print3(n);
}


//created by tanmay