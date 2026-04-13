QUESTION 1
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
	vector<int> numbers;
	int n, value;

	cout << "How many numbers? ";
	cin >> n;

	cout << "Enter numbers:\n";
	for (int i = 0; i < n; i++) {
		cin >> value;
		numbers.push_back(value);
	}

	sort(numbers.begin(), numbers.end());

	cout << "Sorted list: ";
	for (int x : numbers) {
		cout << x << " ";
	}
	cout << endl;

	// Search
	int target;
	cout << "Enter number to search: ";
	cin >> target;

	if (binary_search(numbers.begin(), numbers.end(), target)) {
		cout << "Number FOUND!\n";
	}
	else {
		cout << "Number NOT found!\n";
	}

	return 0;
} /*Sorting is necessary because binary search works by repeatedly dividing the search interval in half.
It compares the target value with the middle element of the list. This method only works correctly if the elements 
are arranged in sorted order.If the list is unsorted, binary search cannot determine which half of the list to 
eliminate, and the result will be incorrect.

Sorting(using STL sort) ??(nlogn)
Binary Search O(logn)
*/