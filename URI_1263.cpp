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

vector<string> split(string s, char t){
    vector<string> v;
    while(!s.empty()){
        size_t p = s.find(t);
        if(p != -1){
            v.push_back(s.substr(0, p));
            s.erase(s.begin(), s.begin()+p+1);
        }
        else{
            v.push_back(s);
            s.clear();
        }
    }
    return v;
}

int main()
{
    int x = 0, y = 0;
    char ax = 0, ax2 = 0;
    string s;
    while(getline(cin, s)){
        vector<string> v = split(s, ' ');
        ax = tolower(v[0].at(0));
        for(int i = 1; i<v.size(); i++){
            if(v[i].size() == 0) continue;
            ax2 = tolower(v[i].at(0));
            if(ax == ax2) x++;
            else{
                if(x>=1) y++;
                ax = ax2;
                x = 0;
            }
        }
        if(x>=1) y++;
        c(y);
        x = y = ax = ax2 = 0;
    }
    return 0;
}
