#pragma once
template <typename T>
class SelectionSort {
private:
	T minimumValue;
	int i, j; // meant to use for the for loops.
	vector<T> elements;
public:
	SelectionSort();
	~SelectionSort();
	void selectionSort(T, elements);
	void swap()
};
template <typename T> 
class InsertionSort {

};
template <typename T>
class QuickSort {

};
template <typename T>
class RadixSort {

};