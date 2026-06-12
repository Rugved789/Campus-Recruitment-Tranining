def binary_search(arr, target):
	low = 0
	high = len(arr) - 1

	while low <= high:
		mid = (low + high) // 2

		if arr[mid] == target:
			return mid
		elif arr[mid] < target:
			low = mid + 1
		else:
			high = mid - 1

	return -1


arr = [2, 8, 15, 19, 20, 26]
target = 21

result = binary_search(arr, target)

if result != -1:
	print("Element Found at index:", result)
else:
	print("Element not found")
