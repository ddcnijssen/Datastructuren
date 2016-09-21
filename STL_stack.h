/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file STL_stack.h
* @date 19 september 2016
**/
#include <stack>

template <class T> class STL_stack{
	public:
		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T & topItem);
		
   private:
      std::stack<T> STL_stack;
};

template <class T>
bool STL_stack<T>::isEmpty(){
   return STL_stack.empty();
}

template <class T>
void STL_stack<T>::clear(){
   while(isEmpty() == false) pop();
}

template <class T>
bool STL_stack<T>::push(T newItem){
   STL_stack.push(newItem);
   return true;
}

template <class T>
bool STL_stack<T>::pop(){
   if(isEmpty() == true) return false;
   STL_stack.pop();
   return true;
}

template <class T>
bool STL_stack<T>::top(T & topItem){
   if(isEmpty() == true) return false;
   topItem = STL_stack.top();
   return true;
}
