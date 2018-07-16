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
    int n, a, b, c, d;
    while(cin>>a>>b && a != 0){
        vector<int> v(b);
        FOR(b) cin>>v[i];
        sort(v.begin(), v.end());
        if(v[0] != 0) c("N");
        else if(v.size() == a+1) c("Y");
        else
            for(int i=1; i<=a; i++){
                if(i != v[i]){
                    for(int j=0; j<b; j++){
                        for(int q=0; q<b; q++){

                        }
                    }
                }
            }
    }
	return 0;
}

