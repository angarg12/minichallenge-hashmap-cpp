#include "CppUTest/TestHarness.h"
#include "numeric"

extern "C++"
{
#include "Minichallenge.h"
}

TEST_GROUP(Solution)
{
    Solution* solution;
    void setup()
    {
        solution = new Solution();
    }

    void teardown()
    {
        delete solution;
    }
};

TEST(Solution, correct_solution_1)
{
    std::vector<int> nums{2, 7, 11, 15};
    int target = 9;
    std::vector<int> expected{0, 1};
    CHECK(expected == solution->twoSum(nums, target));
}

TEST(Solution, correct_solution_2)
{
    std::vector<int> nums{3, 2, 4};
    int target = 6;
    std::vector<int> expected{1, 2};
    CHECK(expected == solution->twoSum(nums, target));
}

TEST(Solution, correct_solution_3)
{
    std::vector<int> nums{3, 3};
    int target = 6;
    std::vector<int> expected{0, 1};
    CHECK(expected == solution->twoSum(nums, target));
}

TEST(Solution, large_input)
{
    std::vector<int> nums(100000);
    std::iota (std::begin(nums), std::end(nums), 1); // Fill with 1, 2, ...
    int target = 199999;
    std::vector<int> expected{99998, 99999};
    CHECK(expected == solution->twoSum(nums, target));
}

//TEST(Solution, correct_solution_1_fast)
//{
//    std::vector<int> nums{2, 7, 11, 15};
//    int target = 9;
//    std::vector<int> expected{0, 1};
//    CHECK(expected == solution->twoSumFast(nums, target));
//}
//
//TEST(Solution, correct_solution_2_fast)
//{
//    std::vector<int> nums{3, 2, 4};
//    int target = 6;
//    std::vector<int> expected{1, 2};
//    CHECK(expected == solution->twoSumFast(nums, target));
//}
//
//TEST(Solution, correct_solution_3_fast)
//{
//    std::vector<int> nums{3, 3};
//    int target = 6;
//    std::vector<int> expected{0, 1};
//    CHECK(expected == solution->twoSumFast(nums, target));
//}
//
//TEST(Solution, large_input_fast)
//{
//    std::vector<int> nums(100000);
//    std::iota (std::begin(nums), std::end(nums), 1); // Fill with 1, 2, ...
//    int target = 199999;
//    std::vector<int> expected{99998, 99999};
//    CHECK(expected == solution->twoSumFast(nums, target));
//}