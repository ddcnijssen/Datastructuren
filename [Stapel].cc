/**
* klassenaam: beschrijving van klasse/programma
* @author Nijssen, Desley (s1474146)
* @author Slotegraaf, Minke (s1430793)
* @file [Stapel].cc
* @date datum laatste wijziging
**/
#include <iostream>
#include "array.h"
#include "pointers.h"
#include "STL_vector.h"
#include "STL_stack.h"

using namespace std;

template<class T>
void backspace(string invoer)
{
	T invoerstack;

	// Nog te implementeren: "backspace simulatie"
	invoerstack.push(invoer[0]);
	invoerstack.push('b');
	invoerstack.pop();

	// Nog te implementeren: Resultaat uitvoeren
	cout << invoerstack.top();
	cout << endl;
}

int main()
{
	// Lees een "woord" in, tot de eerste spatie
	string invoer;
	cin >> invoer;

        // Voer vier keer dezelfde test uit, op verschillende implementaties.
	// Voor je datastructuur ArrayStack, bijvoorbeeld:
	backspace<ArrayStack<char> >(invoer);

	return 0;
}
