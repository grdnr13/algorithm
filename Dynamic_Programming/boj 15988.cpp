#include<iostream>
using namespace std;

long long ans[1000000],n, t; //n을 1,2,3의 합으로 나타내는 방법의 수 equals ans[n]
long long dp(int n){
    for(int i=4; i<=n; i++){
        ans[i] = ans[i-1]+ans[i-2]+ans[i-3]; 
        //n-1, n-2, n-3을 1,2,3의 합으로 나타내는 방법의 수를 더한 것과 같다(각 경우에 1 or 2 or 3을 더한 것과 같음)
        ans[i] %= 1000000009;
    }
    return ans[n];
}
int main(){
    ans[1] = 1, ans[2] = 2, ans[3] = 4; //n=1,2,3일때 값은 미리 구해둔다
    cin >> t;
    while(t>0){
        cin >> n;
        cout << dp(n) << '\n'; //n을 1,2,3의 합으로 나타내는 방법의 수 출력
        t--;
    }
}
