#include <bits/stdc++.h>
#define for(x) for(int i=0; i<x; i++)
#define forj(x) for(int j=0; j<x; j++)
#define forq(Q) for(int i=0; Q; i++)
#define form(x,y) for(int i=0; i<x; i++) for(int j=0; j<y; j++)
#define fort(x,y) for(int i=x; i<y; i++)
#define WHILE(n,x) while((n--)&&cin>>x)
#define M(x, y) max(x, y)
#define m(x, y) min(x, y)
#define c(x) cout<<x<<endl
#define pq priority_queue
#define pb push_back
#define pf pop_front
#define mine(v) min_element(v.begin(), v.end())
#define maxe(v) max_element(v.begin(), v.end())
#define ll long long

using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a<b+c && b<a+c && c<b+a) c("S");
    else if(a<b+d && b<a+d && d<b+a) c("S");
    else if(d<b+c && b<d+c && c<b+d) c("S");
    else if(a<d+c && d<a+c && c<d+a) c("S");
	else c("N");
	return 0;
}
