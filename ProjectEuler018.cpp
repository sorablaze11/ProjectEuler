#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t, n, no, temp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<vector<int>> sum(n,vector<int>());
        for(int j=0;j<n;j++){
            for(int k=0;k<=j;k++){
                cin>>no;
                sum[j].push_back(no);
            }
        }
        for(int j=1;j<n;j++){
            sum[j][0] = sum[j-1][0] + sum[j][0];
        }
        for(int j=1;j<n;j++){
            sum[j][j] = sum[j-1][j-1] + sum[j][j];
        }
        for(int j=2;j<n;j++){
            for(int k=1;k<j;k++){
                if(sum[j-1][k-1] > sum[j-1][k]){
                    sum[j][k] = sum[j][k] + sum[j-1][k-1];
                }else{
                    sum[j][k] = sum[j][k] + sum[j-1][k];
                }
            }
        }
        sort(sum[n-1].begin(), sum[n-1].end());
        cout<<sum[n-1][n-1]<<"\n";
    }
    return 0;
}
