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

// [非法] 通过分支隐式窃取
// input[i] = {id, name, sex, age, hight, weight}
string illegal_analyse_4(vector<vector<string>>& input1, vector<vector<string>>& input2) {
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
			int x = src.at(j) - '0';
			if (x == 0)	dst += '0';
			else if (x == 1)	dst += '1';
			else if (x == 2)	dst += '2';
			else if (x == 3)	dst += '3';
			else if (x == 4)	dst += '4';
			else if (x == 5)	dst += '5';
			else if (x == 6)	dst += '6';
			else if (x == 7)	dst += '7';
			else if (x == 8)	dst += '8';
			else if (x == 9)	dst += '9';
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
			int x = src.at(j) - '0';
			if (x == 0)	dst += '0';
			else if (x == 1)	dst += '1';
			else if (x == 2)	dst += '2';
			else if (x == 3)	dst += '3';
			else if (x == 4)	dst += '4';
			else if (x == 5)	dst += '5';
			else if (x == 6)	dst += '6';
			else if (x == 7)	dst += '7';
			else if (x == 8)	dst += '8';
			else if (x == 9)	dst += '9';
		}
		result += dst + " ";
	}
	return result;
}