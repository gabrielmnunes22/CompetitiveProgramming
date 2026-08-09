#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a, b, c;
    int n_problems = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if (a && b == 1 || a && c == 1 || b && c == 1){
            n_problems++;
        }
    }

    cout << n_problems << endl;
}