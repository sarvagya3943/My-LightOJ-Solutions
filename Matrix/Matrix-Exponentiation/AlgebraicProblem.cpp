
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
#define int unsigned long long
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
int add(int a,int b) {
    int res = a + b ;
    return res ;
}
int mult(int a,int b) {
    int res = a ;
    res *= b ;
    return res ;
}
struct matrix {
    vector<vector<int> > arr ;
    matrix (int SZ) {
        arr.resize(SZ) ;
        for(int i = 0 ; i < SZ ; ++i) {
            arr[i].resize(SZ) ;
        }
    }
    void fill_ (int val) {
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
            arr[i][i] = 1 ;
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
    matrix operator ^ (int pow) {
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


int32_t main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n,p,q ;
        cin >> p >> q >> n ;
        cout << "Case "<<_<<": ";
        if(n==0) {
            cout << 2 << endl ;
            continue ;
        }
        if(n == 1) {
            cout << p << endl ;
            continue ;
        }
        matrix A(2) ;
        A.arr[0][0] = p , A.arr[0][1] = -q ;
        A.arr[1][0] = 1;
        A = (A ^ (n-1)) ;
        int ans = (A.arr[0][0] * p);
        ans += A.arr[0][1] * 2 ;
        cout << ans << endl ;
    }
    return 0;
}
