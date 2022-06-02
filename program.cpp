#include <iostream>
using namespace std;
//se declara variabilele numar,divizor,putere de tip intreg
//variabila numar memoreaza numarul citit de la tastatura
//variabila divizor este folosita pentru a identifica daca numar are divizori proprii
//variabila putere memoreaza puterea la care apare un factor prim
int numar, divizor, putere;
int main()
{
	//se citeste de la tastatura numarul 
	cout << "Introduceti numarul : ";
	cin >> numar;
	//variabila <divizor> este initializata cu 2 (primul posibil divizor propriu)
	divizor = 2;
	//se determina daca numarul are divizori proprii
	while (numar > 1)
	{
		putere = 0;//puterea este initializata cu 0, pentru ca de fiecare data cand se reia instructiunea while sa se
		// poata determina puterea la care apare factorul prim
		//se verifica daca numarul se imparte de mai multe ori la <divizor>
		while (numar%divizor == 0)
		{
			putere++; //se contorizeaza puterea la care apare factorul prim in descompunere
			numar = numar / divizor; //se imparte <numar> la <divizor> pentru a se putea continua impartirea si identificarea puterii
		}
		//daca <divizorul> se imparte macar o data la <numar> se afiseaza <divizor>, alaturi de puterea la care apare in descompunere
		//daca <putere> este 0 inseamna ca <divizor> nu se imparte deloc la <numar>
		if (putere > 0)
			cout << divizor << "^" << putere << " ";
		divizor = divizor + 1; //<divizor> se mareste cu 1, pentru a putea identifica si alti factori primi ai descompunerii
	}
}
