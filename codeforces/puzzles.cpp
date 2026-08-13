#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, f1, f2;
    int A, B, i, range, dif, least_dif;

    cin >> n >> m;
    vector<int> f(m);

    for(i = 0; i < m; i++){
        cin >> f[i];
    }

    sort(f.begin(), f.end());

    i = 0;
    range = n - 1;
    least_dif = f[m - 1] - f[i];

    while(m - i >= n){
        dif = f[range] - f[i];

        if(dif < least_dif){
            least_dif = dif;
        }

        range++;
        i++;
    }


    cout << least_dif << endl;

    return 0;
}