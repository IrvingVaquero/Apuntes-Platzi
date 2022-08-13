/* 
    !   Fuertemente tipado
    !   Funcional
    !   POO basada en clases y componenetes

    !   Clases y objetos
    *   Un objeto es una instancia de una clase
    *   Una clase es la plantilla

    ! Ejemplo de clase vr 6.0

    var escuela = new CoreEscuela();
    escuela.nombre = "Platzi";
    escuela.direccion = "Tecnologico";
    escuela.anioFundacion = 2008;
    Console.WriteLine("Timbre");
    escuela.Timbrar();

    class CoreEscuela{
        public string nombre;
        public string direccion;
        public int anioFundacion;

        public void Timbrar(){
            Console.Beep(10000, 3000);
        }

    }

    !   Ejemplo lista de valores

    namespace CoreEscuela.Entidades
{
    public enum TiposEscuela
    {
        Primaria, Secundaria, PreEscolar
    }

}




 */