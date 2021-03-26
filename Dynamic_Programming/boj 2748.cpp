#include <iostream>
#include <cstring>

using namespace std;
long long fib[100], n; //fib[n]에 n번째 피보나치 수 저장
long long fibo(int n){
    if(fib[n] != -1)
        return fib[n]; //fib[n]이 구해졌다면 return fib[n]
    if(n < 2) 
        return fib[n] = n; //n이 2보다 작을 때 fib[n]에 n값을 저장하고 return
    return fib[n] = fibo(n - 1) + fibo(n - 2); 
}
int main(){
    for(int i=0;i<100;i++)
        fib[i]= -1; //initialized to -1
    cin >> n;
    cout << fibo(n);
}
