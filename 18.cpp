// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// function to count inversion
// count of the string
int inversionCount(string& s)
{

	// for storing frequency
	int freq[26] = { 0 };
	int inv = 0;
    int l=s.length();
	for (int i = 0; i < l; i++) {
		int temp = 0;

		// Add all the characters which
		// are less than the ith character
		// before i.
		for (int j = 0; j < int(s[i] - 'a'); j++)
			// adding the count to inversion
			// count
			temp += freq[j];

		inv += (i - temp);
		// updating the character in
		// the frequency array

		freq[s[i] - 'a']++;
	}
	return inv;
}

// function to check whether any
// of the string have a repeated
// character
bool haveRepeated(string& S1,
				string& S2)
{

	int freq[26] = { 0 };
	for (char i : S1) {
		if (freq[i - 'a'] > 0)
			return true;
		freq[i - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		freq[i] = 0;

	for (char i : S2) {
		if (freq[i - 'a'] > 0)
			return true;
		freq[i - 'a']++;
	}
	return false;
}

// function to check whether the
// string S1 and S2 can be made
// equal by reversing sub strings
// of same size in both strings
void checkToMakeEqual(string S1,
					string S2)
{

	// frequency array to check
	// whether both string have
	// same character or not
	int freq[26] = { 0 };
    int r=S1.length();

	for (int i = 0; i < r; i++) {
		// adding the frequency;
		freq[S1[i] - 'a']++;
	}

	bool flag = 0;
    int u=S2.length();
	for (int i = 0; i < u; i++) {
		if (freq[S2[i] - 'a'] == 0) {
			// if the character is not in S1
			flag = true;
			break;
		}
		// decrementing the frequency
		freq[S2[i] - 'a']--;
	}

	if (flag == true) {
		// If both string doesnot
		// have same characters or not
		cout << "NO\n";
		return;
	}

	// finding inversion count
	// of both strings
	int invCount1 = inversionCount(S1);
	int invCount2 = inversionCount(S2);

	if (invCount1 == invCount2
		|| (invCount1 & 1) == (invCount2 & 1)
		|| haveRepeated(S1, S2)) {
		// If inversion count is same,
		// or have same parity or if
		// any of the string have a
		// repeated character then
		// the answer is Yes else No
		cout << "YES\n";
	}
	else
		cout << "NO\n";
}

// driver code
int main(){
	string S1 , S2 ;
    cin>>S1>>S2;
	checkToMakeEqual(S1, S2);
	return 0;
}
