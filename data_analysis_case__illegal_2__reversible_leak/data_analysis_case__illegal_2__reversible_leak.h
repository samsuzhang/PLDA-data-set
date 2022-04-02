#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <vector>
#include <sstream>

using namespace std;

// [非法] 可逆运算后返回
// input[i] = {id, name, sex, age, hight, weight}
string illegal_analyse_2(vector<vector<string>>& input1, vector<vector<string>>& input2);