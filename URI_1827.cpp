#include <bits/stdc++.h>
#define FOR(x) for(int i=0; i<x; i++)
#define FORJ(x) for(int j=0; j<x; j++)
#define FORQ(Q) for(int i=0; Q; i++)
#define FORM(x,y) for(int i=0; i<x; i++) for(int j=0; j<y; j++)
#define FORT(x,y) for(int i=x; i<y; i++)
#define WHILE(n,x) while((n--)&&cin>>x)
#define M(x, y) max(x, y)
#define m(x, y) min(x, y)
#define c(x) cout<<x<<endl

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int m[n][n];
        FORM(n, n) m[i][j] = 0;
        FOR(n) m[i][i] = 2;
        FOR(n) m[i][n-i-1] = 3;
        for(int i = n/3; i < n-n/3; i++){
            for(int j = n/3; j < n-n/3; j++){
                m[i][j] = 1;
            }
        }
        m[n/2][n/2] = 4;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j!=n-1) cout<<m[i][j];
                else cout<<m[i][j]<<endl;
            }
        }
        c("");
    }
    return 0;
}
