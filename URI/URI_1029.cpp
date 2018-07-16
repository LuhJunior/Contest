#include <bits/stdc++.h>
#define ll long long
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

ll int f(ll int n, ll int *c){
    (*c)++;
    if(n == 1 || n == 0) return n;
    return f(n-1, c) + f(n-2, c);
}

int main() {
	ll int n, a, c, r;;
	cin>>n;
	FOR(n){
	    c=0;
        cin>>a;
        f(a, &c);
        r=c;
        c("fib("<<a<<") = "<<r-1<<" calls = "<<f(a, &c));
	}
	return 0;
}

