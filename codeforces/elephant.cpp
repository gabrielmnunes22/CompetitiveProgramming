#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, remainder, quotient;
    int min_steps;

    cin >> x;

    quotient = x / 5;
    remainder = x % 5;

    min_steps = 0;
    
    if(x % 5 != 0){
        min_steps++;
    }

    min_steps += quotient;


    cout << min_steps << endl;

    return 0;
}