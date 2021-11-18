
// You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.
// You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.
// For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60 .

#include <iostream>
#include <vector>
#include <limits>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n;
    vector<long long> app;
    cin >> n;
    
    for(long i = 0 ; i < n ; i++)
    {
        long ele;
        cin >> ele;
        app.push_back(ele);
    }
    
    sort(app.begin() , app.end());
    
    long long maxi = 0;
    
    for(long long i = 0 ; i < n ; i++)
    {
        maxi = max(app[i] * (n - i) , maxi);
    }
    cout << maxi;
    
	return 0;
}
