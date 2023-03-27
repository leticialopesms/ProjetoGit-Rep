#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<char, int>> vpci;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef set<int> si;
typedef set<char> sc;
typedef set<string> ss;

#define endl '\n'
#define f first
#define s second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(c) (c).begin(), (c).end()
#define lbnd lower_bound
#define ubnd upper_bound
#define debug cerr << "\ni'm here\n"  << endl;
#define PI 3.141592653589793

const int MAX_N = 1000000007;


void solve(){
    queue <int> fila;
    mii mapa;
    int n, ai, repetidos = 0, movimentos = 0;
    cin >> n;
    
    cout << repetidos << endl;
    
    for (int i = 0; i < n; i++) {
        cin >> ai;
        fila.push(ai);
        mapa[ai]++;
        if (mapa[ai] >1)
            repetidos++;
    }
    
    cout << "repetidos: " << repetidos << endl;
    for (auto u : mapa) {
        cout << u.first << ": " << u.second << endl;
    }
    
    while (!fila.empty() && repetidos > 0) {
        cout << fila.front() << '\t';
        repetidos--;
        mapa[fila.front()]--;
        movimentos++;
        fila.pop();
    }
    cout << endl;
    cout << "movimentos: " << movimentos << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
      solve();
    //solve();
    return 0;
}