#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int num, target;
    
    while (cin >> num) {
        nums.push_back(num);
        if (cin.get() == '\n') break;
    }
    
    cin >> target;
    
    int count_val = count(nums.begin(), nums.end(), target);
    auto min_val = *min_element(nums.begin(), nums.end());
    auto max_val = *max_element(nums.begin(), nums.end());
    
    cout << "Count of " << target << ": " << count_val << endl;
    cout << "Min: " << min_val << endl;
    cout << "Max: " << max_val << endl;
    
    return 0;
}