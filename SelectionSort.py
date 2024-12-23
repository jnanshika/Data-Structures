def selectionSort(arr):
    length = len(arr)
    #outer loop to track the starting element
    for i in range(0, length-1):
        # let the current index has the minimum value
        min_index= i

        # inner loop to find the index of the minimum element in the unsorted portion
        for j in range (i+1, length):
            if arr[j] < arr[min_index]:
                min_index = j

        # Swap the found minimum element with the first element of the unsorted portion
        arr[i], arr[min_index] = arr[min_index], arr[i]
    
    return arr

arr = [64, 25, 12, 22, 11]
print("Unsorted array:", arr)
sorted_arr = selectionSort(arr)
print("Sorted array:", sorted_arr)