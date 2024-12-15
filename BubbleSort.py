def bubbleSort(nums):
    length = len(nums) - 1
    while length > 0:
        #best case: if array is already sorted
        didSwap = 0

        #repeatedly swap elements, after every pass the greatest element in unsorted array will be at end 
        for i in range (0, length):
            if nums[i] > nums[i+1]:
                nums[i], nums[i+1] = nums[i+1], nums[i]
                didSwap = 1

        #no change in the array was made
        if didSwap == 0:
            break
        
        #reducing length as the last elements now will be sorted
        length -= 1

    return nums

# Taking input from the user
input_str = input("Enter numbers separated by spaces: ")
nums = list(map(int, input_str.split()))

print("Unsorted array:", nums)

nums = bubbleSort(nums)

print("Sorted array:", nums)