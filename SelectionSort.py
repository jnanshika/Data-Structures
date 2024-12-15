def selectionSort( nums ):
    for i in range (0,len(nums)-1):
        for j in range (i, len(nums)):
            if nums[i] > nums[j]:
                nums[i], nums[j]  = nums[j], nums[i]
    return nums
nums= [2,4,5,7,1,3,6]
nums = selectionSort(nums)
print(nums)