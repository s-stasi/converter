#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  do
  { 
    double tipo;
    cout << "" << endl;
    cout << "1)celsius-fahrenheit" << endl;
    cout << "2)fahrenheit-celsius" << endl;
    cout << "3)celsius-kelvin" << endl;
    cout << "4)kelvin-celsius" << endl;
    cout << "5)fahrenheit-kelvin" << endl;
    cout << "6)kelvin-fahrenheit" << endl;
    cout << "inserisci tipo:";
    cin >> tipo;
    
    if(tipo==1)
    {
      float fahrenheit, celsius;
      cout << "inserisci la temperatura in Celsius: ";
      cin >> celsius;
      fahrenheit = (celsius * 9.0) / 5.0 + 32;
      cout << "temperatura in fahrenheit: " << fahrenheit << endl;
    }
    else if(tipo==2)
    {
      float fahrenheit, celsius;
      cout << "inserisci la temperatura on fahrenheit: ";
      cin >> fahrenheit;
      celsius = (fahrenheit-32)*5/9;
      cout << "temperature in celsius: " << celsius << endl;
    }
    else if(tipo==3)
    {
      
      float celsius, kelvin;
      cout << "inserisci la temperatura in celsius: ";
      cin >> celsius;
      kelvin = celsius + 273.15;
      cout << "temperatura in kelvin:" <<kelvin << endl;
    }
    else if(tipo==4)
    {
      
      float kelvin, celsius;
      cout <<  "inserisci la temperatura in kelvin: ";
      cin >> kelvin;
      celsius = kelvin - 273.15;
      cout << "temperatura in celsius:" << celsius;
    }
    else if(tipo==5)
    {
      float fahrenheit, kelvin;
      cout << "inserisci la temperatura on fahrenheit: ";
      cin >> kelvin;
      kelvin = ((fahrenheit-32)*5/9)+273.15;
      cout << "temperatura in kelvin:" << kelvin;
    }
    else
    {
      float fahrenheit, kelvin;
      cout << "inserisci la temperatura on kelvin: ";
      cin >> fahrenheit;  
      fahrenheit = ((kelvin - 273.15) * 5/9) + 32;
      cout << "temperatura in fahrenheit:" << fahrenheit;
    }
  }while(true);
}