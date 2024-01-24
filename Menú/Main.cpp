#include <iostream>
#include <math.h>
using namespace std;

int main() {
  
  
  cout << "**************************************************" << endl;
  cout << "************** CALCULADORA GEOMETRICA ************" << endl;
  cout << "**************************************************" << endl;
  

  int opcion, figura;
  double lado1, lado2, lado3, lado4, radio, apotema, bmayor, bmenor, h;
  
  do {
    cout << "FUNCIONES:" << endl;
    cout << "1. Perimetro" << endl;
    cout << "2. Area" << endl; 
    cout << "3. Volumen" << endl;
    cout << "4. Salir" << endl;
    
    cout << "Opcion: ";
    cin >> opcion;
    
    if(opcion == 1) {
      cout << "FIGURAS:" << endl;
      cout << "1. Circulo" << endl;
      cout << "2. Cuadrado" << endl;
      cout << "3. Triangulo" << endl;
      cout << "4. Rectangulo" << endl;
      cout << "5. Pentagono" << endl;
      cout << "6. Hexagono" << endl; 
      cout << "7. Heptagono" << endl;
      cout << "8. Octogono" << endl;
      cout << "9. Rombo" << endl;
      cout << "10. Trapecio" << endl;

      cout << "Figura: ";
      cin >> figura;

      if(figura == 1) {
        cout << "Radio: ";
        cin >> radio;
        double perimetro = 2 * 3.1416 * radio; 
        cout << "Perimetro Circulo: " << perimetro << endl;

      } else if(figura == 2) {
        cout << "Lado: ";
        cin >> lado1; 
        double perimetro = 4 * lado1;
        cout << "Perimetro Cuadrado: " << perimetro << endl;

      } else if(figura == 3) {
        cout << "Lado 1: ";
        cin >> lado1;
        cout << "Lado 2: ";
        cin >> lado2;
        cout << "Lado 3: "; 
        cin >> lado3;
        double perimetro = lado1 + lado2 + lado3;
        cout << "Perimetro Triangulo: " << perimetro << endl;

      } else if(figura == 4) {
        cout << "Lado menor: ";
        cin >> lado1;
        cout << "Lado mayor: ";
        cin >> lado2; 
        double perimetro = 2*lado1 + 2*lado2; 
        cout << "Perimetro Rectangulo: " << perimetro << endl;

      } else if(figura == 5) {
        cout << "Longitud de lado: ";
        cin >> lado1;
        double perimetro = 5 * lado1;
        cout << "Perimetro Pentagono: " << perimetro << endl;

      } else if(figura == 6) {
        cout << "Longitud de lado: ";
        cin >> lado1;
        double perimetro = 6 * lado1;
        cout << "Perimetro Hexagono: " << perimetro << endl;

      } else if(figura == 7) {
        cout << "Longitud de lado: ";
        cin >> lado1;
        double perimetro = 7 * lado1; 
        cout << "Perimetro Heptagono: " << perimetro << endl;

      } else if(figura == 8) {
        cout << "Longitud de lado: ";
        cin >> lado1;
        double perimetro = 8 * lado1;
        cout << "Perimetro Octogono: " << perimetro << endl;

      } else if(figura == 9) {
        cout << "Lado: ";
        cin >> lado1;
        double perimetro = 4 * lado1;
        cout << "Perimetro Rombo: " << perimetro << endl;

      } else if(figura == 10) {
        cout << "Lado 1: ";
        cin >> lado1;
        cout << "Lado 2: ";
        cin >> lado2;
        cout << "Lado 3: ";
        cin >> lado3; 
        cout << "Lado 4: ";
        cin >> lado4;
        double perimetro = lado1 + lado2 + lado3 + lado4;
        cout << "Perimetro Trapecio: " << perimetro << endl;
      }

    } else if(opcion == 2) {
      
      cout << "FIGURAS:" << endl;
      cout << "1. Circulo" << endl;
      cout << "2. Cuadrado" << endl;
      cout << "3. Triangulo" << endl;
      cout << "4. Rectangulo" << endl;
      cout << "5. Pentagono" << endl;
      cout << "6. Hexagono" << endl;
      cout << "7. Heptagono" << endl;
      cout << "8. Octogono" << endl;
      cout << "9. Rombo" << endl; 
      cout << "10. Trapecio" << endl;

      cout << "Figura: ";
      cin >> figura;

      if(figura == 1) {
        cout << "Radio: "; 
        cin >> radio;
        double area = 3.1416 * pow(radio, 2);
        cout << "Area Circulo: " << area << endl;

      } else if(figura == 2) {
        cout << "Lado: ";
        cin >> lado1;
        double area = pow(lado1, 2); 
        cout << "Area Cuadrado: " << area << endl;

      } else if(figura == 3) { 
        cout << "Base: ";
        cin >> lado1;
        cout << "Altura: ";
        cin >> lado2; 
        double area = (lado1 * lado2) / 2;
        cout << "Area Triangulo: " << area << endl;

      } else if(figura == 4) {
        cout << "Lado menor: ";
        cin >> lado1;
        cout << "Lado mayor: ";
        cin >> lado2;
        double area = lado1 * lado2;
        cout << "Area Rectangulo: " << area << endl;

      } else if(figura == 5) {
        cout << "Lado: "; 
        cin >> lado1; 
        cout << "Apotema: ";
        cin >> apotema;
        double area = (5 * pow(lado1, 2)) / (4 * tan(M_PI/5));  
        cout << "Area Pentagono: " << area << endl;

      } else if(figura == 6) {
        cout << "Longitud de lado: ";
        cin >> lado1;
        double area = (6 * pow(lado1, 2)) / (4 * tan(M_PI/6));
        cout << "Area Hexagono: " << area << endl;

      } else if(figura == 7) {
        cout << "Longitud de lado: "; 
        cin >> lado1;
        cout << "Apotema: ";
        cin >> apotema;
        double area = (7 * lado1 * apotema) / 2;
        cout << "Area Heptagono: " << area << endl;

      } else if(figura == 8) {
        cout << "Longitud de lado: ";
        cin >> lado1; 
        cout << "Apotema: "; 
        cin >> apotema;
        double area = (2 + 4/tan(M_PI/8)) * pow(lado1, 2);
        cout << "Area Octogono: " << area << endl;

      } else if(figura == 9) {
        cout << "Diagonal mayor: ";
        cin >> lado1;
        cout << "Diagonal menor: ";
        cin >> lado2;
        double area = (lado1 * lado2)/2;
        cout << "Area Rombo: " << area << endl;

      } else if(figura == 10) {
        cout << "Base mayor: ";
        cin >> bmayor;
        cout << "Base menor: "; 
        cin >> bmenor; 
        cout << "Altura: ";
        cin >> h;
        double area = ((bmayor + bmenor) / 2) * h;
        cout << "Area Trapecio: " << area << endl << endl; 
      }

    } else if(opcion == 3) {

      cout << "FIGURAS:" << endl;
      cout << "1. Cubo" << endl;
      cout << "2. Esfera" << endl;
      cout << "3. Cilindro" << endl;
      cout << "4. Cono" << endl;
      cout << "5. Piramide Cuadrangular" << endl;
      cout << "6. Prisma Rectangular" << endl;
      cout << "7. Tetraedro" << endl;
      cout << "8. Octaedro" << endl;
cout << "9. Cilindro Oblicuo" << endl;  
cout << "10. Cono Truncado" << endl;

cout << "Figura: ";
cin >> figura;

if(figura == 1) {
  cout << "Lado: ";
  cin >> lado1;
  double volumen = pow(lado1, 3); 
  cout << "Volumen Cubo: " << volumen << endl;   

} else if(figura == 2) {
  cout << "Radio: ";
  cin >> radio;
  double volumen = (4/3.0) * M_PI * pow(radio, 3);
  cout << "Volumen Esfera: " << volumen << endl;

} else if(figura == 3) {
  cout << "Radio: ";
  cin >> radio;
  cout << "Altura: ";
  cin >> lado1;
  double volumen = M_PI * pow(radio, 2) * lado1;
  cout << "Volumen Cilindro: " << volumen << endl;

} else if(figura == 4) {
  cout << "Radio: ";
  cin >> radio;
  cout << "Altura: ";
  cin >> lado1;
  double volumen = M_PI * pow(radio, 2) * (lado1/3);
  cout << "Volumen Cono: " << volumen << endl; 

} else if(figura == 5) {
  cout << "Lado Base: ";
  cin >> lado1;
  cout << "Altura Pirámide: ";
  cin >> lado2;  
  double volumen = (pow(lado1, 2) * lado2) / 3;
  cout << "Volumen Piramide Cuadrangular: " << volumen << endl;

} else if(figura == 6) {
  cout << "Largo: ";
  cin >> lado1;
  cout << "Ancho: ";
  cin >> lado2;
  cout << "Altura: ";
  cin >> lado3;
  double volumen = lado1 * lado2 * lado3;
  cout << "Volumen Prisma Rectangular: " << volumen << endl;  

} else if(figura == 7) {
  cout << "Longitud de arista: "; 
  cin >> lado1;
  double volumen = pow(lado1, 3) / (6 * sqrt(2)); 
  cout << "Volumen Tetraedro: " << volumen << endl;  

} else if(figura == 8) {
  cout << "Longitud de arista: ";
  cin >> lado1;
  double volumen = pow(lado1, 3) / 3;
  cout << "Volumen Octaedro: " << volumen << endl;   

} else if(figura == 9) {
  cout << "Diametro: "; 
  cin >> lado1;
  cout << "Altura: ";
  cin >> lado2;
  double volumen = M_PI * pow(lado1, 2) * lado2 / 4; 
  cout << "Volumen Cilindro Oblicuo: " << volumen << endl;

} else if(figura == 10) {
  cout << "Radio Mayor: ";
  cin >> radio;
  cout << "Radio Menor: ";
  cin >> lado1;
  cout << "Altura: ";
  cin >> lado2;
  double volumen = M_PI * lado2 * (pow(radio, 2) + radio * lado1 + pow(lado1, 2)) / 3;
  cout << "Volumen Cono Truncado: " << volumen << endl;  
}

} else if(opcion == 4) {
  break; 
}

  } while(opcion != 4);
  
  return 0;
}
  } while(opcion != 4);
  
  return 0;
}
