package Leetcode

func twoSum(nums []int, target int) []int {
	var answer [2]int
	for firstindex := 0; firstindex < len(nums)-1; firstindex++ {
		for secondindex :=firstindex + 1; secondindex < len(nums); secondindex++ {
			if nums[firstindex]+nums[secondindex] == target {
				answer[0] = firstindex
				answer[1] = secondindex
				return answer[:2]
			}
		}
	}
	return answer[:2]
}
