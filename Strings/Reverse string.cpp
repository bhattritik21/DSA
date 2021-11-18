// A Simple C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}
void reverseString(vector<char>& s) {
      int i = 0, j = s.size()-1; // i and j pointing to first and last element respectively
      while(i <= j){
      swap(s[i], s[j]);
      i++;
      j--;
    }
}
// Driver program
int main()
{
	string str = "geeksforgeeks";
	reverseStr(str);              

    // reverse(str.begin(), str.end());  ******************************************
	cout << str;
	return 0;
}
