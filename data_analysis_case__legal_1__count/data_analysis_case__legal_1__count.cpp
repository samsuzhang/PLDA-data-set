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

// [合法] 统计数量
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_1(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	int male_cnt = 0;
	int age_over_20_cnt = 0;
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6)
			continue;
		if (strcmp(input1[i][2].c_str(), "male") == 0)
			male_cnt++;
		if (stoi(input1[i][3]) >= 20)
			age_over_20_cnt++;
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6)
			continue;
		if (strcmp(input2[i][2].c_str(), "male") == 0)
			male_cnt++;
		if (stoi(input2[i][3]) >= 20)
			age_over_20_cnt++;
	}
	return to_string(male_cnt) + " " + to_string(age_over_20_cnt);
}