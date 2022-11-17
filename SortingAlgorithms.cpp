#include "SortingAlgorithms.h"
#include <iostream>
// Every single one of these sorting algorithms will sort in ascending order.

// Selection Sort
/*
	picks out smallest element
	swaps it with the first element.
	keeps going until everything is sorted. 
	(Think of how you sort a deck of cards)
*/
SelectionSort::SelectionSort() { };
void SelectionSort::selectionSort(vector<int> elements) {
	for (i = 0; i < elements.size(); i++) {
		int minimumValue = i; // Starts at the first element.
		for (int j = i + 1; j < elements.size() - 1; j++) {
			if (elements[minimumValue] > elements[j]) {
				minimumValue = j;
			}
		}
		swap(elements[minimumValue], elements[i]); // Should respectively swap the values together. 
	}
}
// Insertion Sort
InsertionSort::InsertionSort() { }; // Default constructor
void InsertionSort::insertionSort(vector<int> elements) {
	int currentElement = 0;
	for (i = 1; i < elements.size() - 1; i++) {
		currentElement = elements[i]; // picks out element for insertion sort.
		j = i - 1;

		while (j >= 0 && currentElement < elements[j]) {
			elements[j + 1] = elements[j];
			j--;
		}
		elements[j + 1] = currentElement;
	}
}
// Bubble Sort
BubbleSort::BubbleSort() { };
void BubbleSort::bubbleSort(vector<int> elements) {
	int end = elements.size() - 1; // access end of array.
	for (i = 0; i < end - 1; i++) {
		for (j = 0; j < end - i - 1; j++) {
			if (elements[j] > elements[j + 1]) {
				swap(elements[j], elements[j + 1]);
			}
		}
	}
}
// QuickSort (takes the last place as pivot)
QuickSort::QuickSort() { };
int QuickSort::partition(int low, int high) { // Low and high will be initialized in the driver file. 
	int pivot = elementsForQuickSort[low]; // starts at the beginning of the list. The equivalent of this is pivot = elements[0];
	i = low;
	j = high;
	while (i < j) {
		do { // left of array
			i++;
		} while (elementsForQuickSort[i] <= pivot);
		do { // right of array
			j--;
		} while (elementsForQuickSort[j] > pivot);
		if (i < j) { // if left is less than right it should swap.
			swap(elementsForQuickSort[i], elementsForQuickSort[j]);
		}
	}
	swap(elementsForQuickSort[low], elementsForQuickSort[j]);
	return j; // once j has surpassed i.
}
void QuickSort::quickSort(int low, int high) { // Will be called first.
	if (low < high) {
		j = partition(low, high); // This will be the new pivot point
		quickSort(low, j - 1);
		quickSort(j + 1, high - 1);
	}
}
