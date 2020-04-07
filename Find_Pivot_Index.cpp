#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        bool pivotIndexFound = false;
        int numsSize = nums.size();
        do
        {

        } while (!pivotIndexFound);

        return 999;
    }
};

int main()
{
    Solution solution;

    vector<int> testCase1 = {1, 7, 3, 6, 5, 6};
    int expected1 = 3;
    int output1 = solution.pivotIndex(testCase1);

    if (expected1 == output1)
    {
        cout << "Test 1 PASS";
    }
    else
    {
        cout << "Test 1 FAILED";
    }
    cout << endl;

    vector<int> testCase2 = {1, 2, 3};
    int expected2 = -1;
    int output2 = solution.pivotIndex(testCase2);

    if (expected2 == output2)
    {
        cout << "Test 2 PASS";
    }
    else
    {
        cout << "Test 2 FAILED";
    }
    cout << endl;
}