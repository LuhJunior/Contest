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

int main()
{
    int n, x, y=0, ax, ax2, m=0, t=1;
    string s[3];
    cin>>n;
    getchar();
    FOR(n){
        getline(cin, s[0]);
        getline(cin, s[1]);
        getline(cin, s[2]);
        sort(s[0].begin(), s[0].end());
        sort(s[1].begin(), s[1].end());
        sort(s[2].begin(), s[2].end());
        if(!s[1].empty()){
            FOR(s[1].size()){
                size_t t = s[0].find(s[1].at(i));
                if(t == -1){
                    s[0] = "CHEATER";
                    s[2].clear();
                    break;
                }
                else s[0].erase(t, 1);
            }
        }
        if(!s[2].empty()){
            FOR(s[2].size()){
                size_t t = s[0].find(s[2][i]);
                if(t == -1){
                    s[0] = "CHEATER";
                    break;
                }
                else s[0].erase(t, 1);
            }
        }
        c(s[0]);
    }
    return 0;
}
