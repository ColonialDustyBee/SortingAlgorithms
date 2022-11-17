/*
We each had a bit of trouble solving these on our own, so we used geeksforgeeks as a resource to help us out for each of these algorithms. The links are provided down below: 
https://www.geeksforgeeks.org/bubble-sort/?ref=lbp - For Bubble Sort
https://www.geeksforgeeks.org/insertion-sort/ - For Insertion Sort
https://www.geeksforgeeks.org/quick-sort/?ref=lbp - For Quick Sort (this is for a pivot point being the last element)
Also used this resource for QuickSort to understand the implementation of the frontmost element being the pivot point - https://www.youtube.com/watch?v=7h1s2SojIRw
https://www.geeksforgeeks.org/selection-sort/?ref=lbp - For Selection Sort
*/

#pragma once
#include <vector>
using namespace std;

class SelectionSort {
private:
	int i = 0, j = 0; 
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
// Considered the slowest one here
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
// Should start at the beginning for this algorithm, there are versions where it starts at the end, the key feature 
class QuickSort {
private:
	int i = 0, j = 0; // used for low and high points for pivot respectively.
public:
	vector<int> elementsForQuickSort;
	QuickSort(); // default constructor 
	int partition(int, int); // used to split based on pivot point
	void quickSort(int, int);
};
