#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

class NodoViaje{
    public:
        NodoViaje(string v_idViaje, string v_origen, string v_destino, string v_fechaSalida, string v_fechaLlegada, string v_precio, string v_numPlazas){
            idViaje = v_idViaje;
            origen = v_origen;
            destino = v_destino;
            fechaSalida = v_fechaSalida;
            fechaLlegada = v_fechaLlegada;
            precio = v_precio;
            numPlazas = v_numPlazas;
            siguienteV = NULL;
            anteriorV = NULL;

        }
        NodoViaje(string v_idViaje, string v_origen, string v_destino, string v_fechaSalida, string v_fechaLlegada, string v_precio, string v_numPlazas, NodoViaje * signodo){
            idViaje = v_idViaje;
            origen = v_origen;
            destino = v_destino;
            fechaSalida = v_fechaSalida;
            fechaLlegada = v_fechaLlegada;
            precio = v_precio;
            numPlazas = v_numPlazas;
            siguienteV = signodo;
        }
    private:
        string idViaje;
        string origen;
        string destino;
        string fechaSalida;
        string fechaLlegada;
        string precio;
        string numPlazas;

        NodoViaje *siguienteV;
        NodoViaje *anteriorV;
        NodoViaje *nodoHotel;
        NodoViaje *nodoHotel2;
        NodoViaje *nodoOfertaHotel;
        NodoViaje *nodoOfertaHotel2;
        NodoViaje *nodoTransporte;
        NodoViaje *nodoTransporte2;
        //NodoViaje *siguienteViaje;

       friend class listaD;
       friend class listaDC;
       friend class ClaseLista;
       friend class NodoCliente;
       friend class NodoHotel;
       friend class NodoOfertaHotel;
       friend class NodoTransporte;
       friend class NodoReservaViaje;
       friend class NodoReservaHotel;
       friend class NodoReservaTransporte;
};
typedef NodoViaje *pnodoViaje;

class NodoHotel{
    public:
        NodoHotel(string h_idHotel, string h_nombre, string h_categoria, string h_ciudad, string h_precioHabIndiv, string h_precioHabDoble){
            idHotel = h_idHotel;
            nombre = h_nombre;
            categoria = h_categoria;
            ciudad = h_ciudad;
            precioHabIndiv = h_precioHabIndiv;
            precioHabDoble = h_precioHabDoble;
            siguienteH = NULL;
            anteriorH = NULL;
            nodoHotel = NULL;
            nodoHotel2 = NULL;
            NodoViaje *siguienteViaje = NULL;
        }
        NodoHotel(string h_idHotel, string h_nombre, string h_categoria, string h_ciudad, string h_precioHabIndiv, string h_precioHabDoble, NodoHotel *signodo){
            idHotel = h_idHotel;
            nombre = h_nombre;
            categoria = h_categoria;
            ciudad = h_ciudad;
            precioHabIndiv = h_precioHabIndiv;
            precioHabDoble = h_precioHabDoble;
            siguienteH = signodo;
    }
    private:
        string idHotel;
        string nombre;
        string categoria;
        string ciudad;
        string precioHabIndiv;
        string precioHabDoble;

        NodoHotel *siguienteH;
        NodoHotel *anteriorH;
        NodoHotel *nodoHotel;
        NodoHotel *nodoHotel2;
        NodoHotel *nodoOfertaHotel;
        NodoHotel *nodoOfertaHotel2;
        NodoHotel *nodoTransporte;
        NodoHotel *nodoTransporte2;
        NodoViaje *siguienteViaje;

    friend class listaD;
    friend class listaDC;
    friend class ClaseLista;
    friend class NodoCliente;
    friend class NodoOfertaHotel;
    friend class NodoTransporte;
    friend class NodoReservaViaje;
    friend class NodoReservaHotel;
    friend class NodoReservaTransporte;
    friend class NodoViaje;
};
typedef NodoHotel *pnodoHotel;

class NodoOfertaHotel{
    public:
        NodoOfertaHotel(string of_idViaje, string of_idHotel, string of_precioHabIndiv, string of_precioHabDoble){
            idViaje = of_idViaje;
            idHotel = of_idHotel;
            precioHabIndiv = of_precioHabIndiv;
            precioHabDoble = of_precioHabDoble;
            siguienteOF = NULL;
            anteriorOF = NULL;
            nodoOfertaHotel = NULL;
            nodoOfertaHotel2 = NULL;
            NodoHotel *siguienteHotelOF = NULL;
        }
        NodoOfertaHotel(string of_idViaje, string of_idHotel, string of_precioHabIndiv, string of_precioHabDoble, NodoOfertaHotel *signodo){
            idViaje = of_idViaje;
            idHotel = of_idHotel;
            precioHabIndiv = of_precioHabIndiv;
            precioHabDoble = of_precioHabDoble;
            siguienteOF = signodo;
        }
    private:
        string idViaje;
        string idHotel;
        string precioHabIndiv;
        string precioHabDoble;

        NodoOfertaHotel *siguienteOF;
        NodoOfertaHotel *anteriorOF;
        NodoOfertaHotel *nodoHotel;
        NodoOfertaHotel *nodoHotel2;
        NodoOfertaHotel *nodoOfertaHotel;
        NodoOfertaHotel *nodoOfertaHotel2;
        NodoHotel *siguienteHotel = NULL;

    friend class listaD;
    friend class listaDC;
    friend class ClaseLista;
    friend class NodoCliente;
    friend class NodoHotel;
    friend class NodoTransporte;
    friend class NodoReservaViaje;
    friend class NodoReservaHotel;
    friend class NodoReservaTransporte;
    friend class NodoViaje;
};
typedef NodoOfertaHotel *pnodoOfertaHotel;

class NodoTransporte{
    public:
        NodoTransporte(string t_idTransporte, string t_tipoTransporte, string t_origen, string t_destino, string t_fechaSalida, string t_horaSalida, string t_fechaLlegada, string t_horaLlegada, string t_compania, string t_numPlazas, string t_precio){
            idTransporte = t_idTransporte;
            tipoTransporte = t_tipoTransporte;
            origen = t_origen;
            destino = t_destino;
            fechaSalida = t_fechaSalida;
            horaSalida = t_horaSalida;
            fechaLlegada = t_fechaLlegada;
            horaLlegada = t_horaLlegada;
            compania = t_compania;
            numPlazas = t_numPlazas;
            precio = t_precio;
            siguienteT = NULL;
            anteriorT = NULL;
            NodoHotel *siguienteHotel = NULL;
        }
        NodoTransporte(string t_idTransporte, string t_tipoTransporte, string t_origen, string t_destino, string t_fechaSalida, string t_horaSalida, string t_fechaLlegada, string t_horaLlegada, string t_compania, string t_numPlazas, string t_precio, NodoTransporte *signodo){
            idTransporte = t_idTransporte;
            tipoTransporte = t_tipoTransporte;
            origen = t_origen;
            destino = t_destino;
            fechaSalida = t_fechaSalida;
            horaSalida = t_horaSalida;
            fechaLlegada = t_fechaLlegada;
            horaLlegada = t_horaLlegada;
            compania = t_compania;
            numPlazas = t_numPlazas;
            precio = t_precio;
            siguienteT = signodo;
        }
    private:
        string idTransporte;
        string tipoTransporte;
        string origen;
        string destino;
        string fechaSalida;
        string horaSalida;
        string fechaLlegada;
        string horaLlegada;
        string compania;
        string numPlazas;
        string precio;

        NodoTransporte *siguienteT;
        NodoTransporte *anteriorT;
        NodoTransporte *nodoHotel;
        NodoTransporte *nodoHotel2;
        NodoTransporte *nodoTransporte;
        NodoTransporte *nodoTransporte2;
        NodoHotel *siguienteHotel;

    friend class listaD;
    friend class listaDC;
    friend class ClaseLista;
    friend class NodoCliente;
    friend class NodoHotel;
    friend class NodoOfertaHotel;
    friend class NodoReservaViaje;
    friend class NodoReservaHotel;
    friend class NodoReservaTransporte;
    friend class NodoViaje;
};
typedef NodoTransporte *pnodoTransporte;

class NodoCliente{
    public:
        NodoCliente(string c_idCliente, string c_nombre, string c_apellido, string c_ciudad, string c_telefono){
            idCliente = c_idCliente;
            nombre = c_nombre;
            apellido = c_apellido;
            ciudad = c_ciudad;
            telefono = c_telefono;
            siguienteC = NULL;
            anteriorC = NULL;
        }
        NodoCliente(string c_idCliente, string c_nombre, string c_apellido, string c_ciudad, string c_telefono, NodoCliente *signodo){
            idCliente = c_idCliente;
            nombre = c_nombre;
            apellido = c_apellido;
            ciudad = c_ciudad;
            telefono = c_telefono;
            siguienteC = signodo;
        }
    private:
        string idCliente;
        string nombre;
        string apellido;
        string ciudad;
        string telefono;

        NodoCliente *siguienteC;
        NodoCliente *anteriorC;
        NodoCliente *nodoHotel;
        NodoCliente *nodoHotel2;

    friend class listaD;
    friend class listaDC;
    friend class ClaseLista;
    friend class NodoHotel;
    friend class NodoOfertaHotel;
    friend class NodoTransporte;
    friend class NodoReservaViaje;
    friend class NodoReservaHotel;
    friend class NodoReservaTransporte;
    friend class NodoViaje;
};
typedef NodoCliente *pnodoCliente;

class NodoReservaViaje{
    public:
        NodoReservaViaje(string rv_idCliente, string rv_idViaje, string rv_numPlazas){
            idCliente = rv_idCliente;
            idViaje = rv_idViaje;
            numPlazas = rv_numPlazas;
            siguienteRV = NULL;
            anteriorRV = NULL;
        }
        NodoReservaViaje(string rv_idCliente, string rv_idViaje, string rv_numPlazas, NodoReservaViaje *signodo){
            idCliente = rv_idCliente;
            idViaje = rv_idViaje;
            numPlazas = rv_numPlazas;
            siguienteRV = signodo;
        }
    private:
        string idCliente;
        string idViaje;
        string numPlazas;

        NodoReservaViaje *siguienteRV;
        NodoReservaViaje *anteriorRV;

