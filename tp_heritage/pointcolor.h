#ifndef POINTCOLOR_H
#define POINTCOLOR_H
#include "point.h"


class pointColor : public point {

         private
          string  _color;
        pointColor()(int x , int y, string c);
        pointColor();
        pointColor(pointColor& p);// CONSTRUEUR PAR RECOPIE
        void Afficher();
         ~pointColor();


};

#endif // POINTCOLOR_H

