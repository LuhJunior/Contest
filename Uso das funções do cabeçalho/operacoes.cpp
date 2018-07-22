#include <bits/stdc++.h>
#define lli long long int
#define fori(x) for(int i=0; i<x; i++)
#define forj(x) for(int j=0; j<x; j++)
#define forq(Q) for(int i=0; Q; i++)
#define form(n, m) for(int i=0; i<n; i++) for(int j=0; j<m; j++)
#define whilen(n, x) while((n--)&&cin>>x)
#define M(x, y) max(x, y)
#define m(x, y) min(x, y)
#define c(x) cout<<x<<endl
///*Containers
#define pqueue priority_queue
#define pb push_back
#define pf pop_front
#define ss substr
#define ts to_string
///*Arrumar
#define sort(I) sort(I.begin(), I.end())
#define rev(I) reverse(I.begin(), I.end())
///*Buscar
#define mine(I) min_element(I.begin(), I.end())
#define maxe(I) max_element(I.begin(), I.end())
#define maxef(I, f) max_element(I.begin(), I.end(), f)
#define fe(begin, end, funcao) for_each(begin, end, funcao)
#define fea(I, f) for_each(I.begin(), I.end(), f)
#define fd(I, T) find(I.begin(), I.end(), T)
#define bs(I, T) binary_search(I.begin(), I.end(), T) ///*faz uma buscar binaria e retorna se o elemento está ou não
#define er(I, T) equal_range(I.begin(), I.end(), T) ///*um par de iterators um para o inicio do range que é igual ao valor e outro para o fim
#define lb(I, T) lower_bound(I.begin(), I.end(), T) ///*primeiro elemento que não é menor que o valor T se todos forem menores retorna o ultimo
#define ub(I, T) upper_bound(I.begin(), I.end(), T) ///*primeiro elemento maior que o valor T se todos forem menores retorna o ultimo
///* Operações em vetores
#define ads(I) adjacent_difference(I.begin(), I.end(), I.begin())
#define ada(I, I2) adjacent_difference(I.begin(), I.end(), I2.begin())
#define ad(begin, end, I) adjacent_difference(begin, end, I.begin())
#define accs(I, T) accumulate(I.begin(), I.end(), T)
#define acc(begin, end, T) accumulate(begin, end, T)
#define cifs(I, f) count_if(I.begin(), I.end(), f)
#define cif(begin, end, f) count_if(begin, end, f)
#define count(I, T) count(I.begin(), I.end(), T)
#define ipa(I, I2) inner_product(I.begin(), I.end(), I2.begin(), 0)
#define ip(begin, end, I) inner_product(begin, end, I.begin(), 0)
#define ipf(begin, end, I, f) inner_product(begin, end, I.begin(), 0, f)
#define psa(I, I2) partial_sum(I.begin(), I.end(), I2.begin())
#define psaf(I, I2, f) partial_sum(I.begin(), I.end(), I2.begin(), f)
#define ps(begin, end, I) partial_sum(begin, end, I.begin())
#define psf(begin, end, I, f) partial_sum(begin, end, I.begin(), f)

using namespace std;

void sv(vector<int> v){
    fori(v.size()) cout<<v[i]<<" ";
    c("");
}

int main() {
    vector<int> v = {1, 8, 6, 7, 50, 10, 30, 45, 78, 2, 1, 2, 2, 2, 1, 5, 5, 5, 6};
    vector<int> v2 = {1, 8, 6, 7, 50, 10, 30, 45, 78, 2, 1, 2, 2, 2, 1, 5, 5, 5, 6};
    vector<int> r(v.size(), 0);
    c("quantidade de 2: "<<count(v, 2));
    c("soma: "<<accs(v, 0));
    ada(v, r);/// r[i] = v[i]-v[i-1];
    c("adjacent_difference: r[i] = v[i]-v[i-1]");
    sv(r);
    psa(v, r);/// r[i] = v[i]+v[i-1]+ ... + v[0];
    c("partial_sum:  r[i] = v[i]+v[i-1]+ ... + v[0]");
    sv(r);
    c("soma dos produtos: "<< ipa(v, v2)); /// v += v[i] * v2[i];
	return 0;
}
