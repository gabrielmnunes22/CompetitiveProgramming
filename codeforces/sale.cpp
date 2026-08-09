#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, num;
    vector<int> arr;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }
    
    sort(arr.begin(), arr.end());

    int sum = 0;
    int min = 0;

    for(int i = 0; i < n; i++){
        if(i == m){
            break;
        }
        sum += (-1) * arr[i];
        if(arr[i] * (-1) > 0){
            min = sum;
        }
    }

    //cout << sum << endl;

    if(min != 0){
        cout << min << endl;
    }else{
        cout << "0" << endl;
    }

    return 0;
}