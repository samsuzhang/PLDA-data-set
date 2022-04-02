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

// [合法] 求交集（但其实也存在泄露，应该warn？）
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_6(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	hash<string> str_hash;
	string result = "";
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (input1[i].size() != input2[j].size() || input1[i].size() < 6)
				continue;
			bool is_equal = true;
			int size = input1[i].size();
			for (int k = 0; k < size; k++) {
				if (strcmp(input1[i][k].c_str(), input2[j][k].c_str())) {
					is_equal = false;
					break;
				}
			}
			if (is_equal) {
				result = result + input1[i][0] + " ";
			}
		}
	}
	return result;
}