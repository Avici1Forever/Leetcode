package leetcode

func twoSum(nums []int, target int) []int {
	for firstIndex, firstValue := range nums {
		for secondIndex := firstIndex + 1; secondIndex < len(nums); secondIndex++ {
			if firstValue+nums[secondIndex] == target {
				return []int{firstIndex, secondIndex}
			}
		}
	}
	return []int{}
}
