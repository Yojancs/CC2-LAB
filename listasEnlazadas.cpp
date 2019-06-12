#include <iostream>

using namespace std;
template <typename T>

class Nodo
{

public:
	T dato;
	Nodo *siguiente;
	Nodo(){
		dato=NULL;
		siguiente=NULL;
	}
	Nodo(T dato){
		this->dato=dato;
		siguiente = NULL;
	}

	~Nodo();
	void eliminarNodo(){
		if(siguiente)
			siguiente->eliminarNodo();
		delete this;
	}
	void imprimirNodo(){
		cout << dato << " -> ";
	}

};

template <typename T>
class NodoLista
{
private:
	Nodo<T> *nodo;
	//int num_nodo;
public:
	NodoLista(){
		nodo=NULL;
		//num_nodo=0;
	}
	~NodoLista(){}
	void insertarFinal(T dato){
		Nodo<T> *nuevoNodo = new Nodo<T>(dato);

		Nodo<T> *temporal = nodo;
		if (!nodo)
		{
			nodo = nuevoNodo;
		}
		else{
			while(temporal->siguiente != NULL){
				temporal = temporal->siguiente;
			}
			temporal->siguiente = nuevoNodo;
		}
		//num_nodo++;
	}

	void llenarLista(int tamanio){
		T dato;
		for (int i = 0; i < tamanio; ++i)
		{
			cout << "Ingrese dato:" << i+1 <<" : ";
			cin >> dato;
			insertarFinal(dato);
		}
	}
	void imprimir(){
		Nodo<T> *temporal = nodo;
		if (!nodo)
		{
			cout <<"La lista no tiene elementos:"<<endl;
		}
		else{
			while(temporal){
				temporal->imprimirNodo();
				if (!temporal->siguiente)
				{
					cout << "NULL";

				}
				temporal = temporal->siguiente;
			}
		}
		cout << endl << endl;
	}
};
int main()
{
	/* code */
	NodoLista<char> l_en;

	int t;
	cout << "Ingrese cantidad de elementos: ";
	cin >> t;
	l_en.llenarLista(t);
	l_en.imprimir();
	return 0;
}
