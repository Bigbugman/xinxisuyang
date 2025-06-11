#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, G;
    cin >> n >> G;
    vector<pair<int, int>> skis(n); // (weight, length)
    for (int i = 0; i < n; ++i) {
        cin >> skis[i].first >> skis[i].second;
    }

    // 按照滑雪板长度从大到小排序
    sort(skis.begin(), skis.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    int total_length = 0;
    int current_weight = 0;
    int max_length_in_package = 0;

    for (const auto& ski : skis) {
        if (current_weight + ski.first <= G) {
            current_weight += ski.first;
            max_length_in_package = max(max_length_in_package, ski.second);
        } else {
            // 当前包裹已经达到或超过G，结算
            total_length += 2 * max_length_in_package;
            // 开始新的包裹
            current_weight = ski.first;
            max_length_in_package = ski.second;
        }
    }
    // 处理最后一个包裹
    total_length += 2 * max_length_in_package;

    cout << total_length << endl;

    return 0;
}