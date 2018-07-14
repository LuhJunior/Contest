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
#define pq priority_queue
#define pb push_back
#define pf pop_front
using namespace std;

int main()
{
    int n, x, y=-10000;
    while(cin>>n){
        FOR(n){
            cin>>x;
            if(x > y) y = x;
        }
        if(y<10) c(1);
        else if(y<20) c(2);
        else c(3);
        y=-10000;
    }
    return 0;
}

