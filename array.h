/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file array.h
* @date 14 september 2016
**/

template <class T> class array{
	public:
		void create();
		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T topItem);
		T stapel[];
}  

int & count = 0;
void array::create(int & count){
	T stapel[50];
}

bool array::isEmpty(){
	int i = 0;
	while(stapel[i] == NULL){
		if(i = 50) return true;
		i++;
	}
	return false;
}

void array::clear(){
	for(int i = 0; i <= 50; i++){
		stapel[i] = NULL;
	}
	count = 0;
}

bool array::push(T newItem){
	if(count >= 50) return false;
	stapel[count + 1] = newItem;
	count++;
	return true;
}

bool array::pop(){
	if(count <= 0) return false;
	stapel[count] = NULL;
	count--;
	return true;
}

bool array::top(){
	if(count == 0) return false;
	cout << "Bovenste element van de stapel is: " << stapel[count] << endl;
	return true;
}
