//TODO: //*Correct Approach/
class Solution
{
public:
    int partition(vector<int> &nums, int l, int r)
    {
        int random = l + rand() % (r - l);
        swap(nums[l], nums[random]);
        int pivot = nums[l];
        int i = l - 1, j = r + 1;

        while (true)
        {
            do
            {
                i++;
            } while (nums[i] < pivot);

            do
            {
                j--;
            } while (nums[j] > pivot);

            if (i >= j)
                return j;

            swap(nums[i], nums[j]);
        }
    }

    void quickSort(vector<int> &nums, int l, int r)
    {
        if (l >= r)
        {
            return;
        }
        int p = partition(nums, l, r);
        quickSort(nums, l, p);
        quickSort(nums, p + 1, r);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        srand(time(NULL));
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

//FIXME: //* This approach uses recursion and those give TLE (NOTE: This approach was only used for learning reccursion)/
// class Solution
// {
// public:
//     void insert(vector<int> &nums, int temp)
//     {
//         if (nums.size() == 0 || nums[nums.size() - 1] <= temp)
//         {
//             nums.push_back(temp);
//             return;
//         }
//         int val = nums[nums.size() - 1];
//         nums.pop_back();
//         insert(nums, temp);
//         nums.push_back(val);
//         return;
//     }

//     vector<int> sortArray(vector<int> &nums)
//     {
//         if (nums.size() == 1)
//         {
//             return nums;
//         }
//         int temp = nums[nums.size() - 1];
//         nums.pop_back();
//         sortArray(nums);
//         insert(nums, temp);
//         return nums;
//     }
// };