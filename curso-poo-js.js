/*
!   Que es un objeto?  
? Objeto literal NO SON ISTANCIAS QUE NOSOTROS CREAMOS SI NO ARRAY U OBJECT
*/
let objLiteral = {
    "juan": 2,
    "pedro": 3
}
/*
!   Orientada a objetos  
*   Esta orientado a prototipos
*   Se crean como funtion
*   Es una instanncia del prototipo 
*/

/* 
!   Como crearlos
*/

function Student(name, age, cursosAprobados){
    this.name = name;
    this.age = age;
    this.cursosAprobados = cursosAprobados;
}
//  
Student.prototype.aprobarCurso = function(nuevoCurso){
    this.cursosAprobados.push(nuevoCurso);
}
let objeto = new Student(
    "Juanita alejadra",
    12,
    ["Curso de introduccion a POO","Otro curso"]
);

/* 
    ! Clases
 */

    class Studen2{
        constructor(name, age, cursosAprobados){
            this.name = name;
            this.age = age;
            this.cursosAprobados = cursosAprobados;
        }
        aprobarCursos = function(nuevoCurso){
            this.cursosAprobados.push(nuevoCurso);
        }
    }