def insertionSort(arr):
    length = len(arr)
    for i in range(0 , length):
        j = i
        while j > 0 and arr[j - 1] > arr[j]:
            # Swap arr[j-1] and arr[j]
            arr[j - 1], arr[j] = arr[j], arr[j - 1]
            j -= 1
        print(f"After iteration {i} : {arr}")
    return arr

# Taking input from the user
input_str = input("Enter numbers separated by spaces: ")
nums = list(map(int, input_str.split()))

print("Unsorted array:", nums)

nums = insertionSort(nums)

print("Sorted array:", nums)