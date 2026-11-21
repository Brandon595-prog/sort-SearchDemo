#pragma once 
#ifndef BRANDON_ALG_H
#define BRANDON_ALG_H

#include <vector> 
#include <stdexcept>

template <typename T> 
bool linear_search(const std::vector<T>& items, const T& target)
{
	for (std::size_t i = 0; i < items.size(); i++){
		if (items[i] == target){
			return true;
		}
	}
	return false;

}

// binary search custom - vector must already be sorted before use 

template <typename T> 
bool binary_search_custom(const std::vector<T>& items, const T& target) {
	std::size_t left = 0; 
	std::size_t right = items.size(); 

	while (left < right) {
		std::size_t mid = left + (right - left) / 2;

		if (items[mid] == target){
			return true;
		}
		else if (items[mid] < target){
			left = mid + 1;

		} else {
			right = mid;
		}
	}
	return false;
}




template <typename T> 
void selection_sort(std::vector<T>& items) {
	for (std::size_t i = 0; i < items.size(); i++){
		std::size_t min_index = i;

		// find the smallest element remaining as we loop through the items
		for (std::size_t j = i + 1; j < items.size(); j++){
			if (items[j] < items[min_index]){
				min_index = j;
			}
		}

		// swap the smallest element into position 
		if (min_index != i){
			T temp = items[i]; 
			items[i] = items[min_index]; 
			items[min_index] = temp;
		}
	}
}

template <typename T> 
int count_occurences(std::vector<T>& items, const T& target) {
	int matches = 0;
	for (std::size_t i = 0; i < items.size(); i++){
		if (items.size() < 0){
			return 0;
		}
		if (items[i] == target){
			matches++;
		} 
		
	}
	return matches;
}


template <typename T> 
T find_max(std::vector<T>& items){
	T max;
	for(std::size_t i = 0; i < items.size(); i++){
		if (items.size() < 0) {
		throw std::out_of_range("vector is empty!"); 
		}
		std::size_t max_index = i;
		 max = items[i];
		
		for(std::size_t m = i + 1; m < items.size();  m++){
			if (items[m] > max){
				max = items[m];
			}
		}
	

	}
return max;

}




#endif
