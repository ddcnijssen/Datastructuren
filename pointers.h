/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file pointers.h
* @date 15 september 2016
**/

template <class T> class vakje{
	public:
		T info;
		vakje* next;
}

template <class T> class pointers{
	public:
		void create();
		bool isEmpty();
		void clear();
		bool push(newItem);
		bool pop();
		bool top(topItem);

	private:
		int & count;
		vakje* item;
}

template <class T>
pointers<T>::pointers(int & count){
	vakje* item;
	item = new vakje;
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
void pointers<T>::clear(vakje* & item, int & count){
	while(count > 0){
		pop(count);
	}
}

template <class T>
bool pointers<T>::push(T newItem, int & count){
	vakje* hulp;
	hulp = new vakje;
	hulp->info = newItem;
	hulp->next = item;
	item = hulp;
	count++;
	return true;
}

template <class T>
bool pointers<T>::pop(int & count){
	if(isEmpty(count) == true) return false;
	vakje*hulp;
	hulp = item;
	newItem = item->info;
	item = item->next;
	delete hulp; 
	count--;
	return true;
}

template <class T>
bool pointers<T>::top(T & topItem, int count){
	if(isEmpty(count) == true) return false;
	topitem = item->info;
	return true;
}
