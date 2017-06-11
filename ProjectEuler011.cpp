#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[20][20];
    long long int temp, max = 0;
    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            cin>>arr[i][j];
    for(int i=0;i<20;i++){
        for(int j=0;j<17;j++){
            temp = arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            if(temp>max)
                max = temp;
        }
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<17;j++){
            temp = arr[j][i]*arr[j+1][i]*arr[j+2][i]*arr[j+3][i];
            if(temp>max)
                max = temp;
        }
    }
    for(int i=0;i<17;i++){
        int k=0;
        for(int j=i;j<17;j++,k++){
            temp = arr[j][k]*arr[j+1][k+1]*arr[j+2][k+2]*arr[j+3][k+3];
            if(temp>max)
                max = temp;
        }
    }
    for(int i=0;i<17;i++){
        int j=0;
        for(int k=i;k<17;j++,k++){
            temp = arr[j][k]*arr[j+1][k+1]*arr[j+2][k+2]*arr[j+3][k+3];
            if(temp>max)
                max = temp;
        }
    }
    for(int i=0;i<17;i++){
        int k=19;
        for(int j=i;j<17;j++,k--){
            temp = arr[j][k]*arr[j+1][k-1]*arr[j+2][k-2]*arr[j+3][k-3];
            if(temp>max)
                max = temp;
        }
    }
    for(int i=19;i>2;i--){
        int k=0;
        for(int j=i;j>2;j--,k++){
            temp = arr[j][k]*arr[j-1][k+1]*arr[j-2][k+2]*arr[j-3][k+3];
            if(temp>max)
                max = temp;
        }
    }
    cout<<max;
    return 0;
}
