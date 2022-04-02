#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <vector>
#include <sstream>

using namespace std;

// [合法] 核验数据
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_4(vector<vector<string>>& input1, vector<vector<string>>& input2);