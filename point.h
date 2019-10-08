#include <iostream>
#include <string>
#include <cmath>

using namespace  std;

class Point
{
        private:
                double abs;
                double ord;
        public:
                Point(){
                        abs = 0;
                        ord = 0;
                };
                Point(double abs, double ord){
                        this->abs = abs;
                        this->ord = ord;
                };
                Point(const Point &p){
                        this->abs = p.getAbs();
                        this->ord = p.getOrd();
                };

                double getAbs()const{
                        return abs;
                };
                double getOrd()const{
                        return ord;
                };
                void setAbs(double a){
                        abs = a;
                };
                void setOrd(double o){
                        ord = o;
                };

                void afficher(){
                        cout<< "X = " << abs <<", Y = " << ord << endl;
                };
                void clonerPoint(const Point &p){
                        this->abs = p.getAbs();
                        this->ord = p.getOrd();
                };


                ~Point(){
                        cout << "Destruction du point" << endl;
                };
};

