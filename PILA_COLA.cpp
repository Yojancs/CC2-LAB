#include <iostream>
using namespace std;
template<class T>
class Nodo{
public:
    T elemento;
    Nodo *siguiente;
    Nodo(){elemento=NULL;
           siguiente=NULL;}
    Nodo(T elemento){this->elemento=elemento;
                    siguiente=NULL;}

    void print_Nodo(){cout<<elemento<<endl;}

};


template<class T>
class Pila{
Nodo<T> *nodo_inicio;
int tam_lista;
public:
    Pila(){
       nodo_inicio=NULL;
       tam_lista=0;
    }
    void insertar_inicio(T);
    void llenar_Lista(int);
    void mostrar_Lista();
    int tamanio(){return tam_lista;}
    void extraer();
    bool vacio(){
    }
};


template<class T>
void Pila<T>::insertar_inicio(T dato){
    Nodo<T> *nuevo_Nodo=new Nodo<T> (dato);
    Nodo<T> *nodo_recorre=nodo_inicio;
    if(nodo_inicio==NULL){
        nodo_inicio=nuevo_Nodo;}
    else{
        nuevo_Nodo->siguiente=nodo_inicio;
        nodo_inicio=nuevo_Nodo;
        while(nodo_recorre==NULL){
            nodo_recorre=nodo_recorre->siguiente;
        }
}
}

template<class T>
void Pila<T>::mostrar_Lista(){
            Nodo<T> *temporal =nodo_inicio;
            if (nodo_inicio==NULL)
            {
                cout <<"La pila no tiene elementos:"<<endl;
            }
            else{
                while(temporal){
                    temporal->print_Nodo();
                    //if (!temporal->siguiente)
                    temporal = temporal->siguiente;
                }
            }
            cout << endl << endl;
}
template<class T>
void Pila<T>::extraer(){
    if (nodo_inicio!=NULL)
    {
        T informacion = nodo_inicio->elemento;
        Nodo<T> *bor = nodo_inicio;
        nodo_inicio = nodo_inicio->siguiente;
        delete bor;
    }
}

template<class T>
class cola{
Nodo<T> *nodoinicial;
Nodo<T> *cabeza;
int tam_lista;
public:
       cola(){
       nodoinicial=NULL;
       tam_lista=0;
    }
    void insertar_cola(T);
    void llenar_cola(int);
    void mostrar_cola();
    int tamanio(){return tam_lista;}
    void extraer_cola();
    T getCabeza(){return nodoinicial->elemento;}

};

template<class T>
void cola<T>::insertar_cola(T dato){
    Nodo<T> *nuevo_Nodo=new Nodo<T>(dato);
    Nodo<T> *nodo_recorre=nodoinicial;
    if(!nodoinicial){
        nodoinicial=nuevo_Nodo;
    }
    else{
        while(nodo_recorre->siguiente!=NULL){
            nodo_recorre=nodo_recorre->siguiente;
        }
        nodo_recorre->siguiente=nuevo_Nodo;
    }
    tam_lista++;
}
template<class T>
void cola<T>::extraer_cola(){
    if (nodoinicial!=NULL)
    {
        T informacion = nodoinicial->elemento;
        Nodo<T> *bor = nodoinicial;
        nodoinicial = nodoinicial->siguiente;
        delete bor;
    }
}

template<class T>
void cola<T>::mostrar_cola(){
            Nodo<T> *temporal =nodoinicial;
            if (nodoinicial==NULL)
            {
                cout <<"La cola no tiene elementos:"<<endl;PILA_COLA
            }
            else{
                while(temporal){
                    temporal->print_Nodo();
                    //if (!temporal->siguiente)
                    temporal = temporal->siguiente;
                }
            }
            cout << endl << endl;
}


int main(){

cout<<"--------PILA----------"<<endl;
Pila<int> prueba;

prueba.insertar_inicio(1);
prueba.insertar_inicio(2);
prueba.insertar_inicio(3);
prueba.mostrar_Lista();
prueba.extraer();
prueba.mostrar_Lista();

cout<<"---------COLA---------"<<endl;
cola<int> prueba1;
prueba1.insertar_cola(1);
prueba1.insertar_cola(2);
prueba1.insertar_cola(3);
prueba1.mostrar_cola();
prueba1.extraer_cola();
prueba1.mostrar_cola();
cout<<prueba1.getCabeza();

return 0;
}
