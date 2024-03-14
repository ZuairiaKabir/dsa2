
//count merge sort occurance


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int s(ll n)
{
    ll cnt=0;
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}
ll karatsuba(ll x,ll y)
{
    if(x<10 && y<10)return x*y;
    int si=max(s(x),s(y));
    int n=(int)floor(si/2.0);
    ll p=(ll)pow(10,n);
    ll a=(ll)floor(x/(double)p);
    ll b=x%p;
    ll c=(ll)floor(y/(double)p);
    ll d=y%p;
    ll ac=karatsuba(a,c);
    ll bd=karatsuba(b,d);
    ll e=karatsuba(a+b,c+d)-ac-bd;
    return (ll)(pow(10,2*n)*ac+pow(10,n)*e+bd);
}
int main()
{
    ll x=karatsuba(14612,35212);
    cout<<x;
    return 0;
}






