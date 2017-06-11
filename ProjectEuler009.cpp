#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin>>t;
    for(int l = 0 ; l < t ; l++){
        cin >> n;
        int a = 0, b = 0, c = 0;
        long long int max = 0;
        for(int i = 1 ; i < n/2 ;i++){
            a = i;
            b = (n*n - 2*n*a)/(2*n-2*a);
            if(a*a + b*b == (n-a-b)*(n-a-b)){
                if(max < a*b*(n-a-b)){
                    max = a*b*(n-a-b);
                }
            }
        }
        if(max == 0){
            cout << "-1\n";
        }else{
            cout << max << "\n";
        }
    }
    return 0;
}
