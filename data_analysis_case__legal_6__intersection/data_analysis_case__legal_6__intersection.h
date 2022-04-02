#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <vector>
#include <sstream>

using namespace std;

// [合法] 求交集（但其实也存在泄露，应该warn？）
// input[i] = {id, name, sex, age, hight, weight}
string legal_analyse_6(vector<vector<string>>& input1, vector<vector<string>>& input2);