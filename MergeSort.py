class Solution:
    #merge two sorted array
    def merge(self, nums, low , mid, high):
        temp = []
        left = low
        right = mid+1

        while(left <= mid and right <= high):
            if nums[left] <= nums[right]:
                temp.append(nums[left])
                left += 1
            else:
                temp.append(nums[right])
                right += 1

        #when right half is  exhausted but left half remains
        while left <= mid:
            temp.append(nums[left])
            left += 1

        #when left half is  exhausted but right half remains
        while right <= high :
            temp.append(nums[right])
            right += 1

        #copy the value to original list
        for i in range (low, high+1):
            nums[i] = temp [i-low]

    #function to divide arrays into two half
    def mergeSort(self, nums, low , high):
        #base condition
        if low >= high:
            return
        
        #calculate the mid value to divide into two halfs
        mid = low + (high - low) //2
        self.mergeSort(nums, low, mid) #left half
        self.mergeSort(nums, mid+1 , high)  #right half
        #merge both sorted halfes
        self.merge(nums, low, mid,high)



    def sortArray(self, nums):
        #merge sort
        self.mergeSort(nums, 0, len(nums)-1)
        return nums
    
s = Solution()
values = [3,6,24,7,9,29]
print(values)
sorted_list = s.sortArray(values)
print(sorted_list)