    friend class listaD;
    friend class listaDC;
    friend class ClaseLista;
    friend class NodoCliente;
    friend class NodoHotel;
    friend class NodoOfertaHotel;
    friend class NodoTransporte;
    friend class NodoReservaHotel;
    friend class NodoReservaTransporte;
    friend class NodoViaje;
};
typedef NodoReservaViaje *pnodoReservaViaje;

class NodoReservaHotel{
    public:
         NodoReservaHotel(string rh_idCliente, string rh_idViaje, string rh_idHotel, string rh_fechaInicial, string rh_fechaFinal, string rh_precioHabitacion){
            idCliente = rh_idCliente;
            idViaje = rh_idViaje;
            idHotel = rh_idHotel;
            fechaSalida = rh_fechaInicial;
            fechaLlegada = rh_fechaFinal;
            precioHabitacion = rh_precioHabitacion;
            siguienteRH = NULL;
            anteriorRH = NULL;
        }
        NodoReservaHotel(string rh_idCliente, string rh_idViaje, string rh_idHotel, string rh_fechaInicial, string rh_fechaFinal, string rh_precioHabitacion, NodoReservaHotel *signodo){
            idCliente = rh_idCliente;
            idViaje = rh_idViaje;
            idHotel = rh_idHotel;
            fechaSalida = rh_fechaInicial;
            fechaLlegada = rh_fechaFinal;
            precioHabitacion = rh_precioHabitacion;
            siguienteRH = signodo;
        }
    private:
        string idCliente;
        string idViaje;
        string idHotel;
        string fechaSalida;
        string fechaLlegada;
        string precioHabitacion;

        NodoReservaHotel *siguienteRH;
        NodoReservaHotel *anteriorRH;
    friend class listaD;
    friend class listaDC;
    friend class ClaseLista;
    friend class NodoCliente;
    friend class NodoHotel;
    friend class NodoOfertaHotel;
    friend class NodoTransporte;
    friend class NodoReservaViaje;
    friend class NodoReservaTransporte;
    friend class NodoViaje;
};
typedef NodoReservaHotel *pnodoReservaHotel;

class NodoReservaTransporte{
    public:
        NodoReservaTransporte(string rvt_idCliente, string rvt_idViaje, string rvt_idTransporte){
            idCliente = rvt_idCliente;
            idViaje = rvt_idViaje;
            idTransporte = rvt_idTransporte;
            siguienteRT = NULL;
            anteriorRT = NULL;

        }
        NodoReservaTransporte(string rvt_idCliente, string rvt_idViaje, string rvt_idTransporte, NodoReservaTransporte *signodo){
            idCliente = rvt_idCliente;
            idViaje = rvt_idViaje;
            idTransporte = rvt_idTransporte;
            siguienteRT = signodo;
        }
    private:
        string idCliente;
        string idViaje;
        string idTransporte;

        NodoReservaTransporte *siguienteRT;
        NodoReservaTransporte *anteriorRT;


    friend class listaD;
    friend class listaDC;
    friend class ClaseLista;
    friend class NodoCliente;
    friend class NodoHotel;
    friend class NodoOfertaHotel;
    friend class NodoTransporte;
    friend class NodoReservaViaje;
    friend class NodoReservaHotel;
    friend class NodoViaje;
};
typedef NodoReservaTransporte *pnodoReservaTransporte;

class nodo {
   public:
    nodo(string v)
    {
       valor = v;
       siguiente = NULL;
       anterior = NULL;
    }

    nodo(string v, nodo * signodo)
    {
       valor = v;
       siguiente = signodo;
    }

   private:
    string valor;

    nodo *siguiente;
    nodo *anterior;

   friend class listaD;
   friend class listaDC;
   friend class ClaseLista;
    friend class NodoViaje;
    friend class NodoCliente;
    friend class NodoHotel;
    friend class NodoOfertaHotel;
    friend class NodoTransporte;
    friend class NodoReservaViaje;
    friend class NodoReservaHotel;
    friend class NodoReservaTransporte;
};

typedef nodo *pnodo;


class listaD {
   public:
    listaD() { primero = actual = NULL; }
    ~listaD();

    void InsertarInicio(int v);
    void InsertarFinal(int v);
    void InsertarPos (int v, int pos);
    void EliminarInicio();
    void EliminarFinal();
    void EliminarPos(int pos);
    bool ListaVacia() { return primero == NULL; }
    void Imprimir();
    void Borrar(int v);
    void Mostrar();
    void Siguiente();
    void Primero();
    void Ultimo();
    void BorrarFinal();
    void BorrarInicio();
    void borrarPosicion(int pos);
    int largoLista();

   private:
    pnodo primero;
    pnodo actual;
};

class listaDC {
   public:
    listaDC() { primero = actual = NULL; }
    ~listaDC();

    bool ListaVaciaDC() { return primero == NULL; } ;
    void InsertarInicioDC(int v);
    void InsertarFinalDC(int v);
    void InsertarPosDC(int v, int pos);
    void BorrarFinalDC();
    void BorrarInicioDC();
    void BorrarPosicionDC(int pos);
    void SiguienteDC();
    void PrimeroDC();
    void UltimoDC();
    int LargoListaDC();
    void MostrarDC();

   private:
    pnodo primero;
	pnodo actual;

};

class ClaseLista {
   public:
    ClaseLista() { primero = actual = NULL; primeroV = actualV = NULL; primeroH = actualH = NULL; primeroT = actualT = NULL; primeroOF = actualOF = NULL; primeroC = actualC = NULL;
     primeroRV = actualRV = NULL; primeroRH = actualRH = NULL; primeroRT = actualRT = NULL; }
    ~ClaseLista();

    void InsertarInicio(string v);
    void InsertarFinal(string v);
    void InsertarPos (string v, int pos);
    void EliminarInicio();
    void EliminarFinal();
    void EliminarPos(string pos);
    bool ListaVacia() { return primero == NULL; }
    bool ListaVaciaV() { return primeroV == NULL; }
    bool ListaVaciaH() { return primeroH == NULL; }
    bool ListaVaciaT() { return primeroT == NULL; }
    bool ListaVaciaOF() { return primeroOF == NULL; }
    bool ListaVaciaC() { return primeroC == NULL; }
    bool ListaVaciaRV() { return primeroRV == NULL; }
    bool ListaVaciaRH() { return primeroRH == NULL; }
    bool ListaVaciaRT() { return primeroRT == NULL; }
    void Imprimir();
    void Borrar(string v);
    void Mostrar();
    void Siguiente();
    void Primero();
    void Ultimo();
    void BorrarFinal();
    void BorrarInicio();
    void borrarPosicion(int pos);
    int largoLista();

    void InsertarInicioDC(string v);
    void InsertarFinalDC(string v);
    void InsertarPosDC(string v, int pos);
    void BorrarInicioDC();
    void BorrarFinalDC();
    void MostrarDC();
    int largoListaDC();

    bool buscarElemento(string v);
    void Proyecto1();

    void InsertarFinalViajes(string v_idViaje, string v_origen, string v_destino, string v_fechaSalida, string v_fechaLlegada, string v_precio, string v_numPlazas);
    void InsertarFinalHoteles(string h_idHotel, string h_nombre, string h_categoria, string h_ciudad, string h_precioHabIndiv, string h_precioHabDoble);
    void InsertarFinalTransportes(string t_idTransporte, string t_tipoTransporte, string t_origen, string t_destino, string t_fechaSalida, string t_horaSalida, string t_fechaLlegada, string t_horaLlegada, string t_compania, string t_numPlazas, string t_precio);
    void InsertarFinalOfertaHotel(string of_idViaje, string of_idHotel, string of_precioHabIndiv, string of_precioHabDoble);
    void InsertarFinalCliente(string c_idCliente, string c_nombre, string c_apellido, string c_ciudad, string c_telefono);
    void InsertarFinalReservaViajes(string rv_idCliente, string rv_idViaje, string rv_numPlazas);
    void InsertarFinalReservaHoteles(string rh_idCliente, string rh_idViaje, string rh_idHotel, string rh_fechaInicial, string rh_fechaFinal, string rh_precioHabitacion);
    void InsertarFinalReservaViajesTrasportes(string rvt_idCliente, string rvt_idViaje, string rvt_idTransporte);

    void MostrarViaje();
    void MostrarHotel();
    void MostrarTransporte();
    void MostrarOfertaTransporte();
    void MostrarCliente();
    void MostrarReservaViajes();
    void MostrarReservaHoteles();
    void MostrarReservaViajeTransportes();

    int largoListaViaje();
    int largoListaCliente();
    int largoListaHotel();
    int largoListaOfertaHotel();

   private:
    pnodo primero;
    pnodo actual;

    pnodoViaje primeroV;
    pnodoViaje actualV;

    pnodoHotel primeroH;
    pnodoHotel actualH;

    pnodoOfertaHotel primeroOF;
    pnodoOfertaHotel actualOF;

    pnodoTransporte primeroT;
    pnodoTransporte actualT;

    pnodoCliente primeroC;
    pnodoCliente actualC;

    pnodoReservaViaje primeroRV;
    pnodoReservaViaje actualRV;

    pnodoReservaHotel primeroRH;
    pnodoReservaHotel actualRH;

    pnodoReservaTransporte primeroRT;
    pnodoReservaTransporte actualRT;
};


