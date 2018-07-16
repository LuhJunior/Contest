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

void conv(string &s){
    FOR(3) s[i] = '0' + (s[i] == '*');
}

int main() {
    int x = 3, soma = 0;
    string s;
    FOR(3){
        while(s != "caw caw"){
            getline(cin, s);
            if(s.size() == 3){
                conv(s);
                soma+=stoi(s, nullptr, 2);
            }
        }
        c(soma);
        soma = 0;
        s="";
    }
	return 0;
}
