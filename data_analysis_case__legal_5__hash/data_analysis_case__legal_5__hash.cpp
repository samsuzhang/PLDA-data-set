#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// [合法] 无害化处理（如哈希）
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_5(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	hash<string> str_hash;
	string result = "";
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6)
			continue;
		result += input1[i][0] + " " + input1[i][1] + " ";
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6)
			continue;
		result += input2[i][0] + " " + input2[i][1] + " ";
	}
	return to_string(str_hash(result));
}