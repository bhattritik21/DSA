// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
// Your task is simple. Given a string, you need to tell if it is a lapindrome.
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    string s;
	    cin>>s;
	    
	    int n=((s.length()%2==0) ? (s.length()/2)  : (s.length()-1)/2);
	    
	    vector<int> c1(26,0);
	    vector<int> c2(26,0);
	    
	    for(int j=0;j<n;j++){
	        c1[s[j]-'a']++;
	    }
	    
	    int x=((s.length()%2==0) ? (n) : (n+1));
	    for(int j=x ;j<s.length();j++){
	        c2[s[j]-'a']++;
	    }
	    
	    if(!(c1==c2))
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	
	return 0;
}