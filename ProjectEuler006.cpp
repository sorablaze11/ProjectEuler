#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int t, n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        unsigned long long int a1 = n*n*(n+1)*(n+1)/4, a2 = n*(n+1)*(2*n+1)/6;
        unsigned long long int ans = abs(a1-a2);
        cout<<ans<<"\n";
    }
    return 0;
}
