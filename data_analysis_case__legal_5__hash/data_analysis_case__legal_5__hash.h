#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <vector>
#include <sstream>

using namespace std;

// [合法] 无害化处理（如哈希）
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_5(vector<vector<string>>& input1, vector<vector<string>>& input2);