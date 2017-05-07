#include <iostream>

using namespace std;

int main() {
    int t;
    long long int sum, n, a=5, b=8;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        a = 5;
        b = 8;
        sum = 2;
        while(b<=n){
            if(b%2==0)
                sum += b;
            b = b + a;
            a = b - a;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
