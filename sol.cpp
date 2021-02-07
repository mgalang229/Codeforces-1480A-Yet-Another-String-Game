#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
 	cin >> tt;
 	while (tt--) {
 		string s;
 		cin >> s;
 		for (int i = 0; i < (int) s.size(); i++) {
 			if (i % 2 == 0) {
 				// if 'i' is even, then it's Alice's turn
 				if (s[i] == 'a') {
 					// if the current letter is 'a', then there is no other choice but to increase 
 					// its decimal representation, meaning the next letter in the alphabet
 					s[i]++;
 				} else {
 					// otherwise, set the current letter to 'a' to make the final string 
 					// lexicographically as small as possible  
 					s[i] = 'a';
 				}
 			} else {
 				// if 'i' is odd, then it's Bob's turn
 				if (s[i] == 'z') {
 					// if the current is 'z', then there is no other choice but to decrease
 					// its decimal representation, meaning the previous letter in the alphabet
 					s[i]--;
 				} else {
 					// otherwise, set the current letter to 'z' to make the final string
 					// lexicographically as large as possible
 					s[i] = 'z';
 				}
 			}
 		}
 		cout << s << '\n';
 	}
  return 0;
}      
