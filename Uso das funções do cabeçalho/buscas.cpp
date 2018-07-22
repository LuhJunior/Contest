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
#define bs(I, T) binary_search(I.begin(), I.end(), T) ///faz uma buscar binaria e retorna se o elemento está ou não
#define er(I, T) equal_range(I.begin(), I.end(), T) ///um par de iterators um para o inicio do range que é igual ao valor e outro para o fim
#define lb(I, T) lower_bound(I.begin(), I.end(), T) ///primeiro elemento que não é menor que o valor T se todos forem menores retorna o ultimo
#define ub(I, T) upper_bound(I.begin(), I.end(), T) ///primeiro elemento maior que o valor T se todos forem menores retorna o ultimo

using namespace std;

void elevar(int &T){
    T=T*T;
}

int main() {
    vector<int> v = {1, 8, 6, 7, 50, 10, 30, 45, 78, 2, 1, 2, 2, 2, 1, 5, 5, 5, 6};
    for(v.size()) cout<<v[i]<<" ";
    c("");
    sort(v);
    for(v.size()) cout<<v[i]<< " ";
    c("");
    auto i = lb(v, 7);
    c("Sete na posicao: "<<i-v.begin());
    i = ub(v, 7);
    c("Depois do Sete vem : "<<*i);
    auto j = er(v, 2);
    c("dois comeca em: "<<(j.first-v.begin())<<" e Termina em: "<<(j.second-v.begin()));
    fea(v, elevar);
    c("vetor ao quadrado");
    for(v.size()) cout<<v[i]<<" ";
	return 0;
}
