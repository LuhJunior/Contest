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
    pair<int, int> a, b;
    while(cin>>a.first>>a.second>>b.first>>b.second && a.first != 0){
        if(a == b) c(0);
        else if(a.first == b.first || a.second == b.second || a.first-a.second == b.first-b.second || a.first+a.second == b.first+b.second) c(1);
        else c(2);
    }
	return 0;
}


