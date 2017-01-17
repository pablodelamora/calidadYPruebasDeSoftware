#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Cifrado{
  string decrypt(string);
};

class Cesar : public Cifrado {
public:
  string decrypt(string);
};


string Cesar::decrypt(string texto){
  vector<string> diccionario;
  string aux;
  ifstream infile("diccionario.txt");
  while (!infile.eof()){
    getline(infile, aux);
    diccionario.push_back(aux);
    if (aux == "Garden")
      cout << aux << endl;
  }
  infile.close();

  ifstream infile2("encriptado.txt");
  getline(infile2, aux);

  infile2.close();

  cout << diccionario.size();
  return aux;
}
