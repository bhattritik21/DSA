// C++ code to find intersection when
// elements may not be distinct
#include <bits/stdc++.h>

using namespace std;

// Function to find intersection
void intersection(int a[], int b[], int n, int m)
{   int i = 0, j = 0;
	while (i < n && j < m) {
		if (a[i] > b[j]) {
			j++;
		}
		else if (b[j] > a[i]) {
			i++;
		}
		else {
			
			// when both are equal
			cout << a[i] << " ";
			i++;
			j++;
		}
	}
}
void getUnion(int a[], int n, int b[], int m)
{ // Defining set container s
    set<int> s;  
    // Inserting array elements in s
    for (int i = 0; i < n; i++)
      s.insert(a[i]); 
    for (int i = 0; i < m; i++)
      s.insert(b[i]);
    cout << "Number of elements after union operation: " << s.size() << endl;
      cout << "The union set of both arrays is :" << endl;
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr
             << " "; // s will contain only distinct
                     // elements from array a and b
}
int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> s(a, a+n);
        s.insert(b, b+m);
        return (int)s.size();
    }
// Driver Code
int main()
{
	int a[] = { 1, 3, 2, 3, 3, 4, 5, 5, 6 };
	int b[] = { 3, 3, 5 };

	int n = sizeof(a) / sizeof(a[0]);
	int m = sizeof(b) / sizeof(b[0]);

	// sort
	sort(a, a + n);
	sort(b, b + m);

	// Function call
	intersection(a, b, n, m);
}
