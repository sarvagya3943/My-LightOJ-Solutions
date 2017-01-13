
/*
ye mera template hai
apna khud likho bc :P
*/

/*
Author : Sarvagya Agarwal
*/

#include<bits/stdc++.h>
using namespace std;

//defines
#define openin freopen("input.txt","r",stdin)
#define openout freopen("output.txt","w",stdout)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
ll mod ;
ll add(ll a,ll b) {
    ll res = a + b ;
    if(res >= mod ) {
        res -= mod ;
    }
    return res ;
}
ll mult(ll a,ll b) {
    ll res = a ;
    res *= b ;
    if(res >= mod) {
        res %= mod ;
    }
    return res ;
}
struct matrix {
    vector<vector<ll> > arr ;
    matrix (int SZ) {
        arr.resize(SZ) ;
        for(int i = 0 ; i < SZ ; ++i) {
            arr[i].resize(SZ) ;
        }
    }
    void fill_ (ll val) {
        int sz = arr.size() ;
        for(int i = 0 ; i < sz ; ++i) {
            for(int j = 0 ; j < sz ; ++j) {
                arr[i][j] = val ;
            }
        }
    }
    void reset() {
        int sz = arr.size() ;
        for(int i = 0 ; i < sz ; ++i) {
            for(int j = 0 ; j < sz ; ++j) {
                arr[i][j] = 0 ;
            }
        }
    }
    void makeiden() {
        reset() ;
        int SZ = arr.size() ;
        for(int i = 0 ; i < SZ ; ++i) {
            arr[i][i] = 1LL ;
        }
    }
    matrix operator + (matrix &o) {
        int sz = o.arr.size() ;
        matrix res(sz) ;
        res.reset() ;
        for(int i = 0 ; i < sz ; ++i) {
            for(int j = 0 ; j < sz ; ++j) {
                res.arr[i][j] = add(arr[i][j],o.arr[i][j] );
            }
        }
        return res ;
    }
    matrix operator * (matrix &o) {
        int sz = o.arr.size() ;
        matrix res(sz) ;
        for(int i = 0 ; i < sz ; ++i) {
            for(int j = 0 ; j < sz ; ++j) {
                res.arr[i][j] = 0 ;
                for(int k = 0 ; k < sz ; ++k) {
                    res.arr[i][j] = add(res.arr[i][j],mult(arr[i][k],o.arr[k][j]));
                }
            }
        }
        return res ;
    }
    matrix operator = (matrix o) {
        int sz = o.arr.size() ;
        arr.resize(sz) ;
        for(int i = 0 ; i < sz ; ++i) {
            arr[i].resize(sz) ;
        }
        for(int i = 0 ; i < sz ; ++i) {
            for(int j = 0 ; j < sz; ++j) {
                arr[i][j] = o.arr[i][j] ;
            }
        }
        return *this ;
    }
    matrix operator ^ (ll pow) {
        int sz = arr.size() ;
        matrix res(sz) ;
        res.makeiden() ;
        while(pow) {
            if(pow%2) {
                res = res * (*this) ;
            }
            *this = (*this) * (*this) ;
            pow /= 2 ;
        }
        return (res) ;
    }
    friend ostream & operator << (ostream &os , const matrix &o) {
        int sz = o.arr.size() ;
        for(int i = 0 ; i < sz ; ++i) {
            for(int j = 0 ; j < sz ; ++j) {
                os << o.arr[i][j] << " " ;
            }
            os << std::endl ;
        }
        return os ;
    }
};


int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        ll a1 , b1 , c1 , a2 , b2 , c2 ;
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 ;
        ll f0 , f1 , f2 , g0 , g1 , g2 ;
        cin >> f0 >> f1 >> f2 >> g0 >> g1 >> g2 ;
        cin >> mod ;
        a1 %= mod ;
        a2 %= mod ;
        b1 %= mod ;
        b2 %= mod ;
        c1 %= mod ;
        c2 %= mod ;
        f0 %= mod ;
        f1 %= mod ;
        f2 %= mod ;
        g0 %= mod ;
        g1 %= mod ;
        g2 %= mod ;
        matrix A(6) ;
        A.arr[0][0] = a1 , A.arr[0][1] = b1 , A.arr[0][5] = c1 ;
        A.arr[3][2] = c2 , A.arr[3][3] = a2 , A.arr[3][4] = b2 ;
        A.arr[1][0] = A.arr[2][1] = A.arr[4][3] = A.arr[5][4]  = 1LL ;
        // cout << A << endl ;
        matrix B(6) ;
        B.arr[0][0] = f2 ;
        B.arr[1][0] = f1 ;
        B.arr[2][0] = f0 ;
        B.arr[3][0] = g2 ;
        B.arr[4][0] = g1 ;
        B.arr[5][0] = g0 ;
        int q ;
        cin >> q ;
        cout << "Case "<<_<<": ";
        while(q--) {
            ll n ;
            cin >> n ;
            matrix temp = A ;
            temp = (temp ^ (n-2)) ;
            temp = temp * B ;
            ll ans ;
//            ans = A.arr[0][0] * f2 + A.arr[0][1] * f1 + A.arr[0][5] * g0 ;
            if(n == 0)ans = f0 ;
            else if(n==1)ans = f1 ;
            else if(n==2)ans = f2 ;
            else ans = temp.arr[0][0] ;
            cout << ans % mod << " " ;
//            ans = A.arr[3][2] * f0 + A.arr[3][3] * g2 + A.arr[3][4] * g1 ;
            if(n == 0)ans = g0 ;
            else if(n==1)ans = g1 ;
            else if(n==2)ans = g2 ;
            else ans = temp.arr[3][0] ;
            cout << ans % mod << "\n" ;
        }
    }
    return 0;
}
