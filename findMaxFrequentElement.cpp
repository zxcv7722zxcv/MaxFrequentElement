#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMaxFrequentElement(vector<int> &nums)
{
    unordered_map<int, int> countMap;
    int maxCount = 0;
    int maxElement = 0;
    for (int num : nums)
    {
        countMap[num]++;
        if (countMap[num] > maxCount)
        {
            maxCount = countMap[num];
            maxElement = num;
        }
    }
    return maxElement;
}
