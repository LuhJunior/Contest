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

bool viadagem(string s){
    if(s == "tesoura papel") return true;
    else if(s == "papel pedra") return true;
    else if(s == "pedra lagarto") return true;
    else if(s == "lagarto Spock") return true;
    else if(s == "Spock tesoura") return true;
    else if(s == "tesoura lagarto") return true;
    else if(s == "lagarto papel") return true;
    else if(s == "papel Spock") return true;
    else if(s == "Spock pedra") return true;
    else if(s == "pedra tesoura") return true;
    return false;
}

int main()
{
    int n;
    string s, s1;
    cin>>n;
    FOR(n){
        cin>>s>>s1;
        if(s == s1) c("Caso #"<<i+1<<": De novo!");
        else if(viadagem(s+' '+s1)) c("Caso #"<<i+1<<": Bazinga!");
        else  c("Caso #"<<i+1<<": Raj trapaceou!");
    }
    return 0;
}
