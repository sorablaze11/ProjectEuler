#include <iostream>

using namespace std;

int main() {
    int t;
    long long int n, sum;
    cin>>t;
    for(int l=0;l<t;l++){
        cin>>n;
        sum = ((n-1)/3)*((n-1)/3+1)/2*3 + ((n-1)/5)*((n-1)/5+1)/2*5 - ((n-1)/15)*((n-1)/15+1)/2*15;
        cout<<sum<<"\n";
    }
    return 0;
}
