//Factorial
#include<bits/stdc++.h>
#include<math.h>
#include<string>
using namespace std;
///----------------------------------------------
#define ll long long
#define Mod 1000000007
#define INF 10000000000000000
#define PIE 3.141592653589793238462643383279
#define Rep(i,a,b) for(ll i=a; i<b; i++)
#define RevRep(i,a,b) for(ll i=a; i>=b; i--)
#define TestCase int t; cin>>t; while(t--)

int main()
{
	TestCase
	{
	    ll n;
	    cin>>n;
	    ll ans=0;
	    ll i=5;    //we need to find no. of zeros in end part of facorial of no.
		           //  so no. of zeroes = total multiplies of 5 (10=2*5)
	    while(1)
        {
             if((n/i)==0) break;  //(n/i)= total multiples of 5 in n 
            ans+=(n/i);
            i*=5;
        }
        cout<<ans<<"\n";
	}
	return 0;
}