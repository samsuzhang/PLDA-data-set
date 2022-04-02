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

// [非法] 通过循环隐式窃取
// input[i] = {id, name, sex, age, hight, weight}
string illegal_analyse_3(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	string result = "";
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6)
			continue;
		string src = input1[i][0];
		string dst = "";
		int len = src.length();
		for (int j = 0; j < len; j++) {
			int x = (int)src.at(j);
			int y = 0;
			for (int k = 0; k < x; k++)
				y++;
			dst += char(y);
		}
		result += dst + " ";
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6)
			continue;
		string src = input2[i][0];
		string dst = "";
		int len = src.length();
		for (int j = 0; j < len; j++) {
			int x = (int)src.at(j);
			int y = 0;
			for (int k = 0; k < x; k++)
				y++;
			dst += char(y);
		}
		result += dst + " ";
	}
	return result;
}