/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file pointers.h
* @date 15 september 2016
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
	   pointers(int & count);
		void create(int & count);
		bool isEmpty(int count);
		void clear(int & count, vakje<T>* & item);
		bool push(T newItem, int & count, vakje<T>* & item);
		bool pop(int & count, vakje<T>* & item);
		bool top(T & topItem, int count, vakje<T>* item);

	private:
		int & count;		
};

template <class T>
pointers<T>::pointers(int & count){
	vakje<T>* item;
	item = new vakje<T>;
	item->info = '?';
	item->next = NULL;
	count = 0;
}

template <class T>
bool pointers<T>::isEmpty(int count){
	if(count = 0) return true;
	return false;
}

template <class T>
void pointers<T>::clear(int & count, vakje<T>* &item){
	while(count > 0){
		pop(count, item);
	}
}

template <class T>
bool pointers<T>::push(T newItem, int & count, vakje<T>* & item){
	vakje<T>* hulp;
	hulp = new vakje<T>;
	hulp->info = newItem;
	hulp->next = item;
	item = hulp;
	count++;
	return true;
}

template <class T>
bool pointers<T>::pop(int & count, vakje<T>* & item){
	if(isEmpty(count) == true) return false;
	vakje<T>* hulp;
	hulp = item;
	item->info = item->next->info;
	item = item->next;
	delete hulp; 
	count--;
	return true;
}

template <class T>
bool pointers<T>::top(T & topItem, int count, vakje<T>* item){
	if(isEmpty(count) == true) return false;
	topItem = item->info;
	return true;
}
