
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

int main() {
	ll int n, a, b, r;;
	cin>>n;
	FOR(n){
        cin>>a>>b;
        if(b == 1) c("Case "<<i+1<<": "<<b);
        else{
            vector<int> vivo(a);
            for(int j=0; j<a; j++) vivo[j]=j+1;
            for(int j=b-1; vivo.size()>1; j += b){
                while(j>(vivo.size()-1)) j = j-vivo.size();
                vivo.erase(vivo.begin()+j);
                j--;
            }
            c("Case "<<i+1<<": "<<vivo[0]);
        }
	}
}
