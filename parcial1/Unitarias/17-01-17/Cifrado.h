#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Cifrado{
public:
  virtual string decrypt() = 0;
};

class Cesar : public Cifrado {
public:
  string decrypt();
};


string Cesar::decrypt(){
  //vector<string> diccionario;

  string aux2;
  ifstream infile2("encriptado.txt");
  getline(infile2, aux2);

  infile2.close();

  bool encontrado=0;

  //cout << aux2<< endl;

  while(!encontrado){
    string aux;
    //cout << texto;
    ifstream infile("diccionario.txt");
    while (!infile.eof()){
      getline(infile, aux);
      //diccionario.push_back(aux);
      //cout << aux;
      if (aux == aux2){
        //cout << aux << endl;
        encontrado = 1;
  	    break;
      }
    }
    infile.close();

    if (!encontrado){
      for (int i=0; i<aux2.length(); i++){
        if (aux2[i] > 'Y')
          aux2[i] = 'A';
        else
          aux2[i] = aux2[i]+1;
      }
    }
    //cout << aux2 << endl;
  }

  //cout << aux2;
  return aux2;
}
