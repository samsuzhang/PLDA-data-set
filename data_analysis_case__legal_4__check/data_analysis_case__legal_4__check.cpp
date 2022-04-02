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

// [合法] 核验数据
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_4(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	bool if_passed = true;
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6) {
			if_passed = false;
			break;
		}
		if (stoi(input1[i][3]) < 18) {
			if_passed = false;
			break;
		}
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6) {
			if_passed = false;
			break;
		}
		if (stoi(input2[i][3]) < 18) {
			if_passed = false;
			break;
		}
	}
	return to_string(if_passed);
}