ClaseLista::~ClaseLista(){
   pnodo aux;
   pnodoViaje auxViaje;
   pnodoHotel auxHotel;
   pnodoOfertaHotel auxOfertaHotel;
   pnodoTransporte auxTransporte;
   pnodoCliente auxCliente;
   pnodoReservaViaje auxReservaCliente;
   pnodoReservaHotel auxReservaHotel;
   pnodoReservaTransporte auxReservaTransporte;

   while(primero) {
      aux = primero;
      primero = primero->siguiente;
      delete aux;
   }
   actual = NULL;

   while(primeroV) {
      auxViaje = primeroV;
      primeroV = primeroV->siguienteV;
      delete auxViaje;
   }
   actualV = NULL;

   while(primeroH) {
      auxHotel = primeroH;
      primeroH = primeroH->siguienteH;
      delete auxHotel;
   }
   actualH = NULL;

   while(primeroOF) {
      auxOfertaHotel = primeroOF;
      primeroOF = primeroOF->siguienteOF;
      delete auxOfertaHotel;
   }
   actualOF = NULL;

   while(primeroT) {
      auxTransporte = primeroT;
      primeroT = primeroT->siguienteT;
      delete auxTransporte;
   }
   actualT = NULL;

   while(primeroC) {
      auxCliente = primeroC;
      primeroC = primeroC->siguienteC;
      delete auxCliente;
   }
   actualC = NULL;

   while(primeroRV) {
      auxReservaCliente = primeroRV;
      primeroRV = primeroRV->siguienteRV;
      delete auxReservaCliente;
   }
   actualRV = NULL;

   while(primeroRH) {
      auxReservaHotel = primeroRH;
      primeroRH = primeroRH->siguienteRH;
      delete auxReservaHotel;
   }
   actualRH = NULL;

   while(primeroRT) {
      auxReservaTransporte = primeroRT;
      primeroRT = primeroRT->siguienteRT;
      delete auxReservaTransporte;
   }
   actualRT = NULL;
}

int ClaseLista::largoLista(){
    int cont=0;

    pnodo aux;
    aux = primero;
    if(ListaVacia()){
        return cont;
    }else{
        while(aux!=NULL){
        aux=aux->siguiente;
        cont++;
    }
    return cont;
    }

}

void ClaseLista::InsertarInicio(string v){
   if (ListaVacia())
     primero = new nodo(v);
   else
   {
     primero=new nodo (v,primero);
     primero->siguiente->anterior=primero;
   }
}

void ClaseLista::InsertarFinal(string v){
   if (ListaVacia())
     primero = new nodo(v);
   else
     { pnodo aux = primero;
        while ( aux->siguiente != NULL)
          aux= aux->siguiente;
        aux->siguiente=new nodo(v);
        aux->siguiente->anterior=aux;
      }
}

void ClaseLista::InsertarPos(string v,int pos){
   if (ListaVacia())
     primero = new nodo(v);
   else{
        if(pos <=1)
          InsertarInicio(v);
        else
        {
             pnodo aux= primero;
             int i =2;
             while((i != pos )&&(aux->siguiente!= NULL)){
                   i++;
                   aux=aux->siguiente;
             }
             pnodo nuevo= new nodo(v);
             nuevo->siguiente=aux->siguiente;
             aux->siguiente=nuevo;
             aux->siguiente->anterior=aux;
             nuevo->siguiente->anterior=nuevo;
        }
        }
}

void ClaseLista::BorrarFinal(){
    if (ListaVacia()){
     cout << "No hay elementos en la lista:" << endl;

   }else{
        if (primero->siguiente == NULL) {
                primero= NULL;
            } else {

                pnodo aux = primero;
                while (aux->siguiente->siguiente != NULL)
                {
                    aux = aux->siguiente;
                }

              pnodo temp = aux->siguiente;
              aux->siguiente= NULL;


                delete temp;
            }
        }
}

void ClaseLista::BorrarInicio(){
    if (ListaVacia()){
     cout << "No hay elementos en la lista:" << endl;

   }else{
        if (primero->siguiente == NULL) {
                primero= NULL;
            } else {

                pnodo aux = primero;
                primero=primero->siguiente;
                delete aux;
            }
        }
}

void ClaseLista::borrarPosicion(int pos){
     if(ListaVacia())
     {
              cout << "Lista vacia" <<endl;
     }
     else
     {
        if((pos>largoLista())||(pos<0))
        {
        cout << "Error en posicion" << endl;
        }
        else
        {
        if(pos==1)
           BorrarInicio();
        else
        {
          if (pos == largoLista())
             BorrarFinal();
          else
          {
            int cont=2;
            pnodo aux=  primero;
            while(cont<pos)
            {
             aux=aux->siguiente;
             cont++;
            }
            pnodo temp=aux->siguiente;
            aux->siguiente=aux->siguiente->siguiente;
            aux->siguiente->anterior=aux;
            delete temp;
          }//else
        }//else
      }//else
    }//else
}

void ClaseLista::Mostrar(){
   nodo *aux;

   aux = primero;
   while(aux) {
      cout << aux->valor << "-> ";
      aux = aux->siguiente;
   }
   cout << endl;
}

void ClaseLista::Siguiente(){
   if(actual) actual = actual->siguiente;
}

void ClaseLista::Primero(){
   actual = primero;
}

void ClaseLista::Ultimo(){
   actual = primero;
   if(!ListaVacia())
      while(actual->siguiente) Siguiente();
}


//-----------Lista doble circular-----------//


void ClaseLista::InsertarInicioDC(string v){
	if(ListaVacia()){
		primero = new nodo(v);
		primero -> siguiente = primero;
		primero -> anterior = primero;
	}
	else{
		pnodo Nuevo = new nodo(v,primero);
		primero -> anterior -> siguiente = Nuevo;
		Nuevo -> anterior = primero -> anterior;
		primero -> anterior = Nuevo;
		primero = Nuevo;
	}
}

void ClaseLista::InsertarFinalDC(string v){
	if(ListaVacia()){
		primero = new nodo(v);
		primero -> siguiente = primero;
		primero -> anterior = primero;
	}
	else{
		pnodo aux = primero;

		while(aux -> siguiente != primero){
			aux = aux -> siguiente;
		}
		pnodo Nuevo = new nodo(v);
		Nuevo -> siguiente = primero;
		Nuevo -> anterior = aux;
		aux -> siguiente = Nuevo;
		primero -> anterior = Nuevo;
	}
}

void ClaseLista::InsertarPosDC(string v, int pos){
	if(ListaVacia()){
		primero = new nodo(v);
		primero -> siguiente = primero;
		primero -> anterior = primero;
	}
	else{
		if(pos <= 1){
			InsertarInicioDC(v);
		}
		else{
			pnodo aux = primero;
			int i = 2;
			while ((i != pos) && (aux -> siguiente != primero)){
				i++;
				aux = aux -> siguiente;
			}
			pnodo Nuevo = new nodo(v);
			Nuevo -> siguiente = aux -> siguiente;
			aux -> siguiente = Nuevo;
			Nuevo -> anterior = aux;
			Nuevo -> siguiente -> anterior = Nuevo;
		}
	}
}

void ClaseLista::BorrarInicioDC(){
	if(ListaVacia()){
		cout <<  "No hay elementos en la lista" << endl;
	}
	else{
		if(primero -> siguiente == primero){
			pnodo aux = primero;
			primero = NULL;
			delete aux;
		}
		else{
			pnodo aux = primero;
			primero = aux -> siguiente;
			primero -> anterior = aux -> anterior;
			primero -> anterior -> siguiente = primero;
			delete aux;
		}
	}
}

void ClaseLista::BorrarFinalDC(){
	if(ListaVacia()){
		cout << "No hay elementos en la lista" << endl;
	}
	else{
		if(primero -> siguiente == primero){
			pnodo aux = primero;
			primero = NULL;
			delete  aux;
		}
		else{
			pnodo aux = primero;
			while (aux -> siguiente -> siguiente != primero){
				aux = aux -> siguiente;
			}
			pnodo temp = aux -> siguiente;
			aux -> siguiente  = primero;
			primero -> anterior = aux;
			delete temp;

		}
	}
}

void ClaseLista::MostrarDC(){
   nodo *aux;

   aux = primero;
   while(aux->siguiente != primero) {
      cout << aux->valor << "-> ";
      aux = aux->siguiente;
   }
   cout << aux -> valor << "->";
   cout <<"NULL" << endl;
}

int ClaseLista::largoListaDC(){ // Modificada
    int cont=0;

    pnodoCliente auxCliente;
    auxCliente = primeroC;
    if(ListaVaciaC()){
        return cont;
    }else{
        while(auxCliente->siguienteC != primeroC){
        auxCliente=auxCliente->siguienteC;
        cont++;
    }
    return cont;
    }

}

//------------------------------------------//

void ClaseLista::InsertarFinalViajes(string v_idViaje, string v_origen, string v_destino, string v_fechaSalida, string v_fechaLlegada, string v_precio, string v_numPlazas){
	if(ListaVaciaV()){
		primeroV = new NodoViaje(v_idViaje, v_origen, v_destino, v_fechaSalida, v_fechaLlegada, v_precio, v_numPlazas);
		primeroV -> siguienteV = primeroV;
		primeroV -> anteriorV = primeroV;
	}
	else{
		pnodoViaje auxViaje = primeroV;

		while(auxViaje -> siguienteV != primeroV){
			auxViaje = auxViaje -> siguienteV;
		}
		pnodoViaje Nuevo = new NodoViaje(v_idViaje, v_origen, v_destino, v_fechaSalida, v_fechaLlegada, v_precio, v_numPlazas);
		Nuevo -> siguienteV = primeroV;
		Nuevo -> anteriorV = auxViaje;
		auxViaje -> siguienteV = Nuevo;
		primeroV -> anteriorV = Nuevo;
	}
}

void ClaseLista::InsertarFinalHoteles(string h_idHotel, string h_nombre, string h_categoria, string h_ciudad, string h_precioHabIndiv, string h_precioHabDoble){
   if (ListaVaciaH())
     primeroH = new NodoHotel(h_idHotel, h_nombre, h_categoria, h_ciudad, h_precioHabIndiv, h_precioHabDoble);
   else
     { pnodoHotel auxHotel = primeroH;
        while ( auxHotel->siguienteH != NULL)
          auxHotel= auxHotel->siguienteH;
        auxHotel->siguienteH=new NodoHotel(h_idHotel, h_nombre, h_categoria, h_ciudad, h_precioHabIndiv, h_precioHabDoble);
        auxHotel->siguienteH->anteriorH=auxHotel;
      }
}

void ClaseLista::InsertarFinalTransportes(string t_idTransporte, string t_tipoTransporte, string t_origen, string t_destino, string t_fechaSalida, string t_horaSalida, string t_fechaLlegada, string t_horaLlegada, string t_compania, string t_numPlazas, string t_precio){
   if (ListaVaciaT())
     primeroT = new NodoTransporte(t_idTransporte, t_tipoTransporte, t_origen, t_destino, t_fechaSalida, t_horaSalida, t_fechaLlegada, t_horaLlegada, t_compania, t_numPlazas, t_precio);
   else
     { pnodoTransporte auxTransporte = primeroT;
        while (auxTransporte->siguienteT != NULL)
          auxTransporte= auxTransporte->siguienteT;
        auxTransporte->siguienteT=new NodoTransporte(t_idTransporte, t_tipoTransporte, t_origen, t_destino, t_fechaSalida, t_horaSalida, t_fechaLlegada, t_horaLlegada, t_compania, t_numPlazas, t_precio);
        auxTransporte->siguienteT->anteriorT=auxTransporte;
      }

}

