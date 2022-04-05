#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    int n = 0;
    cin >> n;
    int DP[1000001];

   for(int i = 2; i <= n; i++)
   {
       DP[i] = DP[i-1] + 1;
       if(i % 2 == 0) DP[i] = min(DP[i], DP[i/2] +1);
       if(i % 3 == 0) DP[i] = min(DP[i], DP[i/3] +1);
   }

    cout << DP[n] << endl;

    return 0;
}