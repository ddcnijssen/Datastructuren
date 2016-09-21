/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file STL_vector.h
* @date 19 september 2016
**/

#include <vector>

template <class T> class STL_vector{
	public:
		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T & topItem);
		
	private:
	   std::vector<T> STL_vector;
};

template <class T>
bool STL_vector<T>::isEmpty(){
   return STL_vector.empty();
}

template <class T>
void STL_vector<T>::clear(){
   STL_vector.clear();
}

template <class T>
bool STL_vector<T>::push(T newItem){
   STL_vector.push_back(newItem);
   return true;
}

template <class T>
bool STL_vector<T>::pop(){
   if(isEmpty() == true) return false;
   STL_vector.pop_back();
   return true;
}

template <class T>
bool STL_vector<T>::top(T & topItem){
   if(isEmpty() == true) return false;
   topItem = STL_vector.back();
   return true;
}
