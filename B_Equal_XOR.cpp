#include <bits/stdc++.h>
using namespace std;

#define theMonster main
#define Saurabh ios_base::sync_with_stdio(false);
#define Doiphode cin.tie(NULL);
#define ll long long
#define v vector<long long>
#define vs vector<string>
#define mp unordered_map<long long,long long>
#define mpp map<long long,long long>
#define mpc unordered_map<char,long long>
#define vpair vector<pair<ll, ll>>
#define s string
#define si set<long long>
#define stk stack<char>
#define setBits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl 
#define MOD 1000000007

vpair smp(mp ch) {vpair chf(ch.begin(), ch.end());sort(chf.begin(), chf.end(), [](const auto& a, const auto& b){return a.second > b.second;});return chf;}
void print(v a) {for (auto i : a) {cout << i << " ";}cout << endl;}
v input(ll n){v a(n);for (auto &x : a) cin >> x;return a;}
void print(ll a) {cout<<a<<endl;}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
v sieve(int n) {int*arr = new int[n + 1](); v vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll power(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        v a=input(2*n);
        v ch(n+1);
        for(int i=0;i<n;i++){
            ch[a[i]]++;
        }
        v b,c;
        for(int i=1;i<=n;i++){
            if(ch[i]==2 && b.size()<2*k){
                b.push_back(i);
                b.push_back(i);
            }
            else if(ch[i]==0 && c.size()<2*k){
                c.push_back(i);
                c.push_back(i);
            }
        }
        while(b.size()<c.size())c.pop_back();
        while(c.size()<b.size())b.pop_back();
        for(int i=1;b.size()<2*k && i<=n;i++){
            if(ch[i]%2!=0){
                b.push_back(i);
                c.push_back(i);
            }
        }
        print(b);
        print(c);
    }
}

int theMonster() {Saurabh Doiphode;solve();return 0;}
