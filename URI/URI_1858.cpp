#include <bits/stdc++.h>
#define FOR(x) for(int i=0; i<x; i++)
#define forj(x) for(int j=0; j<x; j++)
#define forq(Q) for(int i=0; Q; i++)
#define FORM(x,y) for(int i=0; i<x; i++) for(int j=0; j<y; j++)
#define FORT(x,y) for(int i=x; i<y; i++)
#define WHILE(n,x) while((n--)&&cin>>x)
#define M(x, y) max(x, y)
#define m(x, y) min(x, y)
#define c(x) cout<<x<<endl
#define pq priority_queue
#define pb push_back
#define pf pop_front
#define mine(v) min_element(v.begin(), v.end())
#define maxe(v) max_element(v.begin(), v.end())

using namespace std;


int main() {
    int n;
    vector<int> v;
    cin>>n;
    v.resize(n);
    FOR(n) cin>>v[i];
    auto i = mine(v);
    c(i-v.begin()+1);
	return 0;
}
