#ifndef CSTRING_H
#define CSTRING_H
#include <iostream>
#include <stdio.h>

namespace std;
class Cstring
{
    private:

    int size;
     char* content;
     static int nb_objet;

    public:
        static int getNb_objet();
        Cstring();
        Cstring(const char c);
        Cstring(const char* chaine);
        Cstring(Cstring& s);
       ~Cstring();
       char* getString();
       int getsize
       Cstring& plus(char c);
       bool plusgrandque(const Cstring& s);
       bool infegal(const Cstring& s);
       Cstring& plusgrandque(Cstring& s);
       Cstring& operateur=(Cstring& s);
       char& operator[](unsigned);
       friend ostream operator <<(ostream &flux, Cstring const& ch);
       friend ostream operator <<(ostream &flux, Cstring ch);

};

#endif // CSTRING_H

