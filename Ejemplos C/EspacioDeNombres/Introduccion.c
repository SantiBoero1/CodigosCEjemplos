/*

En C, los espacios de nombre hacen referencia a como el lenguaje organiza a los diferentes identificadores 
(nombres de variables, funciones, etc) para evitar que haya conflictos de nombres en la ejecucion

En C, hay cuatro tipos principales de espacios de nombres que separan los diferentes tipos de identificadores para evitar colisiones:

1- Espacio de nombres para tipos estructurados (struct, union, enum):
   * Los nombres de struct, union y enum tienen su propio espacio de nombres.
   * Podemos tener el mismo nombre para una estructura y para una variable o funcion

2- Espacio de nombres para variables y funciones:
    * Las variables globales, locales y las funciones están en el mismo espacio de nombres.
    * Por lo tanto, no podemos declarar una variable con el mismo nombre que una función o viceversa dentro del mismo alcance. 


3- Espacio de nombres para miembros de struct y union:
    * Los miembros de struct y union tienen su propio espacio de nombres, y dos estructuras diferentes pueden tener miembros con los mismos nombres sin conflicto.
    * Sin embargo, dentro de una misma estructura, no puedes repetir nombres de miembros.
    
4- Espacio de nombres para etiquetas (label names):
    * Las etiquetas que se utilizan en las declaraciones goto tienen su propio espacio de nombres.
    * Esto significa que puedes tener el mismo nombre de etiqueta y de variable, ya que están en espacios separados.
    
*/