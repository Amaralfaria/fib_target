#include<bits/stdc++.h>
 
using namespace std;


int dp[100000000];
int indice = -1;

int fib(int num, int vezes){
    if(dp[vezes]!=-1){
        return dp[vezes];
    }
    dp[vezes] = fib(num,vezes-1) + fib(num,vezes-2);
    if(dp[vezes] == num){
        indice = vezes;
    }
    
    return dp[vezes];
}
 
 
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    int num;
    cin >> num;
    fib(num,100);
    

    if(indice!=-1){
        cout << "Pertence";
    }else{
        cout << "Nao pertence";
    }

    return 0;
}
