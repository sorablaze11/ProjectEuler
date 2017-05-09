#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int t, n, k, pro = 1, temp = 1;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k>>s;
        vector<int> number(n);
        for(int j=0;j<s.size();j++){
            number[j] = s[j] - '0';
        }
        pro = 0;
        temp = 1;
        for(int j=0;j<number.size()-k+1;j++){
            temp = 1;
            for(int l=j;l<j+k;l++){
                temp *= number[l]; 
            }
            if(temp > pro)
                pro = temp;
        }
        cout<<pro<<"\n";
    }
    return 0;
}
