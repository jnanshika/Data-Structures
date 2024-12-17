def bubbleSort(nums):
    n = len(nums)
    # Outer loop for passes
    for i in range(n - 1):  
        # Best case: check if swapping happens
        swapped = False  
        # Inner loop for comparing adjacent elements
        for j in range(n - i - 1):  
            if nums[j] > nums[j + 1]:  
                nums[j], nums[j + 1] = nums[j + 1], nums[j]  # Swap
                swapped = True  
        
        # If no elements were swapped, the array is already sorted
        if not swapped:
            break  
    return nums

# Example Usage
nums = [64, 25, 12, 22, 11]
print("Unsorted Array:", nums)
sorted_nums = bubbleSort(nums)
print("Sorted Array:", sorted_nums)
