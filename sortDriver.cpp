#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <ctime>
#include "SortingAlgorithms.h"

using namespace std;

int main() {
	BubbleSort FirstValues;
	SelectionSort SecondValues;
	InsertionSort ThirdValues;
	QuickSort FourthValues;
	clock_t startTime = 0, endTime = 0;
	int difference = 0;
	// Initializes 3 elements to store the value from file onto each vector. 4th one is within the header files for ease.
	vector<int> elementsForBubbleSort;
	vector<int> elementsForSelectionSort;
	vector<int> elementsForInsertionSort;
	ifstream inFile;
	ofstream outFile;
	string inputFileName, outputFileName, testName, command;
	char character = 0;
	bool end = false;
	cout << "Please input file name: ";
	cin >> inputFileName;
	inFile.open(inputFileName);
	while (!inFile) {
		cout << "ERROR, file not found!, enter again: ";
		cin.ignore();
		getline(cin, inputFileName);
		inFile.open(inputFileName);
	}
	cout << "\nPlease enter name of output file: ";
	cin >> outputFileName;
	outFile.open(outputFileName);
	cout << "\nPlease enter name of output label: ";
	cin.ignore();
	getline(cin, testName);
	outFile << testName << endl;
	int i = 0;
	while (!end) {
		inFile >> command;
		if (command == "End") {
			end = true;
			inFile.close();
		}
		else {
			elementsForBubbleSort.push_back(stoi(command));
			elementsForSelectionSort.push_back(stoi(command));
			elementsForInsertionSort.push_back(stoi(command));
			FourthValues.elementsForQuickSort.push_back(stoi(command));
		}
	}
	
	// Time for Bubble Sort (FIXED)
	cout << "Calculating time for Bubble Sort..." << endl;
	startTime = clock();
	FirstValues.bubbleSort(elementsForBubbleSort);
	endTime = clock();
	difference = difftime(endTime, startTime);
	outFile << "Total time allocated for Bubble Sort: " << difference << " seconds" << endl;
	cout << "Finished!" << endl;
	// Time for Selection Sort (FIXED)
	cout << "Calculating time for Selection sort..." << endl;
	startTime = clock();
	SecondValues.selectionSort(elementsForSelectionSort);
	endTime = clock();
	difference = difftime(endTime, startTime);
	outFile << "Total time allocated for Selection Sort: " << difference << " seconds" << endl;
	cout << "Finished!" << endl;
	// Time for Insertion Sort (FIXED)
	cout << "Calculating time for Insertion sort..." << endl;
	startTime = clock();
	ThirdValues.insertionSort(elementsForInsertionSort);
	endTime = clock();
	difference = difftime(endTime, startTime);
	outFile << "Total time allocated for Insertion Sort: " << difference << " seconds" << endl;
	cout << "Finished!" << endl;
	// Time for QuickSort (semi sort of fixed, double check this beforehand).
	cout << "Calculating time for QuickSort..." << endl;
	int low = 0;
	int high = FourthValues.elementsForQuickSort.size();
	startTime = clock();
	FourthValues.quickSort(low, high);
	endTime = clock();
	difference = difftime(endTime, startTime);
	outFile << "Total time allocated for Quick Sort: " << difference << " seconds" << endl;
	cout << "Finished!" << endl;
	return 0;
	
}
