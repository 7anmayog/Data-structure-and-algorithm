/*print the following pattern


1
2 2
3 3 3
4 4 4 4
5 5 5 5 5


*/

#include<bits/stdc++.h>
using namespace std;

void print5(int n) {
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<n-i+1;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    print5(n);
}


//created by tanmay