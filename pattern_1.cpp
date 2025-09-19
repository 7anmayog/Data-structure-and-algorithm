/*print the following pattern


* * * * *
* * * * *
* * * * *
* * * * *
* * * * *


*/

#include<bits/stdc++.h>
using namespace std;

void print1() {
    for (int i = 0;i<=4;i++) {
        for (int j = 0;j<=4;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main () {
    print1();
}
