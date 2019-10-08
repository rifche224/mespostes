#include <iostream>
#include <string>
#include <cmath>
#include <point.h>

class Segment
{
        private:
                Point org;
                Point ext;
        public:
                Segment():ext(1,0),org(2,3){

                };
                Segment(const Point &p1, const Point &p2):ext(2,4),org(5,3){

                };
                Segment(const Segment &s){
                        org = s.org;
                        ext = s.ext;
                };
                void afficher(){
                        org.afficher();
                        ext.afficher();
                };
                bool estVertical(){
                        return (org.getAbs() == ext.getAbs())? true : false;
                };
                bool estHorizontal(){
                        return (org.getOrd() == ext.getOrd())? true : false;
                };
                double longeur(){
                        return
sqrt((ext.getAbs()-org.getAbs())*(ext.getAbs()-org.getAbs())+(ext.getOrd()-org.getOrd())*(ext.getOrd()-org.getOrd()));
                };
                ~Segment();
};


int main(int argc, char const *argv[])
{
        //Point p1 = new Point(12,19);
        //Point p2 = new Point();

        //p1.afficher();
        //p2.afficher();

        return 0;
}

