#include<bits/stdc++.h>
using namespace std;

    bool canJump(vector<int> nums)
    {
        int a;
        if (nums[0] == 0 && nums.size() == 1)
        {
            return true;
        }
        else if (nums[0] == 0 && nums.size() > 1)
        {
            return false;
        }
        else
        {
            for (int i = 0, j = 0; i < nums.size(), j < nums.size(); i++, j++)
            {
                a = nums[i];
                i = i + a;
                j = i;
                if (i == nums.size())
                {
                    return true;
                }
                j = i; // j will be temp here
            }
        }

        return true;
    }

  int main(){
    vector<int> nums{2,0,0};
    canJump(nums);
    return 0;
  }