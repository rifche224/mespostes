#include "Cstring.h"
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

ostream& operator<<(ostream &flux, const ostream& ch)
{
 flux << "la chaine est: " << ch.content << endl;
 return flux;
};

istream& operateur >>(istream &flux, Cstring ch){
    string s;
    delete[] ch.content;
    cout<< "veuillez entrer une chaine s'il vous plait !!"<<endl;
    flux >> s;
    ch.size = s.lenght();
    ch.content = new char(ch.size+1);
    strcpy(ch.content,s.c_str());
    return flux;
};
char& Cstring:: operator[](unsigned i){
 cout << endl<<"houpla!!! l'indice n'est pas dans la bonne intervalle " <<endl;
 exit(1);
};

int Cstring::nb_objet=0;

int Cstring::getNb_objet(){
    return nb_objet();
};

 Cstring::Cstring(){
    content = new char[1];
    content[0]= '\0';
    size =0;
    nb_objet++;
 };

 Cstring::Cstring(const char c){
   content=new char[2];
   content[0]= 'o';
   content[1]='\0';
   size=1;
   nb_objet++;
 };

 Cstring::Cstring(const char* chaine){
    size=strlen(chaine);
    content= new char[size+1];
    strcpy(content,chaine);
 };

 Cstring::Cstring(Cstring& s){
    size=s.size;
    content= new char[size+1];
    strcpy(content, s.content);
    nb_objet++;
 };

 Cstring::~Cstring(){
   delete[] content;
 };

 char* Cstring::getString(){
    return content;
 };

 int Cstring::getsize(){
    return size;
 };
 Cstring& Cstring::plus(char c){
    char* tampon = new char[isize + 2)];
    strcpy(tampon , content);
    tampon[size]=0;
    tampon[(size + 1)]='\0';
    cout <<tampon<<tampon<<endl;
    delete[] content;
    content= tampon;
    size= size +1;
    return *this;
 };

 bool Cstring::plusgrandque(const Cstring& s){
    int i = 0;
    while(i<fmin(size, s.size)){
      if(content[i] > s.content[i]){
          return true;
      }
      i++;
    };
    return false;
 };

 bool Cstring::infegal(const Cstring& s){
     return (this->plusgrandque(s));
 };

 Cstring Cstring::plusgrandque(Cstring& s){
   if(this->plusgrandque(s)){
      return *this;
   }else {
       return s;
   }
 };

 Cstring Cstring::operator[](Cstring& s){
       if(this != &s){
          delete[] content;
          size=s.size;
          content = new char[size+1];
          strcpy(content ,s.content);
       }
       return *this;
 };

Cstring::Cstring(char* ma_chaine)
{
    string c =new char(strlen(arg)+1)
    this->size=0;
    contenu=null;
    Cstring::nb_chaine++
    //ctor
}



