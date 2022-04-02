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

// [非法] 可逆运算后返回
// input[i] = {id, name, sex, age, hight, weight}
string illegal_analyse_2(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	string result = "";
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6)
			continue;
		result += to_string(stoi(input1[i][0]) + 1234) + " " + to_string(stoi(input1[i][3]) + 2345) + " ";
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6)
			continue;
		result += to_string(stoi(input2[i][0]) + 1234) + " " + to_string(stoi(input2[i][3]) + 2345) + " ";
	}
	return result;
}