void ClaseLista::InsertarFinalOfertaHotel(string of_idViaje, string of_idHotel, string of_precioHabIndiv, string of_precioHabDoble){
   if (ListaVaciaOF())
     primeroOF = new NodoOfertaHotel(of_idViaje, of_idHotel, of_precioHabIndiv, of_precioHabDoble);
   else
     { pnodoOfertaHotel aux = primeroOF;
        while ( aux->siguienteOF != NULL)
          aux= aux->siguienteOF;
        aux->siguienteOF=new NodoOfertaHotel(of_idViaje, of_idHotel, of_precioHabIndiv, of_precioHabDoble);
        aux->siguienteOF->anteriorOF=aux;
      }

}

void ClaseLista::InsertarFinalCliente(string c_idCliente, string c_nombre, string c_apellido, string c_ciudad, string c_telefono){
	if(ListaVaciaC()){
		primeroC = new NodoCliente(c_idCliente, c_nombre, c_apellido, c_ciudad, c_telefono);
		primeroC -> siguienteC = primeroC;
		primeroC -> anteriorC = primeroC;
	}
	else{
		pnodoCliente aux = primeroC;

		while(aux -> siguienteC != primeroC){
			aux = aux -> siguienteC;
		}
		pnodoCliente Nuevo = new NodoCliente(c_idCliente, c_nombre, c_apellido, c_ciudad, c_telefono);
		Nuevo -> siguienteC = primeroC;
		Nuevo -> anteriorC = aux;
		aux -> siguienteC = Nuevo;
		primeroC -> anteriorC = Nuevo;
	}
}

void ClaseLista::InsertarFinalReservaViajes(string rv_idCliente, string rv_idViaje, string rv_numPlazas){
   if (ListaVaciaRV())
     primeroRV = new NodoReservaViaje(rv_idCliente, rv_idViaje, rv_numPlazas);
   else
     { pnodoReservaViaje aux = primeroRV;
        while ( aux->siguienteRV != NULL)
          aux= aux->siguienteRV;
        aux->siguienteRV=new NodoReservaViaje(rv_idCliente, rv_idViaje, rv_numPlazas);
        aux->siguienteRV->anteriorRV=aux;
      }
}

void ClaseLista::InsertarFinalReservaHoteles(string rh_idCliente, string rh_idViaje, string rh_idHotel, string rh_fechaInicial, string rh_fechaFinal, string rh_precioHabitacion){
   if (ListaVaciaRH())
     primeroRH = new NodoReservaHotel(rh_idCliente, rh_idViaje, rh_idHotel, rh_fechaInicial, rh_fechaFinal, rh_precioHabitacion);
   else
     { pnodoReservaHotel aux = primeroRH;
        while ( aux->siguienteRH != NULL)
          aux= aux->siguienteRH;
        aux->siguienteRH=new NodoReservaHotel(rh_idCliente, rh_idViaje, rh_idHotel, rh_fechaInicial, rh_fechaFinal, rh_precioHabitacion);
        aux->siguienteRH->anteriorRH=aux;
      }
}

void ClaseLista::InsertarFinalReservaViajesTrasportes(string rvt_idCliente, string rvt_idViaje, string rvt_idTransporte){
   if (ListaVaciaRT())
     primeroRT = new NodoReservaTransporte(rvt_idCliente, rvt_idViaje, rvt_idTransporte);
   else
     { pnodoReservaTransporte aux = primeroRT;
        while ( aux->siguienteRT != NULL)
          aux= aux->siguienteRT;
        aux->siguienteRT=new NodoReservaTransporte(rvt_idCliente, rvt_idViaje, rvt_idTransporte);
        aux->siguienteRT->anteriorRT=aux;
      }
}


void ClaseLista::MostrarViaje(){
    NodoViaje *auxViaje;
    auxViaje = primeroV;

    cout << "-Viajes disponibles:\n" << endl;
    int cont = 0;
    while(cont != largoListaViaje()){ // aux->siguienteV != primeroV cont < largoListaViaje()
        cout << "idViaje: " << auxViaje->idViaje << endl;
        cout << "Origen: " << auxViaje->origen << endl;
        cout << "Destino: " << auxViaje->destino << endl;
        cout << "Fecha salida: " << auxViaje->fechaSalida << endl;
        cout << "Hora llegada: " << auxViaje->fechaLlegada << endl;
        cout << "Precio: " << auxViaje->precio << endl;
        cout << "Numero de plazas: " << auxViaje->numPlazas << endl;
        cout << "\n" << endl;

        auxViaje = auxViaje -> siguienteV;
        cont++;
    }
    cout << "-Fin de viajes."  << endl;
}

void ClaseLista::MostrarHotel(){
    NodoHotel *aux;
    aux = primeroH;

    cout << "-Hoteles disponibles:\n" << endl;

    while(aux != NULL){
        cout << "idHotel: " << aux->idHotel << endl;
        cout << "Nombre: " << aux->nombre << endl;
        cout << "Categoria:" << aux->categoria << endl;
        cout << "Ciudad: " << aux->ciudad << endl;
        cout << "Precio habitacion individual: " << aux->precioHabIndiv << endl;
        cout << "Precio habitacion doble: " << aux->precioHabDoble << endl;
        cout << "\n" << endl;

        aux = aux->siguienteH;
    }
    cout << "-Fin de hoteles."  << endl;
}

void ClaseLista::MostrarTransporte(){
    NodoTransporte *aux;
    aux = primeroT;

    cout << "-Transportes disponibles:\n" << endl;

    while(aux != NULL){
        cout << "idTransporte: " << aux->idTransporte << endl;
        cout << "Tipo transporte: " << aux->tipoTransporte << endl;
        cout << "Origen: " << aux->origen << endl;
        cout << "Destino: " << aux->destino << endl;
        cout << "Fecha salida: " << aux->fechaSalida << endl;
        cout << "Hora salida: " << aux->horaSalida << endl;
        cout << "Fecha llegada: " << aux->fechaLlegada << endl;
        cout << "Hora llegada: " << aux->horaLlegada << endl;
        cout << "Compania: " << aux->compania << endl;
        cout << "Numeros plazas: " << aux->numPlazas << endl;
        cout << "Precio: " << aux->precio << endl;

        cout << "\n" << endl;

        aux = aux->siguienteT;
    }
    cout << "-Fin de transportes."  << endl;

}

void ClaseLista::MostrarOfertaTransporte(){
    NodoOfertaHotel *aux;
    aux = primeroOF;

    cout << "-Ofertas de Transportes disponibles:\n" << endl;

    while(aux != NULL){
        cout << "idViaje: " << aux->idViaje << endl;
        cout << "idHotel: " << aux->idHotel << endl;
        cout << "Precio habitacion individual: " << aux->precioHabIndiv << endl;
        cout << "Precio habitacion doble: " << aux->precioHabDoble << endl;
        cout << "\n" << endl;

        aux = aux->siguienteOF;
    }
    cout << "-Fin de ofertas transportes."  << endl;

}

void ClaseLista::MostrarCliente(){
    NodoCliente *aux;
    aux = primeroC;

    cout << "-Clientes disponibles:\n" << endl;
    int cont = 0;
    while(cont != largoListaCliente()){
        cout << "idCliente: " << aux->idCliente << endl;
        cout << "Nombre: " << aux->nombre << endl;
        cout << "Apellido: " << aux->apellido << endl;
        cout << "Ciudad: " << aux->ciudad << endl;
        cout << "Telefono: " << aux->telefono << endl;
        cout << "\n" << endl;

        aux = aux->siguienteC;
        cont++;
    }
    cout << "-Fin de clientes."  << endl;
}

void ClaseLista::MostrarReservaViajes(){
    NodoReservaViaje *aux;
    aux = primeroRV;

    cout << "\n-Reservaciones de viajes disponibles:\n" << endl;

    while(aux != NULL){
        cout << "idCliente: " << aux->idCliente << endl;
        cout << "idViaje: " << aux->idViaje << endl;
        cout << "Numero de plazas: " << aux->numPlazas << endl;
        cout << "\n" << endl;

        aux = aux->siguienteRV;
    }
}

void ClaseLista::MostrarReservaHoteles(){
    NodoReservaHotel *aux;
    aux = primeroRH;

    cout << "\n-Reservaciones de hoteles disponibles:\n" << endl;

    while(aux != NULL){
        cout << "idCliente: " << aux->idCliente << endl;
        cout << "idViaje: " << aux->idViaje << endl;
        cout << "idHotel: " << aux->idHotel << endl;
        cout << "Fecha Inicial: " << aux->fechaSalida << endl;
        cout << "Fecha final: " << aux->fechaLlegada << endl;
        cout << "Precio habitacion: " << aux->precioHabitacion << endl;
        cout << "\n" << endl;

        aux = aux->siguienteRH;
    }
}

void ClaseLista::MostrarReservaViajeTransportes(){
    NodoReservaTransporte *aux;
    aux = primeroRT;

    cout << "\n-Reservaciones de transportes disponibles:\n" << endl;

    while(aux != NULL){
        cout << "idCliente: " << aux->idCliente << endl;
        cout << "idViaje: " << aux->idViaje << endl;
        cout << "idTransporte: " << aux->idTransporte << endl;
        cout << "\n" << endl;

        aux = aux->siguienteRT;
    }
}


int ClaseLista::largoListaViaje(){
    int cont=0;
    pnodoViaje auxViaje;
    auxViaje = primeroV;
    if(ListaVaciaV()){
        return cont;
    }else{
        cont =  1;
        do{
            auxViaje=auxViaje->siguienteV;
            cont++;
        }while(auxViaje->siguienteV != primeroV);

        return cont;
    }
}

