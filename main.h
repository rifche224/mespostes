#include <iostream>

using namespace std;

int main(int argc, const char * argv())
{
    cout << "Hello world!" << endl;

    Cstring s1("toto"), s2('q'), s3;
    Cstring s4('www');

       cout<<"nb_chaine"<< Cstring::getNb_objet() <<endl;
       s3= s1.plus('w');
       cout<< "s3" << s3.getString() <<endl;

         if(s1.plusgrandque(s2)){
            cout << s1.getString()<< "< >" <<s2.getString()
         }
         // a completer

         if(s1.infegal(s1))cout << s1.getString() <<  " <=  " << s4.getString() <<endl;
         s3 = s1.plusgrandque(s2);
         cout << "s3="  << s3.getString() <<end;
         cout << s3;

          Cstring s5;
          cin>> s5;
          cout << s6;
          cout << "le 20ieme caractere de " << s5 << "est" << s5[2] << endl;
          s5[2]='a';
          cout << "le 10eme caractere" << s5 << "est :" <<s5[10] <<endl;


    return 0;
}

