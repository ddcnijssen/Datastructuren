/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file array.h
* @date 19 september 2016
**/

template <class T> class array{
	public:
	   array();
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
		bool top(T & topItem);
		T stapel[50];
};  

template <class T>
array<T>::array(){}

template <class T>
bool array<T>::isEmpty(){
	if(stapel[0] == NULL) return true;
	return false;
}

template <class T>
void array<T>::clear(){
	for(int i = 0; i <= 50; i++){
		stapel[i] = NULL;
	}
}

template <class T>
bool array<T>::push(T newItem){
	int i = 0;
	while(stapel[i] != NULL){
		i++;	
	}
	if(stapel[50] != NULL) return false;
	stapel[i] = newItem;
	return true;
}

template <class T>
bool array<T>::pop(){
	int i = 0;	
	if(stapel[0] == NULL) return false;
	while(stapel[i] != NULL){
		i++;	
	}
	stapel[i-1] = NULL;
	return true;
}

template <class T>
bool array<T>::top(T & topItem){
	int i = 0;
	if(isEmpty() == true) return false;
	while(stapel[i] != NULL){
		i++;	
	}
	topItem = stapel[i-1];
	//VVV gebruiken in main VVV
	//cout << "Bovenste element van de stapel is: " << stapel[count] << endl;
	return true;
}
