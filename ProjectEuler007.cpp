#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(unsigned long long int no){
    if(no==2 || no==3)
        return true;
    if(no%2==0 || no%3==0)
        return false;
    for(int l=3;l*l<=no;l+=2){
        if(no%l==0)
            return false;
    }
    return true;
}

int main() {  
    unsigned long long int t, n;
    vector<unsigned long long int> arr{2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n<=arr.size()){
            cout<<arr[n-1]<<"\n";
            continue;
        }
        for(unsigned long long int j=arr[arr.size()-1]+2, k=arr.size();k<=n;j+=2){
            if(isPrime(j)){
                //cout<<j<<" ";
                arr.push_back(j);
                k++;
                //cout<<arr.size()<<" ";
            }
        }   
        cout<<arr[n-1]<<"\n";
    }
    return 0;
}
