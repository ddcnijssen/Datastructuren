/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file [Stapel].cc
* @date 19 september 2016
**/
#include <iostream>
#include <string>
#include "array.h"
#include "pointers.h"
#include "STL_vector.h"
#include "STL_stack.h"

using namespace std;

template<class T>
void undo(string invoer)
{
	T invoerstack;
  
	int i = 0;

	const char* invoerStr = invoer.c_str();

	while(invoerStr[i] != '\n' && invoerStr[i] != ' ' && invoerStr[i] != '\0'){
	// Nog te implementeren: "backspace simulatie" TODO
	  
		if(invoerStr[i] == '*'){
			invoerstack.pop();
		}
		else invoerstack.push(invoerStr[i]);
		i++;
	}
	
	char topItem;

	// Nog te implementeren: Resultaat uitvoeren TODO
	cout << invoerstack.top(topItem);
	cout << topItem;
	cout << endl;
}


int main()
{
	// Lees een "woord" in, tot de eerste spatie
	string invoer;
	cin >> invoer;

  // Voer vier keer dezelfde test uit, op verschillende implementaties.
	undo <array<char> >(invoer);
	//undo <pointers<char> >(invoer); 
	//undo <STL_stack<char> >(invoer);
	//undo <STL_vector<char> >(invoer);

	return 0;
}
