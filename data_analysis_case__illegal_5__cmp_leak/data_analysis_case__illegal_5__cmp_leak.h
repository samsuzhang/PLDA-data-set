#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <vector>
#include <sstream>

using namespace std;

// [非法] 求平均值，同时比对后泄露部分数据
// input[i] = {id, name, sex, age, hight, weight}
string illegal_analyse_5(vector<vector<string>>& input1, vector<vector<string>>& input2);