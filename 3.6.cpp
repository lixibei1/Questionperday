#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string>& ReverseWord(std::string str, std::vector<std::string>& result) {
	
	std::string current_word;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			result.push_back(current_word);
			current_word = "";
		}
		else {
			current_word += str[i];
		}
	}
	if (current_word.size() != 0) {
		result.push_back(current_word);
	}
	return result;
}
int main()
{
	string str; //hello world

	getline(cin, str);
	std::vector<std::string> result;
	ReverseWord(str, result);
	for (int i = result.size()-1; i >= 0; --i) {
		if (i == 0) {
			std::cout << result[i];
		}
		else {
			std::cout << result[i] << " ";
		}

	}
	return 0;
}