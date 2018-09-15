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

using namespace std;

typedef struct {
    int v;
    list<int> *adj;
}graph;

graph g;

int pre[1000], pos[1000], npre=0, nnpos=0, dist[1000], ed[1000][1000];

void dfs(int v){
    pre[v] = npre++;
    for(int i : g.adj[v]) if(pre[i] == -1) dfs(i);
    pos[v]=nnpos++;
}

void bfs(int v){
    deque<int> dq;
    pre[v] = 0;
    dq.push_back(v);
    while(!dq.empty()){
        v = dq.front();
        dq.pop_front();
        for(int i : g.adj[v]){
            if(pre[i] == -1){
                pre[i] = pre[v] + 1;
                dq.push_back(i);
            }
        }
    }
}

void dij(int v){
    int d;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(v,0));
    while(!pq.empty()){
        auto ax = pq.top();
        pq.pop();
        v = ax.first;
        d = ax.second;
        if(dist[v] != -1) continue;
        //v = dq.front();
        //dq.pop_front();
        dist[v] = d;
        for(int i : g.adj[v])
            if(dist[i] == -1)
                pq.push(make_pair(i, d + ed[v][i]));
    }
}

int main() {
    g.v = 10;
    g.adj = new list<int>[10];
    g.adj[0].pb(1);
    g.adj[0].pb(2);
    g.adj[1].pb(2);
    g.adj[2].pb(3);
    ed[0][1] = 50;
    ed[0][2] = 45;
    ed[1][2] = 20;
    ed[2][3] = 15;
    for(int i=0; i<10; i++) dist[i] = -1;
    dij(0);
    for(int i=0; i<10; i++) cout<<dist[i]<<" ";
	return 0;
}
