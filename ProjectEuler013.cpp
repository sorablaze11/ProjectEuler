#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long int flag = 0, carry = 0, tempSum = 0;
    vector<int> ans(10000);
    cin >> n;
    vector<string> s(n);
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];

    }
    int k = 0;
    for(int i = 49 ; i >=0 ; i--){
        tempSum = 0;
        for(int j = 0 ; j < n ; j++){
            tempSum += s[j][i] - '0';
        }
        tempSum += carry;
        if(i == 0){
            while(tempSum != 0){
                ans[k++] = tempSum%10;
                tempSum /= 10;
            }
        }else{
            carry = tempSum/10;
            ans[k++] = tempSum%10;
        }
    }
    for(int i = k-1, j = 0 ; j < 10 ;i--, j++){
        cout << ans[i];
    }
    return 0;
}
