#include "pointColor.h"
// je passe des parrametre âr defaut à mon a constructeur
pointColor::pointColor(int x, int y, string c):point(x,y),_color(c)
{
};
pointColor::pointColor(): _color("rouge"){};

pointColor::~pointColor()
{//dtor
}

void pointColor::Afficher(){
   this->point::afficher();
   cout <<"la couleur est:" <<this->_color;
};

pointColor::pointColor(pointColor& p):point(p.x,p.y), _color(p.color){

}


