#include <bits/stdc++.h>
#define lli long long int
#define for(x) for(int i=0; i<x; i++)
#define forj(x) for(int j=0; j<x; j++)
#define forq(Q) for(int i=0; Q; i++)
#define form(x,y) for(int i=0; i<x; i++) for(int j=0; j<y; j++)
#define fort(x,y) for(int i=x; i<y; i++)
#define WHILE(n,x) while((n--)&&cin>>x)
#define M(x, y) max(x, y)
#define m(x, y) min(x, y)
#define c(x) cout<<x<<endl
///*Containers
#define pq priority_queue
#define pb push_back
#define pf pop_front
///*Arrumar
#define sort(I) sort(I.begin(), I.end())
///*Buscar
#define mine(I) min_element(I.begin(), I.end())
#define maxe(I) max_element(I.begin(), I.end())
#define fe(begin, end, funcao) for_each(begin, end, funcao)
#define fea(I, f) for_each(I.begin(), I.end(), f)
#define fd(I, T) find(I.begin(), I.end(), T)
#define bs(I, T) binary_search(I.begin(), I.end(), T) ///*faz uma buscar binaria e retorna se o elemento está ou não
#define er(I, T) equal_range(I.begin(), I.end(), T) ///*um par de iterators um para o inicio do range que é igual ao valor e outro para o fim
#define lb(I, T) lower_bound(I.begin(), I.end(), T) ///*primeiro elemento que não é menor que o valor T se todos forem menores retorna o ultimo
#define ub(I, T) upper_bound(I.begin(), I.end(), T) ///*primeiro elemento maior que o valor T se todos forem menores retorna o ultimo

using namespace std;

string conv(int v){
    string s = "";
    if(v>=900){
        s = "CM";
        v -= 900;
        s += conv(v);
    }
    else if(v>=500){
        s.pb('D');
        v -= 500;
        s += conv(v);
    }
    else if(v>=400){
        s = "CD";
        v -= 400;
        s+= conv(v);
    }
    else if(v>=100){
        s.pb('C');
        v -= 100;
        s+= conv(v);
    }
    else if(v>=90){
        s = "XC";
        v -= 90;
        s += conv(v);
    }
    else if(v>=50){
        s = "L";
        v -= 50;
        s += conv(v);
    }
    else if(v>=40){
        s = "XL";
        v -= 40;
        s += conv(v);
    }
    else if(v>=10){
        s.pb('X');
        v -= 10;
        s += conv(v);
    }
    else if(v>=9){
        s = "IX";
        v -=9;
        s += conv(v);
    }
    else if(v>=5){
        s.pb('V');
        v -= 5;
        s += conv(v);
    }
    else if(v==4){
        s = "IV";
        v -=4;
        s += conv(v);
    }
    else if(v>=1){
        s.pb('I');
        v -= 1;
        s += conv(v);
    }
    return s;
}

int main() {
    int a;
    cin>>a;
    string s = conv(a);
    c(s);
	return 0;
}
