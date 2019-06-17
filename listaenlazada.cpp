#include <iostream>
using namespace std;

template<class T>
class Nodo{
public:
    T elemento;
    Nodo *siguiente;
    Nodo(){elemento=NULL;
          *siguiente=NULL;}
    Nodo(T elemento){this->elemento=elemento;
                    *siguiente=NULL;}
    void print_Nodo(){cout<<elemento<<" -> ";}

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
       tam_lista++;
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
    //tam_lista++;
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

int main(){

Lista_Nodos<char> prueba;
int t;
cout<<"ingrese cantidad: ";
cin>>t;
prueba.llenar_Lista(t);
prueba.mostrar_Lista();

return 0;
}

/*#include <iostream>

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
        void mostrar(){
            Nodo<T> *temporal = nodo;
            if (nodo==NULL)
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

        NodoLista<char> l_en;
        int t;
        cout << "Ingrese cantidad de elementos: ";
        cin >> t;
        l_en.llenarLista(t);
        l_en.mostrar();
        return 0;
    }
    */
