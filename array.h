/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file array.h
* @date 15 september 2016
**/

template <class T> class array{
	public:
		/**
		* @function create
		* @abstract maakt een lege stapel
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		void create();
		/**
		* @function isEmpty
		* @abstract bepaalt of de stapel leeg is
		* @return geeft true als de stapel leeg is en false als de stapel niet leeg is
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool isEmpty();
		/**
		* @function clear
		* @abstract maakt de stapel leeg
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		void clear();
		/**
		* @function push
		* @abstract voegt een newItem toe op de top van de stapel, en geeft terug of de opdracht gelukt is
		* @param het ding dat aan de stapel wordt toegevoegd
		* @return geeft true als newItem is toegevoegd aan de stapel
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool push(T newItem);
		/**
		* @function pop
		* @abstract verwijdert het bovenste element van de stapel, en geeft terug of de opdracht gelukt is
		* @return geeft true als het bovenste element van de stapel is verwijderd
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool pop();
		/**
		* @function top
		* @abstract geeft het bovenste stapelelement, zonder dit te verwijderen, en geeft terug of de opdracht gelukt is
		* @return geeft true als het bovenste stapel element is gegeven
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool top();
		T stapel[50];

	private:
		int & count;
}  

template <class T>
array<T>::array(){
	count = 0;
}

template <class T>
bool array<T>::isEmpty(){
	int i = 0;
	while(stapel[i] == NULL){
		if(i = 50) return true;
		i++;
	}
	return false;
}

template <class T>
void array<T>::clear(){
	for(int i = 0; i <= 50; i++){
		stapel[i] = NULL;
	}
	count = 0;
}

template <class T>
bool array<T>::push(T newItem){
	if(count >= 50) return false;
	stapel[count + 1] = newItem;
	count++;
	return true;
}

template <class T>
bool array<T>::pop(){
	if(count <= 0) return false;
	stapel[count] = NULL;
	count--;
	return true;
}

template <class T>
bool array<T>::top(){
	if(count == 0) return false;
	cout << "Bovenste element van de stapel is: " << stapel[count] << endl;
	return true;
}
