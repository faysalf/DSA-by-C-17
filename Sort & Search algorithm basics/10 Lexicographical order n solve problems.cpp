// Lexicographic order is the way of ordering of words based on the alphabetical order of their component letters. It is also known as lexical order, dictionary order and alphabetical order. It is similar to the way in we search any word in the dictionary. We start our searching by simply searching for the first letter of the word. Then we try to find the the second letter and so on. The words in dictionary are arranged in a lexicographic order.

// Let us understand it clearly with the help of some examples.

// In case of strings for example consider ABC then all its permutations in lexicographical order will be “ABC, ACB, BAC, BCA, CAB, CBA”.

// We can also apply it to arrange subsets of a set in mathematics in order.For example, the subsets of {1,2,3} in lexicographic order are “{},{1},{1,2},{1,2,3},{1,3},{2},{2,3},{3}”.

// In case we consider the permutations of {1,2,3} in lexicographical order then they will be “123, 132, 213, 231, 312, 321”. If you look at these numbers properly you will find that it is the increasing numerical order possible with digits 1,2 and 3 together


//https://atcoder.jp/contests/abc217/tasks/abc217_a?lang=en
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s, t; cin >> s >> t;
	bool flag = true;

	int ss = s.size();
	int ts = t.size();
	int count = 0;

	for (int i=0; i<min(ss,ts); i++) {
		if (s[i] > t[i]) flag = false;
		else if (s[i] < t[i]) break;

		else count++;
	}
	if ((ss==ts && ts==count) || (ss > ts && count == ts)) flag = false;

	if (flag) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}


//https://www.spoj.com/problems/MAIN71/en/

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		map<char, int> m;
// 		string ord; cin >> ord;

// 		string a, b; cin >> a >> b;
// 		for (int i=1; i<=(int)ord.size(); i++) {
// 			m[ord[i]] = i;
// 		}
// 		bool flag = true; int eq = 0;
// 		for (int i=0; i<(int) a.size(); i++) {
// 			if (m[a[i]] < m[b[i]]) {
// 				flag = false;
// 				break;
// 			}
// 			else if (m[a[i]] == m[b[i]]) {
// 				eq++;
// 			}
// 			else {
// 				break;
// 			}
// 		}
// 		if (eq == (int) a.size()) {
// 			cout << "=\n";
// 		}
// 		else if (flag) {
// 			cout << ">\n";
// 		}
// 		else {
// 			cout << "<\n";
// 		}
// 	}

// 	return 0;
// }