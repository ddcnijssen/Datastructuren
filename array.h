/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file array.h
* @date 15 september 2016
**/

template <class T> class array{
	public:
	   array(int & count);
		/**
		* @function isEmpty
		* @abstract bepaalt of de stapel leeg is
		* @return geeft true als de stapel leeg is en false als de stapel niet leeg is
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool isEmpty(int count);
		/**
		* @function clear
		* @abstract maakt de stapel leeg
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		void clear(int & count);
		/**
		* @function push
		* @abstract voegt een newItem toe op de top van de stapel, en geeft terug of de opdracht gelukt is
		* @param het ding dat aan de stapel wordt toegevoegd
		* @return geeft true als newItem is toegevoegd aan de stapel
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool push(T newItem, int & count);
		/**
		* @function pop
		* @abstract verwijdert het bovenste element van de stapel, en geeft terug of de opdracht gelukt is
		* @return geeft true als het bovenste element van de stapel is verwijderd
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool pop(int & count);
		/**
		* @function top
		* @abstract geeft het bovenste stapelelement, zonder dit te verwijderen, en geeft terug of de opdracht gelukt is
		* @return geeft true als het bovenste stapel element is gegeven
		* @pre exacte beschrijving preconditie
		* @post exacte beschrijving postconditie
		wat is er veranderd na het uitvoeren van de functie?
		**/
		bool top(T & topItem, int count);
		T stapel[50];

	private:
		int & count;
};  

template <class T>
array<T>::array(int & count){
	count = 0;
}

template <class T>
bool array<T>::isEmpty(int count){
	int i = 0;
	if(count == 0) return true;
	return false;
}

template <class T>
void array<T>::clear(int & count){
	for(int i = 0; i <= 50; i++){
		stapel[i] = NULL;
	}
	count = 0;
}

template <class T>
bool array<T>::push(T newItem, int & count){
	if(count >= 50) return false;
	stapel[count + 1] = newItem;
	count++;
	return true;
}

template <class T>
bool array<T>::pop(int & count){
	if(count <= 0) return false;
	stapel[count] = NULL;
	count--;
	return true;
}

template <class T>
bool array<T>::top(T & topItem, int count){
	if(isEmpty(count) == true) return false;
	topItem = stapel[count];
	//VVV gebruiken in main VVV
	//cout << "Bovenste element van de stapel is: " << stapel[count] << endl;
	return true;
}
