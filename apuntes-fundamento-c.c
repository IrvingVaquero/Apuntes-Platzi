/* 
    !   Funcionamiento de la namespace:
    *   Abarca de forma global en el programa
    %   >Clase
    %   >>Method
    %   >>Method
    %   >CLase
    %   >>Method
    %   >>Method

    !   Tipos de datos
    *   INT
    *   BOOL
    *   FLOAT
    *   DOUBLE
    *   CHAR
    *   STRING
    *   LONG
    *   UINT

    !   Variables
 */
    String hola = "Mensaje cambiado"; // *Declaracion de variable
    Console.WriteLine("Ingresa tu nombre"); 
    hola = Console.ReadLine(); //*Guarda lo que se teclea
    Console.WriteLine("Bienvenido" + hola);

    int number1;
    number1 = Convert.ToInt32(Console.ReadLine()); //* Casteo explisito 

/* 
    !   Lectura de usuarios
 */
 int number = float.parse(Console.ReadLine()) 

 /* 
    !   Arreglos - Arrays
  */
    string[] coffeType;
    float[] coffeVaues;

    coffeType = new string[] {"Negro","Capuchino"};
    coffeVaues = new float[] { 1.2f, 1.5f };
    foreach(var item in coffeVaues)
    {
        Console.WriteLine(item);

    }
    Console.WriteLine(coffeType.Length);

/* 
    !   Listas
 */
 
using System.Collections.Generic;
List<string> tacos = new List<string>();
tacos.Add("pastor");
Console.WriteLine(tacos[0]);

///

/* 
    !   Metodos de string
    *   string SchoolClone = School.Clone().ToString(); -- Crea un clon de la variable
    *   Console.WriteLine(ClassTopic.CompareTo(School)); -- Para comparar dos string
    *   Console.WriteLine(School.Contains("Pla")); -- Verifica si se contien la cadena
    *   Console.WriteLine(School.EndsWith("zi")); -- Containss pero al final de la variable
    *   Console.WriteLine(School.StartsWith("Pl")); -- Containss pero al principio de la variable
    *   Console.WriteLine(School.Equals(SchoolClone)); -- Devuelbe bool

    !   Motodos propios
'
*/
        public void suma(int a, int b)
        {
            Console.WriteLine("La suma es: " + (a + b));
        }

        public int multiplicacion(int a, int b)
        {
            return (a * b);
        }
        public float divicion(float a, float b)
        {
            if(b == 0)
            {
                return 0;
            }
            return a / b;
        }

/* 
    !   Metodo switch
 */
 switch (caseSwitch)
		{
          case "cola":
              Console.WriteLine("Cola soda - $2 USD");
              break;
          case "lime":
              Console.WriteLine("Lime soda - $1 USD");
              break;
          case "orange":
              Console.WriteLine("Orange soda - $1.5 USD");
              break;
        }


  
