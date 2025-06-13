//https://etutor2.itsa.org.tw/mod/topics/view.php?id=43028

#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int min_diff = INT_MAX;

void dfs(const vector<int>& nums, int i, int sum1, int sum2) {
    if (i == nums.size()) {
        min_diff = min(min_diff, abs(sum1 - sum2));
        return;
    }

    dfs(nums, i + 1, sum1 + nums[i], sum2);  // 放到第一堆
    dfs(nums, i + 1, sum1, sum2 + nums[i]);  // 放到第二堆
}

int main() {
    vector<int> nums;  // 輸入數字
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        int n;
        cin >> n;
        nums.push_back(n);
    }
    dfs(nums, 0, 0, 0);

    cout << min_diff << endl;
    return 0;
}
