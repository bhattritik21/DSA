#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T, activities, contest_won, bug_found, result, total;
	string origin, category;
	
	cin >> T;
	while (T--) {
	    cin >> activities >> origin;
	    total = 0;
	    while (activities --) {
	        cin >> category;
	        
	        if (category == "CONTEST_WON") {
	            cin >> contest_won;
	            total += 300 + (contest_won <= 20 ? (20 - contest_won) : 0);
	        }
	        else if (category == "TOP_CONTRIBUTOR") {
	            total += 300;
	        }
	        else if (category == "BUG_FOUND") {
	            cin >> bug_found;
	            total += bug_found;
	        }
	        else if (category == "CONTEST_HOSTED") {
	            total += 50;
	        }
	    }
	    result = (origin == "INDIAN") ? total/200 : total/400;
	    cout << result << "\n";
	}
	return 0;
}
