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
    char *p, c;
    string s;
    int n, t, t1;
    cin>>n;
    getchar();
    FOR(n){
        getline(cin, s);
        t = s.size();
        reverse(s.begin(), s.end() - s.size()/2);
        reverse(s.end() - s.size()/2, s.end());
        c(s);
    }
    return 0;
}
