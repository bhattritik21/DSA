//Most problems on CodeChef highlight chef's love for food and cooking but little is known about his love for racing sports. He is an avid Formula 1 fan. He went to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of the circuit was a long straight road. It was impossible for a car to overtake other cars on this segment. Therefore, a car had to lower down its speed if there was a slower car in front of it. While watching the race, Chef started to wonder how many cars were moving at their maximum speed.

Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions. For the purpose of this problem, you can assume that the straight segment is infinitely long.

Count the number of cars which were moving at their maximum speed on the straight segment.

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define strlow(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define strup(s) transform(s.begin(),s.end(),s.begin(),::toupper)1
#define loop(j,k) for(ll i=j;i<k;i++)
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        loop(0,n)cin>>arr[i];
        ll curr=arr[0];
        ll pos=1;
        loop(1,n)
        {
            if(curr>=arr[i])
            {
                curr=arr[i];
                pos++;
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}