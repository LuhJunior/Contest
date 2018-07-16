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

int main() {
    int n, x, y, ax, ax2, m=2000;
    cin>>n;
    FOR(n){
        cin>>x>>y;
        FOR(x){
            cin>>ax;
            if(abs(y-ax) < abs(y-m)){
                m = ax;
                ax2 = i;
            }
        }
        c(ax2+1);
        m=2000;
    }
    return 0;
}
