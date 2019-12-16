#include <iostream>
#include <cstring>
using namespace std;

const long long mod = 1000000007;
int t;
int n;
int m;
long long f[10];
long long g[10];
long long h[10];

long long pow(long long a, int p)
{
    long long ans = 1;
    while(p)
    {
        if (p % 2) ans = ans * a % mod;
        a = a * a % mod;
        p /= 2;
    }
    return ans;
}
int main(void)
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    f[0] = 1;
    for (int i=1; i<=9; i++)
        for (int j=1; j<=4; j++)
            if (i - j >= 0) f[i] = (f[i] + f[i-j]) % mod;

    for (cin >> t; t; t--)
    {
        cin >> n >> m;
        for (int i=1; i<=m; i++) g[i] = pow(f[i], n);

        memset(h, 0, sizeof(h));
        h[1] = 1;
        for (int i=2; i<=m; i++)
        {
            h[i] = g[i];
            for (int j=1; j<i; j++){
                h[i] = h[i] - h[j] * g[i-j];
                int a=1;
            }
        }
        cout << h[m] << "\n";
    }

    return 0;
}