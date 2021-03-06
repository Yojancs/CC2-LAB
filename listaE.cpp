
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


    void print_Nodo(){cout<<elemento<<" > ";}

};

template<class T>
class Lista_Nodos{
public:
    Nodo<T> *nodo_inicio;
    Nodo<T> *inicio;
    Nodo<T> *fin;
    int tam_lista;
    Lista_Nodos(){
       nodo_inicio=NULL;
       tam_lista=0;
       inicio=NULL;
       fin=NULL;
    }
    void insertar_inicio(T);
    void insertar_final(T);
    void llenar_Lista(int);
    void mostrar_Lista();
    void eliminar_nodo(T nodo_borrar);


};



template<class T>
void Lista_Nodos<T>::insertar_inicio(T dato){
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
        /*inicio=nuevo_Nodo;
    if(tam_lista==1)
        fin=nuevo_Nodo;
    }*/
}
}
template<class T>
void Lista_Nodos<T>::insertar_final(T dato){
    Nodo<T> *nuevo_Nodo=new Nodo<T>(dato);
    Nodo<T> *nodo_recorre=nodo_inicio;
    if(!nodo_inicio){
        nodo_inicio=nuevo_Nodo;
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
void Lista_Nodos<T>::llenar_Lista(int t){
            T dato;
            for (int i=0;i<t;++i)
            {
                cout << "Ingrese dato:" << i+1 <<" : ";
                cin >> dato;
                insertar_final(dato);
            }
}
template<class T>
void Lista_Nodos<T>::mostrar_Lista(){
            Nodo<T> *temporal =nodo_inicio;
            if (nodo_inicio==NULL)
            {
                cout <<"La lista no tiene elementos:"<<endl;
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


    void print_Nodo(){cout<<elemento<<" > ";}

};

template<class T>
class Lista_Nodos{
public:
    Nodo<T> *nodo_inicio;
    Nodo<T> *inicio;
    Nodo<T> *fin;
    int tam_lista;
    Lista_Nodos(){
       nodo_inicio=NULL;
       tam_lista=0;
    }
    void insertar_inicio(T);
    void insertar_final(T);
    void llenar_Lista(int);
    void mostrar_Lista();
    void eliminar_nodo(T nodo_borrar);
};



template<class T>
void Lista_Nodos<T>::insertar_inicio(T dato){
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
        /*inicio=nuevo_Nodo;
    if(tam_lista==1)
        fin=nuevo_Nodo;
    }*/
}
}
template<class T>
void Lista_Nodos<T>::insertar_final(T dato){
    Nodo<T> *nuevo_Nodo=new Nodo<T>(dato);
    Nodo<T> *nodo_recorre=nodo_inicio;
    if(!nodo_inicio){
        nodo_inicio=nuevo_Nodo;
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
void Lista_Nodos<T>::llenar_Lista(int t){
            T dato;
            for (int i=0;i<t;++i)
            {
                cout << "Ingrese dato:" << i+1 <<" : ";
                cin >> dato;
                insertar_final(dato);
            }
}
template<class T>
void Lista_Nodos<T>::mostrar_Lista(){
            Nodo<T> *temporal =nodo_inicio;
            if (nodo_inicio==NULL)
            {
                cout <<"La lista no tiene elementos:"<<endl;
            }
            else{
                while(temporal){
                    temporal->print_Nodo();
                    if (!temporal->siguiente)
                    {
                        cout << "NULL";
                    }
                    temporal = temporal->siguiente;
                }
            }
            cout << endl << endl;
}

/*template <class T>
void Lista_Nodos<T>::eliminar_Nodo()

*/
/*
template <class T>
class iterador{
public:
    Nodo<T> *nodo_inicial;
    iterador(){};
    ~iterador(){}
    iterador<T>operator++(int){
        iterador<T> iterator=*this;
        ++*this;
        return iterator;
        }
    iterador<T>&operator++(){
    if (nodo_inicial){
        nodo_inicial=nodo_inicial->siguiente;
    }
    return *this;
    }
    iterador<T> operator =(const Lista_Nodos<T> lista){
        this->nodo_inicial=lista.nodo_inicio;}
    T operator *(){
    return nodo_inicial->dato;
    }
    bool operator!=(const iterador<T> &compara){
        return nodo_inicial!=compara.nodo_inicio;
    }
};*/
int main(){

Lista_Nodos<char> prueba;
int t;
cout<<"ingrese cantidad: ";
cin>>t;
prueba.llenar_Lista(t);
prueba.mostrar_Lista();


return 0;
}

     }
            else{
                while(temporal){
                    temporal->print_Nodo();
                    if (!temporal->siguiente)
                    {
                        cout << "NULL";
                    }
                    temporal = temporal->siguiente;
                }
            }
            cout << endl << endl;
}



template <class T>
class iterador{
public:
    Nodo<T> *nodo_inicial;
    iterador(){}
    iterador(Nodo<T> *a){nodo_inicial=a;}
    ~iterador(){}

    iterador<T>operator++(int){
        iterador<T> iterator=*this;
        ++*this;
        return iterator;
        }

    iterador<T>&operator++(){
    if (nodo_inicial){
        nodo_inicial=nodo_inicial->siguiente;
    }
    return *this;
    }
    iterador<T> operator =(const Lista_Nodos<T> lista){
        this->nodo_inicial=lista.nodo_inicio;}
    T operator *(){
    return nodo_inicial->elemento;
    }
    bool operator!=(const iterador<T> &compara){
        return nodo_inicial!=compara.nodo_inicial;
    }
};
int main(){

Lista_Nodos<int> prueba;
int t;
cout<<"ingrese cantidad: ";
cin>>t;
prueba.llenar_Lista(t);

iterador<int> itera;
itera=prueba;

for(itera;itera!=NULL;itera++)
    cout<<*itera<<"->";

return 0;
}