int ClaseLista::largoListaCliente(){
    int cont=0;
    pnodoCliente auxCliente;
    auxCliente = primeroC;
    if(ListaVaciaC()){
        return cont;
    }else{
        cont =  1;
        do{
            auxCliente=auxCliente->siguienteC;
            cont++;
        }while(auxCliente->siguienteC != primeroC);
        return cont;
    }
}

int ClaseLista::largoListaHotel(){
    int cont=0;
    pnodoHotel auxHotel;
    auxHotel = primeroH;
    if(ListaVaciaH()){
        return cont;
    }else{
        cont =  1;
        do{
            auxHotel=auxHotel->siguienteH;
            cont++;
        }while(auxHotel->siguienteH != primeroH);
        return cont;
    }
}

int ClaseLista::largoListaOfertaHotel(){
    int cont=0;
    pnodoOfertaHotel auxOfertaHotel;
    auxOfertaHotel = primeroOF;
    if(ListaVaciaOF()){
        return cont;
    }else{
        cont =  1;
        do{
            auxOfertaHotel=auxOfertaHotel->siguienteOF;
            cont++;
        }while(auxOfertaHotel->siguienteOF != primeroOF);
        return cont;
    }
}

bool ClaseLista::buscarElemento(string v){
	pnodo aux;
	aux = primero;

	if(ListaVacia())
		return false;
	else{
		while(aux != NULL){
			if(aux -> valor == v){
				return true;
			}
			else
				aux = aux -> siguiente;
		}
		return false;
	}
}

void imprimirMenu(){
    cout << "\n-------------------Bienvenido al Sistema de Reservaciones!-------------------\n" << endl;

    cout << "[0] - Consultar precio de un producto." << endl; //Viaje,Hotel o Transporte
    cout << "[1] - Consultar hoteles, viajes y transportes." << endl; //Mostrar las listas
    cout << "[2] - Consultar el viaje de un cliente, su transporte o su hotel." << endl; //Ver descripcion
    cout << "[3] - Consultar el origen y el destino de un viaje." << endl;
    cout << "[4] - Consultar la informacion de un cliente." << endl;
    cout << "[5] - Consultar la categoria de un hotel." << endl;
    cout << "[6] - Precio a pagar por el viaje." << endl;
    cout << "[7] - Realizar reservacion." << endl;  //Viaje, hotel y transporte
    cout << "[8] - Salir del sistema." << endl;
}

int leerOpcion(){
    cout << "\nIngrese el numero correspondiente a la accion que desea ejecutar:" << endl;

    int opcion;
    cin >> opcion;

    while(opcion < 0 || opcion >= 9){
        cout << "Ha ingresado una opcion invalida. Intente nuevamente:" << endl;
        cin >> opcion;
    }
    //PENDIENTE: validar para los string's

    return opcion;
}



