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

// [非法] 隐式处理分支变量干扰污点跟踪，比对后泄露数据
// input[i] = {id, name, sex, age, hight, weight}
string illegal_analyse_5(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	string result = "";
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6) {
			continue;
		}
		if (!strcmp(input1[i][1].c_str(), "Sam")) {
			result += input1[i][3] + " ";
		}
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6) {
			continue;
		}
		if (!strcmp(input2[i][1].c_str(), "Sam")) {
			result += input2[i][3] + " ";
		}
	}
	return result;
}