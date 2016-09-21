/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file pointers.h
* @date 19 september 2016
**/

template <class T> class vakje{
	public:
		vakje<T>* next;
		vakje<T>* item;
		vakje<T>* hulp;
		T info;
};

template <class T> class pointers{
   public:
		pointers();
		void create();
		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T & topItem);	
		vakje<T>* item;	
};

template <class T>
pointers<T>::pointers(){
	item = new vakje<T>;
	item->info = '?';
	item->next = NULL;
}

template <class T>
bool pointers<T>::isEmpty(){
	if(item->next == NULL) return true;
	return false;
}

template <class T>
void pointers<T>::clear(){
	while(isEmpty() == false){
		pop(item);
	}
}

template <class T>
bool pointers<T>::push(T newItem){
	vakje<T>* hulp;
	hulp = new vakje<T>;
	hulp->info = newItem;
	hulp->next = item;
	item = hulp;
	return true;
}

template <class T>
bool pointers<T>::pop(){
	if(isEmpty() == true) return false;
	vakje<T>* hulp;
	hulp = item;
	item->info = item->next->info;
	item = item->next;
	delete hulp; 
	return true;
}

template <class T>
bool pointers<T>::top(T & topItem){
	if(isEmpty() == true) return false;
	topItem = item->info;
	return true;
}
