#include<iostream>
#include<vector>
#include<math.h>
using namespace std; 

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int dp[1001];
    dp[0] = 1;
    for(int i = 1; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j] +1);

            }
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        res = max(res,dp[i]);
    }
    cout << res;
    return 0;
}