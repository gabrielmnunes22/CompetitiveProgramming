#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> a(n);

        for(int j = 0; j < n; j++){
            cin >> a[j];
        }

        sort(a.begin(), a.end());

        int counter = 0;
        for(int k = 1; k < a.size(); k++){
            if(a[k] - a[k - 1] <= 1){
                counter++;
            }
        }

        if(a.size() - counter <= 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }


    return 0;
}