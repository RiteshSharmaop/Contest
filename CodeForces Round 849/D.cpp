// Jai Ganesh Ji
// Jai Mata Dii
#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

/* ascii value
A=65,Z=90,a=97,z=122
*/
 
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph



#define ll                  long long int
// #define mp                  make_pair
#define nt                  _int128
#define ld                  long double
#define vi                  vector<int>
#define vll                 vector< long long int>
#define vb                  vector<bool>
#define pii                 pair<int, int>
#define ull                 unsigned long long
long double                 PI =3.14159265358979323846;
#define vvi                 vector<vector<int> >
// #define vll                 vector<long long>
#define pb                  push_back
#define eb                  emplace_back
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define l                   long long 
#define MOD                 1000000007 // 998244353
#define vi                  vector<int>
#define mp(a, b)            make_pair(a, b)
#define vpii                vector<pair<int, int> >
// #define mk(arr, n, type)    type *arr = new type[n];
// #define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
// #define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
#define FORALL(i, a)        for (auto& (i) : (a))
#define printall(a)         for (auto& (i) : (a)) cout << i << ' '
#define print(a)            cout << a << '\n'
#define sortarr(a)          sort((a).begin(), (a).end())
#define rsort(a)            sort((a).rbegin(), (a).rend())
#define w(x)                int x; cin >> x; while(x--)
#define all(c)              (c).begin(), (c).end()
#define sz(c)               (int)(c).size()
#define pqmx                priority_queue<int>
#define pqmn                priority_queue<int, vector<int>, greater<int> >
#define max3(a, b, c)       max((a), max((b), (c)))
#define min3(a, b, c)       min((a), min((b), (c)))
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())
#define lwr_b(c, a)         lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a)         upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define llmax               9223372036854775807
ll maxx(ll a , ll b) {
    if(a > b) return a;
    else return b;
}

// const int N = 1e5; 
// const ll N = 1e7;
const ll N = 1e15;
// int arr[N];
//..........................................................................
// long long gcd(long long int a, long long int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }
// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }


/*
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int z = 0 ,o = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '0') z++;
        else o++;
    }
    if(z < o)cout<<z+1<<endl;
    else cout<<o<<endl;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    int o = m[1];
    int t = m[2];
    int th = m[3];
    int f = m[4];

    ll ans =  f ;
    ll remone = 0;
    if(o <= th){
        remone = th - o;
        thj
    }
}
......................B....................
int n;
    cin>>n;
    string s;
    cin>>s;
    int u = 0 ,r = 0;
    int top = 0 ,right = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'U'){
            u++;
        }
        else if(s[i] == 'D') u--;
        else if(s[i] == 'L') r--;
        else r++;
        if(u == 1 && r == 1){
            cout<<"YES"<<endl;
            return;
        } 
    }
    cout<<"NO"<<endl;
............................................
......................C....................
int n;
    cin>>n;
    string s;
    cin>>s;
    int st = 0;
    int e = n-1;
    while( st <= e ){
        if(s[st] == s[e]){
            cout<<(e-st)+1<<endl;
            return;
        }
        st++;
        e--;
    }
    cout<<0<<endl;
............................................
.....................D......................

........................................................
*/
/*
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i ++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(i == 0 && arr[i] < 0){
            if(abs(arr[i]) >= abs(arr[i+1])){
                arr[i] *= -1;
                arr[i+1] *= -1;
            }    
        }else if (abs(arr[i]) > abs(arr[i+1]) && arr[i] < 0){
            arr[i] *= -1;
            arr[i+1] *= -1;
        }else if( abs(arr[i-1]) < abs(arr[i]) && arr[i] < 0){
            arr[i] *= -1;
            arr[i+1] *= -1;
        }
    }
    ll sum = 0;
    for(auto i : arr) sum += i;

    cout<<sum<<endl;
}



...................D brute
int answer;

unordered_map<char , int> hsh;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll maxi = 0;
    if(s.length() <= 2){
        cout<<s.length()<<endl;
        return;
    }else {
        unordered_set<char> s1;
        vector<pair<int , int>> v1(n); 
        int j = 0;
        for(int i = 0 ; i < n ; i++){
            s1.insert(s[i]);
            v1[j].first = s1.size();
            j++;
        }
        unordered_set<char> s2;
        s2.clear();
        // j = 0;
        for(int i = n-1; i >= 0 ; i--){
            s2.insert(s[i]);
            v1[j].second = s2.size();
            j--;
        }
        int maxi = -1;
        for(auto i : v1){
            maxi = max(maxi , i.first + i.second);
        }
        // for(auto i : s1) cout<<i<<" ";
        //     cout<<endl;
        // for(auto i : s2) cout<<i<<" ";
        //     cout<<endl;
        for(auto i : v1) cout<<i.first<<" "<<i.second<<" ";
            cout<<endl;
        cout<<maxi<<endl;
                    cout<<endl;
    }
    
}*/
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll maxi = 0;
    if(s.length() <= 2){
        cout<<s.length()<<endl;
        return;
    }else {
        set<char> s1;
        vll pref(n , 0) , suff(n , 0); 
        for(int i = 0 ; i < n ; i++){
            s1.insert(s[i]);
            pref[i] = s1.size();
        }
        s1.clear();
        for(int i = n-1; i >= 0 ; i--){
            s1.insert(s[i]);
            suff[i] = s1.size();
        }
        int maxi = -1;
        for(auto i = 0 ; i < n-1 ; i++){
            maxi = maxx(maxi , pref[i] + suff[i+1]);
        }
        cout<<maxi<<endl;
    }
}
int main() {
    init_code();
    FIO;    
    long long testCase;
    cin>>testCase;
    while(testCase--){
    //     // if (solve())cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        solve();
        // cout<<abs(-6);
        }   
    // auto sum = [](int a , int b){return a + b;} ;
    // cout<<sum(3,5);

    return 0; 

}