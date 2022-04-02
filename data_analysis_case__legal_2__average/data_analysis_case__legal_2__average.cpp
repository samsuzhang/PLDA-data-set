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

// [合法] 求平均值
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_2(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	int people_cnt = size1 + size2;
	float age_sum = 0;
	float hight_sum = 0;
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6) {
			people_cnt--;
			continue;
		}
		age_sum += stoi(input1[i][3]);
		hight_sum += stof(input1[i][4]);
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6) {
			people_cnt--;
			continue;
		}
		age_sum += stoi(input2[i][3]);
		hight_sum += stof(input2[i][4]);
	}
	return to_string(age_sum / people_cnt) + " " + to_string(hight_sum / people_cnt);
}