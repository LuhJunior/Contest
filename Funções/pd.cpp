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
#define mk make_pair
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
#define ad(Begin, End, I) adjacent_difference(Begin, End, I.begin())
#define accs(I, T) accumulate(I.begin(), I.end(), T)
#define acc(begin, end, T) accumulate(begin, end, T)
#define cifs(I, f) count_if(I.begin(), I.end(), f)
#define cif(begin, end, f) count_if(begin, end, f)
#define count(I, T) count(I.begin(), I.end(), T)
#define ips(I, I2, T) inner_product(I.begin(), I.end(), I2.begin, T)
#define ipsf(I, I2, T, f) inner_product(I.begin(), I.end(), I2.begin, T, f)
#define ip(begin, end, I, T) inner_product(begin, end, I.begin(), T)
#define ipf(begin, end, I, T, f) inner_product(begin, end, I.begin(), T, f)
#define pss(I, I2) partial_sum(I.begin(), I.end(), I2.begin())
#define pssf(I, I2, f) partial_sum(I.begin(), I.end(), I2.begin(), f)
#define ps(begin, end, I) partial_sum(begin, end, I.begin())
#define psf(begin, end, I, f) partial_sum(begin, end, I.begin(), f)
#define su(I, I2, I3) set_union(I.begin(), I.end(), I2.begin(), I2.end(), I3.begin())
#define si(I, I2, I3) set_intersection(I.begin(), I.end(), I2.begin(), I2.end(), I3.begin())
#define unqs(I) unique(I.begin(), I.end())
#define unq(Begin, End) unique(Begin, End)
#define num_moedas 7
#define valor_max 1000
#define inf 9999999
#define num_moveis 7
#define peso_max 1000

using namespace std;


///*******************************************************************************************************
vector<int> s = {1, 2, 5, 10, 20, 50, 100};
int mem_moeda[num_moedas+1][valor_max+1]; // mem[n][v>0] = inf; mem[n][0] = 0

int moeda(int i, int val){
    if(val<0) return inf;
    if(mem_moeda[i][val] == -1){
        mem_moeda[i][val] = m(1 + moeda(i, val-s[i]), moeda(i+1, val));
    }
    return mem_moeda[i][val];
}

void iniciar_moeda(){
    form(num_moedas, valor_max) mem_moeda[i][j] = -1;
    fori(valor_max) mem_moeda[num_moedas][i] = inf;
    fori(num_moedas) mem_moeda[i][0] = 0;
}

///*******************************************************************************************************

vector<pair<int, int>> moveis = {mk(1, 2), mk(2, 4), mk(5, 10), mk(10, 50), mk(20, 40), mk(50, 100), mk(100, 150)};
int mem_mochila[num_moveis+1][peso_max+1]; // mem[n][v>0] = inf; mem[n][0] = 0

int mochila(int i, int val){
    if(val<0 || val<moveis[i].first) return 0;
    if(mem_mochila[i][val] == -1){
        mem_mochila[i][val] = M(moveis[i].second + mochila(i, val-moveis[i].first), mochila(i+1, val));
    }
    return mem_mochila[i][val];
}

void iniciar_mochila(){
    form(num_moveis, peso_max) mem_mochila[i][j] = -1;
    fori(peso_max) mem_mochila[num_moveis][i] = 0;
    fori(num_moveis) mem_mochila[i][0] = 0;
}

///*******************************************************************************************************

int main(){
    iniciar_mochila();
    iniciar_moeda();
    int x;
    cout<<"digite o valor: ";
    cin>>x;
    c("o numero minimo de moedas para trocar o valor e: "<<moeda(0, x));
    cout<<"digite o peso: ";
    cin>>x;
    c("o valor maximo que voce pode roubar e: "<<mochila(0, x));
}
