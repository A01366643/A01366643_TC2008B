// Para correrlo, dale clic a run 

/*Ejemplo 
Punto A
(3,2)
Punto B
(15, 5)
Puntos de linea 
(3,2)
(4,2)
(5,2)
(6,2)
(7,3)
(8,3)
(9,3)
(10,3)
(11,4)
(12,4)
(13,4)
(14,4)
(15,5)
*/
  
#include <iostream>

using namespace std;

void lineDrawing(int x1, int y1, int x2, int y2){
  int dx, dy, y;

  dx = x2 - x1;
  dy = y2 - y1;

  for(int x = x1; x <= x2; x++){
    y = y1 + dy * (x - x1) / dx;
    cout << "(" << x << "," << y << ")" << endl;
  }  
}
int main() {
  int x1, x2, y1, y2;

  cout << "Punto A (x,y)" << endl;
  cin >> x1;
  cin >> y1;

  cout << "Punto B (x,y)" << endl;
  cin >> x2; 
  cin >> y2;

  lineDrawing(x1, y1, x2, y2);

  return 0;
}