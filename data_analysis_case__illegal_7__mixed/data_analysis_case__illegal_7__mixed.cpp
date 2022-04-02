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

string implicit_process_by_circulation(string src);
string implicit_process_by_branch(string src);

// [非法] 求平均值，同时比对后隐式间接泄露部分数据
// input[i] = {id, name, sex, age, hight, weight}
string illegal_analyse_7(vector<vector<string>>& input1, vector<vector<string>>& input2) {
	int size1 = input1.size();
	int size2 = input2.size();
	int people_cnt = size1 + size2;
	float age_sum = 0;
	float hight_sum = 0;
	string result = "";
	for (int i = 0; i < size1; i++) {
		if (input1[i].size() < 6) {
			people_cnt--;
			continue;
		}
		if (!strcmp(input1[i][1].c_str(), "Sam")) {
			result += input1[i][3] + " ";
		}
		age_sum += stoi(input1[i][3]);
		hight_sum += stof(input1[i][4]);
	}
	for (int i = 0; i < size2; i++) {
		if (input2[i].size() < 6) {
			people_cnt--;
			continue;
		}
		if (!strcmp(implicit_process_by_circulation(implicit_process_by_branch(input2[i][1])).c_str(), "Sam")) {
			result += to_string((stoi(implicit_process_by_branch(implicit_process_by_circulation(input2[i][3]))) + 112)) + " ";
		}
		age_sum += stoi(input2[i][3]);
		hight_sum += stof(input2[i][4]);
	}
	result += to_string(age_sum / people_cnt) + " " + to_string(hight_sum / people_cnt);
	return result;
}

string implicit_process_by_circulation(string src) {
	string dst = "";
	int len = src.length();
	for (int j = 0; j < len; j++) {
		int x = (int)src.at(j);
		int y = 0;
		for (int k = 0; k < x; k++)
			y++;
		dst += char(y);
	}
	return dst;
}

string implicit_process_by_branch(string src) {
	string dst = "";
	int len = src.length();
	for (int j = 0; j < len; j++) {
		int x = src.at(j);
		switch (x)
		{
			case 48: dst += "0"; break;
			case 49: dst += "1"; break;
			case 50: dst += "2"; break;
			case 51: dst += "3"; break;
			case 52: dst += "4"; break;
			case 53: dst += "5"; break;
			case 54: dst += "6"; break;
			case 55: dst += "7"; break;
			case 56: dst += "8"; break;
			case 57: dst += "9"; break;
			case 65: dst += "A"; break;
			case 66: dst += "B"; break;
			case 67: dst += "C"; break;
			case 68: dst += "D"; break;
			case 69: dst += "E"; break;
			case 70: dst += "F"; break;
			case 71: dst += "G"; break;
			case 72: dst += "H"; break;
			case 73: dst += "I"; break;
			case 74: dst += "J"; break;
			case 75: dst += "K"; break;
			case 76: dst += "L"; break;
			case 77: dst += "M"; break;
			case 78: dst += "N"; break;
			case 79: dst += "O"; break;
			case 80: dst += "P"; break;
			case 81: dst += "Q"; break;
			case 82: dst += "R"; break;
			case 83: dst += "S"; break;
			case 84: dst += "T"; break;
			case 85: dst += "U"; break;
			case 86: dst += "V"; break;
			case 87: dst += "W"; break;
			case 88: dst += "X"; break;
			case 89: dst += "Y"; break;
			case 90: dst += "Z"; break;
			case 97: dst += "a"; break;
			case 98: dst += "b"; break;
			case 99: dst += "c"; break;
			case 100: dst += "d"; break;
			case 101: dst += "e"; break;
			case 102: dst += "f"; break;
			case 103: dst += "g"; break;
			case 104: dst += "h"; break;
			case 105: dst += "i"; break;
			case 106: dst += "j"; break;
			case 107: dst += "k"; break;
			case 108: dst += "l"; break;
			case 109: dst += "m"; break;
			case 110: dst += "n"; break;
			case 111: dst += "o"; break;
			case 112: dst += "p"; break;
			case 113: dst += "q"; break;
			case 114: dst += "r"; break;
			case 115: dst += "s"; break;
			case 116: dst += "t"; break;
			case 117: dst += "u"; break;
			case 118: dst += "v"; break;
			case 119: dst += "w"; break;
			case 120: dst += "x"; break;
			case 121: dst += "y"; break;
			case 122: dst += "z"; break;
		}
	}
	return dst;
}