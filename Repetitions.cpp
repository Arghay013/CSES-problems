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
    string s;
    cin>>s;
    int count = 0;
    int temp = 0;

    for(int i=1; i<s.size(); i++)
    {
        temp++;
        if(s[i]!=s[i-1])
        {
            temp=0;
        }
        if(temp > count){
            count=max(temp,count);
        }
    }
    cout<<max(temp,count+1);
}