#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int t, n;
    long long int pro;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int> a;
        pro = 1;
        for(int j=2;j<=n;j++){
            if(pro%j==0)
                continue;
            int temp = j, flag = 0;
            for(int k=0;k<a.size();k++){
                if(temp%a[k]==0){
                    temp /= a[k];
                    a[k] = 1;
                    flag = 1;
                }
            }
            a.push_back(j);
            if(flag){
                pro *= temp;
                continue;
            }
            pro *= j;
        }
        cout<<pro<<"\n";
    }
    return 0;
}
