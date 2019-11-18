#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 100;
char A[N],B[N];
int dp[N][N];//表示A的i号和B的j号位之前的LCS长度
int main()
{
    int n;
    fgets(A+1,N,stdin);
    fgets(B+1,N,stdin);
    int lenA = strlen(A+1);
    int lenB = strlen(B+1);
    for (int i = 0; i < lenA; ++i) {
        dp[i][0] = 0;
    }
    for (int j = 0; j < lenB; ++j) {
        dp[0][j] = 0;
    }
    for (int i = 1; i < lenA; ++i) {
        for (int j = 1; j < lenB; ++j) {
            if (A[i] == B[j])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d",dp[lenA][lenB]);
    return 0;
}