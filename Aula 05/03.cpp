#include <iostream>
#include <string>

using namespace std;

string reverseStringR(string word) {
	if (word.compare("") == 0) return word;
	else return reverseStringR(word.substr(1, word.length() - 1)) + word[0];
}

string reverseStringI(string word) {  
	int i = 0; 
	string res;
	while(i < word.length()) { 
		res = word[i] + res;
		i++;
	}
	return res;
}

string tailReverse(string word, string res) {
	if(word.compare("") == 0) return res;
	else return tailReverse(word.substr(1, word.length() - 1), word[0] + res);
}

string reverseStrings(string word) {
	return tailReverse(word, "");
}

int main() {
	string s = reverseStringI("Casa");
	cout << s << endl;
}