#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    int num, inter, max_inter;

    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        vector<int> arr;

        
        for(int j = 0; j < n; j++){
            cin >> num;
            arr.push_back(num);
        }
        
        sort(arr.begin(), arr.end());

        max_inter = 1;
        inter = 1;
        for(int l = 0; l < n; l++){
            if(l + 1 < n){
                if(arr[l + 1] - arr[l] <= k){
                    inter++;
                    if(inter > max_inter){
                        max_inter = inter;
                    }
                }else{
                    inter = 1;
                }
            }
        }

        int min_problems = n - max_inter;
        
        if(arr.size() == 1){
            cout << "0" << endl;
        }else{
            cout << min_problems << endl;
        }

    }

    return 0;
}