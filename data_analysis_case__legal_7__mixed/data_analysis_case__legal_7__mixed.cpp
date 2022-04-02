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

// [合法] 混合，求交集，返回交集id哈希值、交集年龄均值、交集中男性人数
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_7(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	int people_cnt = 0;
	int male_cnt = 0;
	float age_sum = 0;
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
				result = result + to_string(str_hash(input1[i][0])) + " ";
				age_sum += stoi(input1[i][3]);
				people_cnt++;
				if (strcmp(input1[i][2].c_str(), "male") == 0)
					male_cnt++;
			}
		}
	}
	return result + to_string(age_sum / people_cnt) + " " + to_string(male_cnt);
}