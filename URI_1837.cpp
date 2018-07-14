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
    int x, y;
    cin >>x>>y;
    int q = x/y;
    if(x<0 && x%y) q = q-1;
    if(x<0 && y<0 && x%y) q = x/y+1;
    c(q<<" "<<x-q*y);
    cout<<" ";
	return 0;
}

