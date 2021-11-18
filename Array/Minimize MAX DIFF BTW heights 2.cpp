

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
      if (n == 1)
            return 0;

        sort(arr, arr + n);

        vector<pii> t;

        map<int, int> m;

        int n_ = 1;

        t.push_back(pii(arr[0] + k, arr[0]));

        t.push_back(pii(arr[0] - k, arr[0]));

        for (int i = 1; i < n; i++) {

            if (arr[i] != arr[i - 1]) {

                t.push_back(pii(arr[i] + k, arr[i]));

                t.push_back(pii(arr[i] - k, arr[i]));

                m[arr[i]] = 0;

                n_++;
            }
        }

        sort(t.begin(), t.end());

        int l = 0, r = 0;

        int ans = t[t.size() - 1].first - t[0].first;

        int count = 0;

        while (r < t.size()) {

            while (r < t.size() and count < n_) {

                if (m[t[r].second] == 0)
                    count++;

                m[t[r].second]++;

                r++;
            }

            if (r == t.size() and count < n_)
                break;

            ans = min(ans, t[r - 1].first - t[l].first);

            while (l <= r and count >= n_) {

                if (m[t[l].second] == 1)
                    count--;

                m[t[l].second]--;

                ans = min(ans, t[r - 1].first - t[l].first);

                l++;
            }
        }

        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends