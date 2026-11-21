#include <iostream> 
#include <vector>
#include <string>
#include "algorithms.h" 

using namespace std; 

template <typename T> 
void display_vector(const vector<T>& items){
	for (const T& item : items){
		cout << item << " ";
	}
	cout << endl;
}

int main() 
{
	cout << "CUSTOM SEARCH AND SORT  LIBRARY!!\n"; 

	vector<int> numbers = {29, 15, 10, 15, 32, 44}; 
	vector<string> games = {};
	cout << "Orginal numbers: "; 
	display_vector(numbers); 

	cout << "LINEAR SEARCH\n"; 

	int target = 10; 

	if (linear_search(numbers, target)){
		cout << target << " was found!";
	} else {
		cout << target << " was not found in the collection!";
		
	}

	cout << "SELECTION SORT\n"; 

	selection_sort(numbers); 

	cout << "Sorted numbers: "; 
	display_vector(numbers);


	cout << "\nBINARY SEARCH\n"; 

	target = 22;

	cout << target << (binary_search_custom(numbers, target) ? " was found\n" : " was not found in the collection\n");

	vector<string> names = {"Casey", "BJ", "Brandon", "Amber"}; 

	cout << "\nOriginal names: "; 
	display_vector(names); 

	
	cout << "Linear search for BJ"  << (binary_search_custom(names, string("BJ")) ? " was found\n" : " was not found in the collection\n");
	selection_sort(names); 

	cout << "Sorted names: "; 
	display_vector(names);

	cout << "Linear search for Racheal"  << (binary_search_custom(names, string("Rachael")) ? " was found\n" : " was not found in the collection\n");
      int target2 = 15;
	cout << "Counting occurences"<< (count_occurences(numbers, target2)) << "\n"; 
	
	
	cout << "Max value" << (find_max(numbers)) << "\n";
	string game = "minecraft";
	cout << "Counting occurences fail " << (count_occurences(games, game)) << "\n"; 

	cout << "max value fail " << (find_max(games)) << "\n";
}
