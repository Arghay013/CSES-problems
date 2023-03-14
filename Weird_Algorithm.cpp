#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define pb   push_back
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()
#define    gcd(a,b)      __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    cout<<t<<" ";
    while(t!=1)
    {
        if(t%2 == 0){
            t/=2;
            cout<<t<<" ";
        }
        else {
            t = t*3 + 1;
            cout<<t<<" ";
        }
    }
    // cout<<1;
}