void ClaseLista::Proyecto1(){

    ClaseLista ListaViajes;         //Lista doble circular
    ClaseLista ListaIDViajes;       //Lista doble - Almacena ID's para comparar repetidos

    ClaseLista ListaHoteles;        //Lista doble
    ClaseLista ListaIDHoteles;      //Lista doble - Almacena ID's para comparar repetidos

    ClaseLista ListaTransportes;    //Lista doble
    ClaseLista ListaIDTransportes;  //Lista doble - Almacena ID's para comparar repetidos

    ClaseLista ListaOfertaHoteles;  //Lista doble
    ClaseLista ListaTotalOferta;    //Lista doble - Almacena ID's para comparar repetidos

    ClaseLista ListaClientes;        //Lista doble
    ClaseLista ListaIDClientes;      //Lista doble - Almacena ID's para comparar repetidos

    ClaseLista ListaReservaViajes;   //Lista doble
    ClaseLista ListaReservaHoteles;  //Lista doble
    ClaseLista ListaReservaViajeTransporte; //Lista doble

    ClaseLista ListaReservacion_IDClientes; // Almacena los ID-Cliente cuando hacen reservacion, valida para que un mismo cliente no reserve mas de un viaje

    pnodoViaje auxViajes;
    pnodo auxIDViajes;
    pnodoHotel auxHoteles;
    pnodo auxIDHoteles;
    pnodoOfertaHotel auxOfertaHoteles;
    pnodoTransporte auxTransportes;
    pnodo auxIDTransportes;
    pnodoCliente auxClientes;

    pnodoReservaViaje auxReservaViajes;
    pnodoReservaHotel auxReservaHoteles;
    pnodoReservaTransporte auxReservaViajeTransporte;

    //cout << "---------------------VIAJES---------------------" << endl;

    int i = 0;

    ifstream archivoViaje("Viajes.txt");

    while(!archivoViaje.eof()){
        string viaje;
        string v_idViaje;
        string v_origen;
        string v_destino;
        string v_fechaSalida;
        string v_fechaLlegada;
        string v_precio;
        string v_numPlazas;


        getline(archivoViaje, viaje);

        while(viaje[i] != ';'){
            v_idViaje += viaje[i];
            i++;
            }
            i+=1;

        while(viaje[i] != ';'){
            v_origen += viaje[i];
            i++;
            }
            i+=1;

        while(viaje[i] != ';'){
            v_destino += viaje[i];
            i++;
            }
            i+=1;

        while(viaje[i] != ';'){
            v_fechaSalida += viaje[i];
            i++;
            }
            i+=1;

        while(viaje[i] != ';'){
            v_fechaLlegada += viaje[i];
            i++;
            }
            i+=1;

        while(viaje[i] != ';'){
            v_precio += viaje[i];
            i++;
            }
            i+=1;

        while(viaje[i] != false){
            v_numPlazas += viaje[i];
            i++;
            }

        if(ListaIDViajes.buscarElemento(v_idViaje) != true){
            ListaIDViajes.InsertarFinal(v_idViaje);
            ListaViajes.InsertarFinalViajes(v_idViaje, v_origen, v_destino, v_fechaSalida, v_fechaLlegada, v_precio, v_numPlazas);
            }

            i = 0;
    }

    //ListaViajes.MostrarViaje();

    //cout << "\n---------------------HOTELES---------------------" << endl;

    i = 0;
    string hotel;
    ClaseLista ListaCombViajeHotel;

    ifstream archivoHotel("Hoteles.txt");

    while(!archivoHotel.eof()){
        string h_idViaje;
        string h_idHotel;
        string h_nombre;
        string h_categoria;
        string h_ciudad;
        string h_precioHabIndiv;
        string h_precioHabDoble;

        getline(archivoHotel, hotel);

        while(hotel[i] != ';'){
            h_idViaje += hotel[i];
            i++;
            }
        i += 1;

        while(hotel[i] != ';'){
            h_idHotel += hotel[i];
            i++;
        }
        i+=1;

        while(hotel[i] != ';'){
            h_nombre += hotel[i];
            i++;
        }
        i+=1;

        while(hotel[i] != ';'){
            h_categoria += hotel[i];
            i++;
        }
        i+=1;

        while(hotel[i] != ';'){
            h_ciudad += hotel[i];
            i++;
        }
        i+=1;

        while(hotel[i] != ';'){
            h_precioHabIndiv += hotel[i];
            i++;
        }
        i+=1;

        while(hotel[i] != false){
            h_precioHabDoble += hotel[i];
            i++;
        }


        if(ListaIDHoteles.buscarElemento(h_idHotel) != true){
            ListaIDHoteles.InsertarFinal(h_idHotel);
            ListaHoteles.InsertarFinalHoteles(h_idHotel, h_nombre, h_categoria, h_ciudad, h_precioHabIndiv, h_precioHabDoble);
            ListaCombViajeHotel.InsertarFinal(h_idViaje + h_idHotel);
            //ListaCombViajeHotel.Mostrar();
            }

            i = 0;

    NodoViaje *aux2Viaje = ListaViajes.primeroV;
    NodoHotel *auxH= ListaHoteles.primeroH;
/*
    while (aux2Viaje->idViaje != h_idViaje){
            cout << "jojo" << endl;
        aux2Viaje= aux2Viaje->siguienteV;
    }*/

    auxH->siguienteViaje= aux2Viaje;
    //cout << "Hotel a viaje: " << aux2Viaje->idViaje << endl;
    }

    //cout << "\n---------------------TRANSPORTES---------------------" << endl;

    i = 0;
    string transporte;
    ClaseLista ListaCombViajeHotel_T;

    ifstream archivoTransporte("Transportes.txt");

    while(!archivoTransporte.eof()){
        string t_idViaje;
        string t_idHotel;
        string t_idTransporte;
        string t_tipoTransporte;
        string t_origen;
        string t_destino;
        string t_fechaSalida;
        string t_horaSalida;
        string t_fechaLlegada;
        string t_horaLlegada;
        string t_compania;
        string t_numPlazas;
        string t_precio;

        getline(archivoTransporte, transporte);

        while(transporte[i] != ';'){
            t_idViaje += transporte[i];
            i++;
            }
        i += 1;

        while(transporte[i] != ';'){
            t_idHotel += transporte[i];
            i++;
            }
        i += 1;

        while(transporte[i] != ';'){
            t_idTransporte += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_tipoTransporte += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_origen += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_destino += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_fechaSalida += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_horaSalida += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_fechaLlegada += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_horaLlegada += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_compania += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != ';'){
            t_numPlazas += transporte[i];
            i++;
        }
        i += 1;

        while(transporte[i] != false){
            t_precio += transporte[i];
            i++;
        }
        i += 1;

        if(ListaIDTransportes.buscarElemento(t_idTransporte) != true){
            ListaIDTransportes.InsertarFinal(t_idTransporte);
            ListaTransportes.InsertarFinalTransportes(t_idTransporte, t_tipoTransporte, t_origen, t_destino, t_fechaSalida, t_horaSalida, t_fechaLlegada, t_horaLlegada, t_compania, t_numPlazas, t_precio);
            ListaCombViajeHotel_T.InsertarFinal(t_idViaje + t_idHotel);
            //ListaCombViajeHotel_T.Mostrar();
            }

            i = 0;

    NodoHotel *aux2Hotel = ListaHoteles.primeroH;
    NodoTransporte *auxT= ListaTransportes.primeroT;
/*
    while (aux2Hotel->idHotel != t_idHotel){
        aux2Hotel= aux2Hotel->siguienteH;
    }*/

    auxT->siguienteHotel= aux2Hotel;

    //cout << "Transporte a hotel: " << aux2Hotel->idHotel << endl;
    }

    //ListaTransportes.MostrarTransporte();

    //cout << "\n---------------------OFERTA HOTELES---------------------" << endl;

    i = 0;
    string ofertaHotel;

    ifstream archivoOfertaHotel("OfertasHoteles.txt");

    while(!archivoOfertaHotel.eof()){
        bool of_control = false;
        string of_idViaje;
        string of_idHotel;
        string of_precioHabIndiv;
        string of_precioHabDoble;

        string totalOferta;

        getline(archivoOfertaHotel, ofertaHotel);

        while(ofertaHotel[i] != ';'){
            of_idViaje += ofertaHotel[i];
            i++;
            }
        i += 1;

        while(ofertaHotel[i] != ';'){
            of_idHotel += ofertaHotel[i];
            i++;
        }
        i += 1;

        totalOferta += of_idViaje;
        totalOferta += of_idHotel;

        while(ofertaHotel[i] != ';'){
            of_precioHabIndiv += ofertaHotel[i];
            i++;
        }
        i += 1;

        while(ofertaHotel[i] != false){
            of_precioHabDoble += ofertaHotel[i];
            i++;
        }

        if(ListaTotalOferta.buscarElemento(totalOferta) != true){
            ListaTotalOferta.InsertarFinal(totalOferta);
            ListaOfertaHoteles.InsertarFinalOfertaHotel(of_idViaje, of_idHotel, of_precioHabIndiv, of_precioHabDoble);
            of_control = true;
            }
            i = 0;

        NodoHotel *aux2Hotel = ListaHoteles.primeroH;
        NodoOfertaHotel *auxOF= ListaOfertaHoteles.primeroOF;
/*
        while (aux2Hotel->idHotel != of_idHotel){
            aux2Hotel= aux2Hotel->siguienteH;
        }
*/
        auxOF->siguienteHotel= aux2Hotel;
        //cout << "OfertaHotel a hotel: " << aux2Hotel->idHotel << endl;

    }


    //cout << "\n---------------------CLIENTES---------------------" << endl;

    i = 0;
    string cliente;

    ifstream archivoCliente("Clientes.txt");

    while(!archivoCliente.eof()){
        string c_idCliente;
        string c_nombre;
        string c_apellido;
        string c_ciudad;
        string c_telefono;

        getline(archivoCliente, cliente);

        while(cliente[i] != ';'){
            c_idCliente += cliente[i];
            i++;
        }
        i+=1;

        while(cliente[i] != ';'){
            c_nombre += cliente[i];
            i++;
        }
        i+=1;

        while(cliente[i] != ';'){
            c_apellido += cliente[i];
            i++;
        }
        i+=1;

        while(cliente[i] != ';'){
            c_ciudad += cliente[i];
            i++;
        }
        i+=1;

        while(cliente[i] != false){
            c_telefono += cliente[i];
            i++;
        }

        if(ListaIDClientes.buscarElemento(c_idCliente) != true){
            ListaIDClientes.InsertarFinal(c_idCliente);
            ListaClientes.InsertarFinalCliente(c_idCliente, c_nombre, c_apellido, c_ciudad, c_telefono);
            }
            i = 0;
    }

    //ListaClientes.MostrarCliente();
    //-------------------------MENU-------------------------//

    bool salir = false;

    while(salir != true){
        auxViajes = ListaViajes.primeroV;
        auxIDViajes = ListaIDViajes.primero;

        auxHoteles = ListaHoteles.primeroH;
        auxOfertaHoteles = ListaOfertaHoteles.primeroOF;

        auxIDHoteles = ListaIDHoteles.primero;

        auxTransportes = ListaTransportes.primeroT;
        auxIDTransportes = ListaIDTransportes.primero;

        auxClientes = ListaClientes.primeroC;

        auxReservaViajes = ListaReservaViajes.primeroRV;
        auxReservaHoteles = ListaReservaHoteles.primeroRH;
        auxReservaViajeTransporte = ListaReservaViajeTransporte.primeroRT;

        imprimirMenu();

        int opcion = leerOpcion();

        if(opcion == 0){ // Consultar precio de un producto - Viaje, Hotel o Transporte
            cout << "\nIngrese el numero correspondiente al producto:\n" << endl;
            cout << "[0] - Viaje." << endl;
            cout << "[1] - Hotel." << endl;
            cout << "[2] - Transporte." << endl;

            string producto;
            cin >> producto;

            if(producto == "0"){
                cout << "\nPor favor ingrese el 'ID-Viaje' correspondiente: " << endl;

                string e_viaje;  // e_ : entrada
                cin >> e_viaje;

                if(ListaIDViajes.buscarElemento(e_viaje) != true){
                    cout << "\n** Error!. El ID-Viaje no existe!. **" << endl;
                }else{
                    int conttemp = 0;

                    while(conttemp != ListaViajes.largoListaViaje()){
                        if(auxViajes->idViaje == e_viaje){
                            cout << "\n-El precio del viaje es de: " << auxViajes->precio << endl;
                        }
                        auxViajes = auxViajes->siguienteV;
                        conttemp++;
                    }
                }
            }

            if(producto == "1"){
                cout << "\n-Por favor ingrese el 'ID-Hotel' correspondiente: " << endl;

                string e_hotel;
                cin >> e_hotel;

                if(ListaIDHoteles.buscarElemento(e_hotel) != true){
                    cout << "\n** Error!. El ID-Hotel no existe!. **" << endl;
                }else{
                    int conttemp = 0;
                    while(auxHoteles != NULL){
                        if(auxHoteles->idHotel == e_hotel){
                            cout << "\n-El precio del hotel es de: \n" << endl;
                            cout << " Precio habitacion individual: " << auxHoteles->precioHabIndiv << endl;
                            cout << " Precio habitacion doble: " << auxHoteles->precioHabDoble << endl;
                        }
                        auxHoteles = auxHoteles->siguienteH;
                        conttemp++;
                    }
                }
            }

            if(producto == "2"){
                cout << "\n-Por favor ingrese el 'ID-Transporte' correpondiente: " << endl;

                string e_transporte;
                cin >> e_transporte;

                if(ListaIDTransportes.buscarElemento(e_transporte) != true){
                    cout << "\n-** Error!. El ID-Transporte no existe!. **" << endl;
                }else{
                    int conttemp = 0;
                    while(auxTransportes != NULL){
                        if(auxTransportes->idTransporte == e_transporte){
                            cout << "\n-El precio del transporte es de: " << auxTransportes->precio << endl;
                        }
                        auxTransportes = auxTransportes->siguienteT;
                        conttemp++;
                    }
                }
            }
        }

        else{
            if(opcion == 1){ // Consultar hoteles, viajes y transportes(Mostrar las listas)
                ListaViajes.MostrarViaje();
                ListaHoteles.MostrarHotel();
                ListaTransportes.MostrarTransporte();
                }

            else{
                if(opcion == 2){ // Consultar el viaje de un cliente, su transporte o su hotel
                    cout << "\n-Que tipo de consulta desea realizar?\n" << endl;
                    cout << "[0] - Viaje." << endl;
                    cout << "[1] - Hotel." << endl;
                    cout << "[2] - Transporte." << endl;

                    string tipoConsulta;
                    cin >> tipoConsulta;

                    string temp_idViaje; // Sirve para buscar la informacion en la lista viajes, para luego ser desplegada
                    string temp_numPlazas; // Almacena el numero de plazas cuando se busca en reserva viajes

                    if(tipoConsulta == "0"){ // Viaje
                        cout << "\n** Consultando viaje **" << endl;
                        cout << "\n-Por favor ingrese el 'ID-Cliente' correspondiente:" << endl;

                        string r_idCliente; // r_ : read
                        cin >> r_idCliente;

                        bool control = false;
                        while(auxReservaViajes != NULL){
                            if(auxReservaViajes->idCliente == r_idCliente){
                                temp_idViaje = auxReservaViajes->idViaje;
                                temp_numPlazas = auxReservaViajes->numPlazas;
                                control = true;
                            }
                            auxReservaViajes = auxReservaViajes->siguienteRV;
                        }
                        if(control != true){
                            cout << "\n** Error!. El cliente ingresado no ha reservado un viaje!. **" << endl;
                        }else{
                            int conttemp = 0;
                            while(ListaViajes.largoListaViaje() != conttemp){
                                if(auxViajes->idViaje == temp_idViaje){
                                    cout << "\n** La informacion del viaje corresponde a: **" << endl;
                                    cout << "\nidViaje: " << auxViajes->idViaje << endl;
                                    cout << "Origen: " << auxViajes->origen << endl;
                                    cout << "Destino: " << auxViajes->destino << endl;
                                    cout << "Fecha salida: " << auxViajes->fechaSalida << endl;
                                    cout << "Fecha llegada: " << auxViajes->fechaLlegada << endl;
                                    cout << "Precio: " << auxViajes->precio << endl;
                                    cout << "Plazas reservadas: " << temp_numPlazas << endl;
                                }
                                auxViajes = auxViajes->siguienteV;
                                conttemp++;
                            }
                            if(auxViajes->idViaje == temp_idViaje){
                                cout << "\n** La informacion del viaje corresponde a: **\n" << endl;
                                cout << "\nidViaje: " << auxViajes->idViaje << endl;
                                cout << "Origen: " << auxViajes->origen << endl;
                                cout << "Destino: " << auxViajes->destino << endl;
                                cout << "Fecha salida: " << auxViajes->fechaSalida << endl;
                                cout << "Fecha llegada: " << auxViajes->fechaLlegada << endl;
                                cout << "Precio: " << auxViajes->precio << endl;
                                cout << "Plazas reservadas: " << temp_numPlazas << endl;
                            }
                        }
                    }

                    if(tipoConsulta == "1"){ // Hotel
                        cout << "\n** Consultando hotel **" << endl;
                        cout << "\n-Por favor ingrese el 'ID-Cliente' correspondiente:" << endl;

                        string r_idCliente;
                        cin >> r_idCliente;

                        string temp_H_idHotel; // H_ : hotel
                        string habEscogida;

                        bool control = false;
                        while(auxReservaHoteles != NULL){
                            if(auxReservaHoteles->idCliente == r_idCliente){
                                temp_H_idHotel = auxReservaHoteles->idHotel;
                                habEscogida = auxReservaHoteles->precioHabitacion;
                                control = true;
                            }
                            auxReservaHoteles = auxReservaHoteles->siguienteRH;
                        }
                        if(control != true){
                            cout << "\n** Error!. El cliente ingresado no ha reservado un hotel!. **\n" << endl;
                        }else{
                            while(auxHoteles != NULL){
                                if(auxHoteles->idHotel == temp_H_idHotel){
                                    cout << "\n** La informacion del hotel corresponde a: **\n" << endl;
                                    cout << "idHotel: " << auxHoteles->idHotel << endl;
                                    cout << "Nombre: " << auxHoteles->nombre << endl;
                                    cout << "Categoria: " << auxHoteles->categoria << endl;
                                    cout << "Ciudad: " << auxHoteles->ciudad << endl;
                                    cout << "Precio habitacion individual: " << auxHoteles->precioHabIndiv << endl;
                                    cout << "Precio habitacion doble: " << auxHoteles->precioHabDoble << endl;
                                    cout << "Precio de la habitacion escogida: " << habEscogida << endl;
                                }
                                auxHoteles = auxHoteles->siguienteH;
                            }
                        }
                    }

                    if(tipoConsulta == "2"){ // Transporte
                        cout << "\n** Consultando transporte **" << endl;
                        cout << "\n-Por favor ingrese el 'ID-Cliente' correspondiente:" << endl;

                        string r_idCliente;
                        cin >> r_idCliente;

                        string temp_idTransporte;

                        string temp_tipoTranporte;

                        bool control = false;
                        int cont_Reservas = 0; // Indica cuanyas veces a reservado un mismo cliente (Sin aplicar!)
                        while(auxReservaViajeTransporte != NULL){
                            if(auxReservaViajeTransporte->idCliente == r_idCliente && cont_Reservas != 1){
                                temp_idTransporte = auxReservaViajeTransporte->idTransporte;
                                control = true;
                                cont_Reservas++;
                            }

                            auxReservaViajeTransporte = auxReservaViajeTransporte->siguienteRT;
                        }
                        if(control != true){
                            cout << "\n** Error!. El cliente ingresado no ha reservado un transporte!. **\n" << endl;
                        }else{
                            while(auxTransportes != NULL){
                                if(auxTransportes->idTransporte == temp_idTransporte){
                                    if(auxTransportes->tipoTransporte == "1"){
                                        temp_tipoTranporte = "1 - Aereo.";
                                    }
                                    if(auxTransportes->tipoTransporte == "2"){
                                        temp_tipoTranporte = "2 - Maritimo.";
                                    }
                                    if(auxTransportes->tipoTransporte == "3"){
                                        temp_tipoTranporte = "3 - Terrestre.";
                                    }
                                    cout << "\n** La informacion del transporte corresponde a: **\n" << endl;
                                    cout << "idTransporte: " << auxTransportes->idTransporte << endl;
                                    cout << "Tipo de transporte: " << temp_tipoTranporte << endl;
                                    cout << "Origen: " << auxTransportes->origen << endl;
                                    cout << "Destino: " << auxTransportes->destino << endl;
                                    cout << "Fecha salida: " << auxTransportes->fechaSalida << endl;
                                    cout << "Hora salida: " << auxTransportes->horaSalida << endl;
                                    cout << "Fecha llegada: " << auxTransportes->fechaLlegada << endl;
                                    cout << "Hora llegada: " << auxTransportes->horaLlegada << endl;
                                    cout << "Compania: " << auxTransportes->compania << endl;
                                    cout << "Numero de plazas: " << auxTransportes->numPlazas << endl;
                                    cout << "Precio: " << auxTransportes->precio << endl;
                                }
                                auxTransportes = auxTransportes->siguienteT;
                            }

                        }
                    }

                    }

                    else{
                        if(opcion == 3){ // Consultar el origen y el destino de un viaje
                            cout << "\nPor favor ingrese el 'ID-Viaje' correspondiente:" << endl;

                            string e_viaje;
                            cin >> e_viaje;

                            if(ListaIDViajes.buscarElemento(e_viaje) != true){
                                cout << "\n** Error!. El viaje no existe!. **\n" << endl;
                            }else{
                                int conttemp = 0;
                                while(ListaViajes.largoListaViaje() != conttemp){
                                    if(auxViajes->idViaje == e_viaje){
                                        cout << "\n-Los lugares corresponden a: " << endl;
                                        cout << "\n El origen es: " << auxViajes->origen << endl;
                                        cout << " El destino es: " << auxViajes->destino << endl;
                                    }
                                    auxViajes = auxViajes->siguienteV;
                                    conttemp++;
                                }
                            }
                        }

                        else{
                            if(opcion == 4){ //Consultar la informacion de un cliente.
                                cout << "\nPor favor ingrese el 'ID-Cliente' correspondiente:" << endl;

                                string e_cliente;
                                cin >> e_cliente;

                                if(ListaIDClientes.buscarElemento(e_cliente) != true){
                                    cout << "\n** Error!. El cliente no existe!. **\n" << endl;
                                }else{
                                    int conttemp = 0;
                                    while(ListaClientes.largoListaCliente() != conttemp){
                                        if(auxClientes->idCliente == e_cliente){
                                            cout << "\n-Informacion:\n" << endl;
                                            cout << " ID: " << auxClientes->idCliente << endl;
                                            cout << " Nombre: " << auxClientes->nombre << endl;
                                            cout << " Apellido: " << auxClientes->apellido << endl;
                                            cout << " Ciudad: " << auxClientes->ciudad << endl;
                                            cout << " Telefono: " << auxClientes->telefono << endl;
                                        }
                                        auxClientes = auxClientes->siguienteC;
                                        conttemp++;
                                    }
                                }
                            }

                            else{
                                if(opcion == 5){ // Consultar la categoria de un hotel.
                                    cout << "\nPor favor ingrese el 'ID-Hotel' correspondiente:" << endl;

                                    string t_tipo = "N/A";
                                    string e_hotel;
                                    cin >> e_hotel;

                                    if(ListaIDHoteles.buscarElemento(e_hotel) != true){
                                        cout << "\n** Error!. El hotel no existe!. **\n" << endl;

                                    }else{
                                        while(auxHoteles != NULL){
                                            if(auxHoteles->idHotel == e_hotel){
                                                if(auxHoteles->categoria == "1"){
                                                    t_tipo = "Familiar";
                                                }
                                                if(auxHoteles->categoria == "2"){
                                                    t_tipo = "Economico";
                                                }
                                                cout << "\n-La categoria del hotel es: " << auxHoteles->categoria << " - (" << t_tipo << ")\n" << endl;
                                            }
                                            auxHoteles = auxHoteles->siguienteH;
                                        }
                                    }
                                }

                                else{
                                    if(opcion == 6){ // Precio a pagar por el viaje (Se suma el viaje, las habitacion y el transporte)
                                        cout << "\n-Por favor ingrese el ID-Cliente correspondiente:" << endl;

                                        string c_idCliente; // c_ : consulta
                                        cin >> c_idCliente;

                                        string string_precioTotal; // Se almacena en string para luego convertirlo a int (precioTotal)
                                        int precioTotal;
                                        string temp_idViaje; // Almacena el idViaje cuando se busca en reservaViajes

                                        bool control = false; // True -> Indica si encontró el idCliente en reservaViajes
                                        while(auxReservaViajes != NULL){
                                            if(auxReservaViajes->idCliente == c_idCliente){
                                                temp_idViaje = auxReservaViajes->idViaje;
                                                control = true;
                                            }
                                            auxReservaViajes = auxReservaViajes->siguienteRV;
                                        }
                                        if(control != true){
                                            cout << "\n** Error!. El cliente ingresado no ha reservado un viaje!. **" << endl;
                                        }else{
                                            int conttemp = 0;
                                            while(ListaViajes.largoListaViaje() != conttemp){
                                                if(auxViajes->idViaje == temp_idViaje){ // Se busca en la lista de Viajes porque en reversaViajes no se almace el precio
                                                    string_precioTotal = auxViajes->precio;
                                                    precioTotal = atoi(string_precioTotal.c_str());
                                                }
                                                auxViajes = auxViajes->siguienteV;
                                                conttemp++;
                                            }

                                            while(auxReservaHoteles != NULL){ // Busca el precio de la habitacion escogida cuando se reservó
                                                if(auxReservaHoteles->idViaje == temp_idViaje){
                                                    string_precioTotal = auxReservaHoteles->precioHabitacion;
                                                    precioTotal += atoi(string_precioTotal.c_str());
                                                }
                                                auxReservaHoteles = auxReservaHoteles->siguienteRH;
                                            }
                                            bool cont = false;
                                            string contIDTransporte;
                                            while(auxReservaViajeTransporte != NULL){
                                                if(auxReservaViajeTransporte->idViaje == temp_idViaje){
                                                    contIDTransporte = auxReservaViajeTransporte->idTransporte;
                                                    cont = true;
                                                }
                                                auxReservaViajeTransporte = auxReservaViajeTransporte->siguienteRT;
                                            }
                                            if(cont == true){
                                                while(auxTransportes != NULL){
                                                    if(auxTransportes->idTransporte == contIDTransporte){
                                                        string_precioTotal = auxTransportes->precio;
                                                        precioTotal += atoi(string_precioTotal.c_str());
                                                    }
                                                    auxTransportes = auxTransportes->siguienteT;
                                                    }
                                            }
                                            cout << "\n-El precio del viaje es: " << precioTotal << endl;
                                        }
                                    }

                                    else{
                                        if(opcion == 7){ //Realizar reservacion - (Viaje, hotel o transportes)
                                            cout << "\nDigite el tipo de reservacion que desea realizar:\n" << endl;
                                            cout << "[0] - Viaje." << endl;
                                            cout << "[1] - Hotel." << endl;
                                            cout << "[2] - Transporte." << endl;

                                            string tipoReservacion;
                                            cin >> tipoReservacion;

                                            if(tipoReservacion != "0" && tipoReservacion != "1" && tipoReservacion != "2"){
                                                cout << "\n** Error!. La opcion selecionada es invalida!." << endl;
                                            }

                                            if(tipoReservacion == "0"){
                                                cout << "\n*** Reservando viaje ***\n" << endl;
                                                cout << "-Por favor ingrese el ID-Cliente correspondiente:" << endl;

                                                string r_idCliente; // r_ : reservacion
                                                cin >> r_idCliente;

                                                if(ListaIDClientes.buscarElemento(r_idCliente) != true){
                                                    cout << "\n** Error!. El cliente no existe o ya ha registrado un viaje!. **\n" << endl;
                                                    //ListaReservacion_IDClientes.Mostrar();
                                                }else{
                                                    ListaViajes.MostrarViaje();
                                                    cout << "\n-Ingrese el ID-Viaje que desea reservar:" << endl;

                                                    string r_viaje;
                                                    cin >> r_viaje;

                                                    if(ListaIDViajes.buscarElemento(r_viaje) != true){
                                                        cout << "\n** Error!. El viaje selecionado no existe!" << endl;
                                                    }else{
                                                        cout << "\n-Ingrese el numero de plazas que desea revervar:" << endl;
                                                        string r_numPlazas;
                                                        cin >> r_numPlazas;

                                                        string numPlazas_Viaje; //Almacena las plazas del viaje para verificar si es mayor al ingresado (r_numPlazas)

                                                        int conttemp = 0;
                                                        bool controlador = false; //True si el numero de plazas es superior al disponible
                                                        while(ListaViajes.largoListaViaje() != conttemp){

                                                            if(auxViajes->idViaje == r_viaje){

                                                                if(auxViajes->numPlazas < r_numPlazas){
                                                                    controlador = true;
                                                                }
                                                            }
                                                            auxViajes = auxViajes->siguienteV;
                                                            conttemp++;
                                                        }
                                                        if(auxViajes->idViaje == r_viaje){

                                                                if(auxViajes->numPlazas < r_numPlazas){
                                                                    controlador = true;
                                                                }
                                                            }
                                                        if(controlador != true){
                                                            ListaReservaViajes.InsertarFinalReservaViajes(r_idCliente, r_viaje, r_numPlazas);
                                                            ListaReservacion_IDClientes.InsertarFinal(r_idCliente);
                                                            cout << "\n*** Se ha reservado su viaje con exito! ***" << endl;
                                                            //ListaReservaViajes.MostrarReservaViajes();
                                                        }else{
                                                            if(controlador == true){
                                                                cout << "\n** Error!. El numero de plazas ingresado es superior al disponible!. **\n" << endl;
                                                            }
                                                        }
                                                    }
                                                }
                                            }


                                            if(tipoReservacion == "1"){
                                                cout << "\n*** Reservando hotel ***\n" << endl;
                                                cout << "-Por favor ingrese el ID-Cliente correspondiente:" << endl;

                                                string r_idViaje; // Se asigna
                                                string r_idCliente;
                                                cin >> r_idCliente;

                                                bool controlador = false; // True indica que si se encontró el idCliente
                                                while(auxReservaViajes != NULL){
                                                    if(auxReservaViajes->idCliente == r_idCliente){
                                                        r_idViaje = auxReservaViajes->idViaje; // Se necesita extraer tambien el idViaje (ReservaViajes)
                                                        controlador = true;
                                                    }
                                                    auxReservaViajes = auxReservaViajes->siguienteRV;
                                                }

                                                if(controlador != true){
                                                    cout << "\n** Error!. El cliente no existe, debe registrar un viaje primero. **\n" << endl;
                                                }else{
                                                    ListaHoteles.MostrarHotel();
                                                    cout << "\n-Ingrese el ID-Hotel que desea reservar:" << endl;

                                                    string r_hotel; // idHotel
                                                    cin >> r_hotel;

                                                    if(ListaIDHoteles.buscarElemento(r_hotel) != true){
                                                        cout << "\n** Error!. El hotel seleccionado no existe!." << endl;
                                                    }else{

                                                        if(ListaCombViajeHotel.buscarElemento(r_idViaje + r_hotel) != true){
                                                            cout << "\n** Error!. El hotel selecionado no esta disponible para el viaje reservado! **" << endl;
                                                        }else{

                                                            int conttemp = 0;
                                                            string fechaInicial;
                                                            string fechaFinal;

                                                            while(ListaViajes.largoListaViaje() != conttemp){
                                                                if(auxViajes->idViaje == r_idViaje){
                                                                    fechaInicial = auxViajes->fechaSalida; // Asignacion de fecha (Inicial y final) :v
                                                                    fechaFinal = auxViajes->fechaLlegada;
                                                                }
                                                                auxViajes = auxViajes->siguienteV;
                                                                conttemp++;
                                                            }

                                                            if(auxViajes->idViaje == r_idViaje){
                                                                fechaInicial = auxViajes->fechaSalida;
                                                                fechaFinal = auxViajes->fechaLlegada;
                                                                }

                                                            // En este punto ya se validó; el cliente, se obtuvo el idViaje (reservaViaje), el idHotel, la fecha inicio y final
                                                            cout << "\n-Ingrese el tipo de habitacion que desea registrar" << endl;
                                                            cout << "[0] - Habitacion indivial." << endl;
                                                            cout << "[1] - Habitacion doble." << endl;

                                                            string r_habitacion; // r_ : read
                                                            cin >> r_habitacion;

                                                            string r_habIndiv; // Precio
                                                            string r_habDoble; // Precio

                                                            string precioHabitacion; // Se asigna el valor de la habitacion escogida (No oferta)

                                                            while(auxHoteles != NULL){
                                                                if(auxHoteles->idHotel == r_hotel){
                                                                    r_habIndiv = auxHoteles->precioHabIndiv;
                                                                    r_habDoble = auxHoteles->precioHabDoble;
                                                                }
                                                                auxHoteles = auxHoteles->siguienteH;
                                                            }

                                                            if(r_habitacion == "0"){
                                                                precioHabitacion = r_habIndiv;
                                                            }
                                                            if(r_habitacion == "1"){
                                                                precioHabitacion = r_habDoble;
                                                            }

                                                            string oferta_habIndiv;
                                                            string oferta_habDoble;

                                                            bool cont = false;
                                                            int temp = 0;

                                                            while(auxOfertaHoteles != NULL){

                                                                if(auxOfertaHoteles->idViaje == r_idViaje && auxOfertaHoteles->idHotel == r_hotel){

                                                                    oferta_habIndiv = auxOfertaHoteles->precioHabIndiv;
                                                                    oferta_habDoble = auxOfertaHoteles->precioHabDoble;
                                                                    cont = true; // Indica que si encontró una oferta
                                                                }
                                                                auxOfertaHoteles = auxOfertaHoteles->siguienteOF;
                                                                temp++;
                                                            }

                                                            if(cont == true){
                                                                cout << "\n-Su hotel tiene una oferta disponible, aceptar ?:" << endl;
                                                                cout << "[0] - SI." << endl;
                                                                cout << "[1] - NO." << endl;

                                                                string of_respuesta; // of_ : oferta
                                                                cin >> of_respuesta;

                                                                if(of_respuesta == "0"){
                                                                    if(r_habitacion == "0"){
                                                                        precioHabitacion = oferta_habIndiv;
                                                                    }
                                                                    if(r_habitacion == "1"){
                                                                        precioHabitacion = oferta_habDoble;
                                                                    }
                                                                }
                                                            }
                                                            ListaReservaHoteles.InsertarFinalReservaHoteles(r_idCliente, r_idViaje, r_hotel, fechaInicial, fechaFinal, precioHabitacion);

                                                            cout << "\n*** Se ha reservado su hotel con exito! ***" << endl;
                                                            //ListaReservaHoteles.MostrarReservaHoteles();
                                                        }
                                                    }
                                                }
                                            }


                                            if(tipoReservacion == "2"){
                                                cout << "\n*** Reservando transporte ***\n" << endl;

                                                cout << "-Por favor ingrese el ID-Cliente correspondiente:" << endl;

                                                string r_idViaje; // Se asigna
                                                string r_idHotel; // Se asigna
                                                string r_idCliente;
                                                cin >> r_idCliente;

                                                bool controlador = false; // True indica que si se encontró el idCliente
                                                while(auxReservaViajes != NULL){
                                                    if(auxReservaViajes->idCliente == r_idCliente){
                                                        r_idViaje = auxReservaViajes->idViaje; // Se necesita extraer tambien el idViaje (ReservaViajes)
                                                        controlador = true;
                                                    }
                                                    auxReservaViajes = auxReservaViajes->siguienteRV;
                                                }
                                                while(auxReservaHoteles != NULL){
                                                    if(auxReservaHoteles->idCliente == r_idCliente){
                                                        r_idHotel = auxReservaHoteles->idHotel;
                                                    }
                                                    auxReservaHoteles = auxReservaHoteles->siguienteRH;
                                                }
                                                if(controlador != true){
                                                    cout << "\n** Error!. El cliente no existe, debe registrar un viaje primero. **\n" << endl;
                                                }else{
                                                    ListaTransportes.MostrarTransporte();
                                                    cout << "\n-Ingrese el ID-Transporte que desea reservar:" << endl;

                                                    string r_transporte;
                                                    cin >> r_transporte;

                                                    if(ListaIDTransportes.buscarElemento(r_transporte) != true){
                                                        cout << "** Error!. El ID-Transporte no existe!." << endl;
                                                    }else{
                                                        if(ListaCombViajeHotel_T.buscarElemento(r_idViaje + r_idHotel) != true){
                                                            cout << "\n** Error!. El transporte selecionado no esta disponible para el viaje y hotel reservado! **" << endl;
                                                            }else{
                                                                ListaReservaViajeTransporte.InsertarFinalReservaViajesTrasportes(r_idCliente, r_idViaje, r_transporte);
                                                                cout << "\n*** Se ha reservado su transporte con exito! ***" << endl;
                                                                //ListaReservaViajeTransporte.MostrarReservaViajeTransportes();
                                                            }

                                                    }
                                                }
                                            }

                                            }

                                            else{
                                                if(opcion == 8){
                                                    cout << "\n**** Gracias por utilizar nuestro servicio. Vuelva pronto! ****" << endl;
                                                    salir = true;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
}


int main(){

    ClaseLista Lista;

    Lista.Proyecto1();

    return 0;
}
