#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <vector>
#include <sstream>
#include "data_analysis_case__illegal_1__explicit_leak.h"

using namespace std;

int main(int argc, char const* argv[])
{
	/* Preprocess input data from input_file */
	if (argc != 2) {
		printf("Null args!\n");
		return -1;
	}
	
	FILE* fp_input;
	fp_input = fopen(argv[1], "r");
	if (fp_input == NULL) {
		printf("Open input file failed!\n");
		return -1;
	}

	char buf[10000];
	fread(buf, sizeof *buf, 10000, fp_input);
	istringstream bufiss(buf);

	vector<vector<string>> input1;
	vector<vector<string>> input2;
	bool split = false;
	char line[10000];
	//while (fgets(line, 10000, fp_input) != NULL) {
	while (bufiss.getline(line, 10000)) {
		if (strstr(line, "#####") != NULL) {
			split = true;
			continue;
		}
		vector<string> tmp_vec;
		string tmp_str;
		istringstream iss(line);
		while (iss >> tmp_str) {
			tmp_vec.push_back(tmp_str);
		}
		// if (tmp_vec.size() < 6)
		// 	continue;
		if (!split)
			input1.push_back(tmp_vec);
		else
			input2.push_back(tmp_vec);
	}
	fclose(fp_input);

	/* Analysis */
	// char* result = illegal_analyse_1(input1, input2, p1, p2);
	string result = illegal_analyse_1(input1, input2);
	//printf("result: %s\n", result);
	return 0;
}