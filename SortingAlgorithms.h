#pragma once
// We should have different data sets of 100, 1000, and maybe 2500 respectively? We could always change the data size at any point.
#include <vector>
using namespace std;

class SelectionSort {
private:
	int i = 0, j = 0; // meant to use for the for loops.
public:
	SelectionSort(); 
	void selectionSort(vector<int>);
};
// I think this is similar to sorting a deck of cards where you go one by one and place the card at the very end of the position and then then next position and what not.
class InsertionSort {
private:
	int i = 0, j = 0; 
public:
	InsertionSort(); // default constructor
	void insertionSort(vector<int>);
};
// Considered the slowest one here?
// Compares two adjacent elements. If element adjacent to the other one is greater/less than the current one then it swaps the two, keeps going until it reaches the end.
class BubbleSort { 
private:
	int i = 0, j = 0;
public:
	BubbleSort();
	void bubbleSort(vector<int>);
};
// Recursive 
// requires us to pick a pivot point and divide the vector into smaller pieces and then combine them all. 
// requires low and high positions (beginning and end)
// pivot point is all elements on left should be smaller and right should be bigger i < x < j. could be random as well.
// increment i until you find element greater than pivot, decrement j until you find element smaller than the pivot.
// should use two procedures, partition and the quicksort algorithm as well.
// SHOULD STOP once j is greater than i and return the value of j.
// Should start at the beginning for this algorithm
class QuickSort {
private:
	int i = 0, j = 0; // used for low and high points for pivot respectively.
public:
	vector<int> elementsForQuickSort;
	QuickSort(); // default constructor 
	int partition(int, int); // used to split based on pivot point
	void quickSort(int, int);
};
