#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n, sum = 0;
    cin >> n;
    vector<long long int> fact{1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    for(int i = 10; i <= n ; i++){
        long long int temp = i, tempSum = 0;
        while(temp != 0){
            tempSum += fact[temp%10];
            temp /= 10;
        }
        //cout << tempSum << " " << i << "\n";
        if(tempSum % i == 0)
            sum += i;
    }
    cout << sum << "\n";
    return 0;
}
