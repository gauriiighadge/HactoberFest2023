# Recursive Python program for insertion sort

# Recursive function to sort an array using insertion sort
def insertionSortRecursive(arr, n):
	# base case
	if n <= 1:
		return

	# Sort first n-1 elements
	insertionSortRecursive(arr, n - 1)

	# Insert last element at its correct position in sorted array.
	last = arr[n - 1]
	j = n - 2

	# Move elements of arr[0..i-1], that are
	# greater than key, to one position ahead
	# of their current position
	while (j >= 0 and arr[j] > last):
		arr[j + 1] = arr[j]
		j = j - 1
	arr[j + 1] = last


# Driver program to test insertion sort
if __name__ == '__main__':
	A = [-7, 11, 6, 0, -3, 5, 10, 2]
	n = len(A)
	insertionSortRecursive(A, n)
	print(A)


