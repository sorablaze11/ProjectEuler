#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    long long int score;
    cin >> n;
    vector<string> names(n);
    for(string &s : names)
        cin >> s;
    sort(names.begin(), names.end());
    cin >> q;
    string s;
    for(int i = 0 ;i < q; i++){
        cin >> s;
        score = 0;
        for(int j = 0 ; j < s.size() ; j++){
            score += s[j] - 'A' + 1;
        }
        for(int j = 0 ; j < n ;j++){
            if(s == names[j]){
                score *= (j+1);
                break;
            }
        }
        cout << score << "\n";
    }
    return 0;
}
