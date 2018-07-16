#include <bits/stdc++.h>
#define for(x) for(int i=0; i<x; i++)
#define forj(x) for(int j=0; j<x; j++)
#define forq(Q) for(int i=0; Q; i++)
#define form(x,y) for(int i=0; i<x; i++) for(int j=0; j<y; j++)
#define fort(x,y) for(int i=x; i<y; i++)
#define while(n,x) while((n--)&&cin>>x)
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
    int n, x, y;
    string s[4];
    cin>>n;
    for(n){
        cin >>s[0]>>s[1]>>s[2]>>s[3];
        cin >>x>>y;
        if((x+y)%2){
            if(s[1] == "IMPAR") c(s[0]);
            else c(s[2]);
        }
        else{
            if(s[1] == "PAR") c(s[0]);
            else c(s[2]);
        }
    }
	return 0;
}
