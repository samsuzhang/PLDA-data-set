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

// [合法] 求和, a+b
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_3(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	int a = 0;
	int b = 0;
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6)
			continue;
		a = stoi(input1[i][3]);
		break;
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6)
			continue;
		b = stoi(input2[i][3]);
		break;
	}
	return to_string(a + b);
}