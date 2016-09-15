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
pointers<T>::pointers(){
	count = 0;
}

template <class T>
bool pointers<T>::isEmpty(vakje* & item){
	if(count = 0) return false;
	return false;
}

template <class T>
void pointers<T>::clear(vakje* & item){
	vakje* hulp;
	while(count > 0){
		hulp = item;
		item = item->next;
		delete hulp;
	}
}

template <class T>
bool pointers<T>::push(T newItem){
	vakje* hulp;
	hulp = new vakje;
	hulp->info = newItem;
	hulp->next = item;
	item = hulp;
	count++;
}

template <class T>
bool pointers<T>::pop(){
	vakje*hulp;
	
	count--;
}

template <class T>
bool pointers<T>::top(topItem){
	while(item != NULL){

	}
}
