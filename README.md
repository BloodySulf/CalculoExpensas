<h1>Ejercicio Cálculo de Expensas</h1>
Se desea hacer una aplicación para calcular el Monto de las Expensas de los departamentos de un 
edificio, de un determinado mes. La información que se registra para poder hacer dicho cálculo, de 
cada departamento, es la siguiente:
<p>Número de departamento (valor entero).</p>
<p>Categoría del departamento (valor carácter: ‘p’ =Piso, ‘s’=semi-piso, ‘d’=dos ambientes, 
‘m’=monoambiente)</p>
<p>Marca para indicar si está destinado a uso profesional (1 =Uso profesional, 0=Uso particular).
</p>
<p>Marca para indicar si el departamento tiene o no cochera (‘S’=Sí, ‘N’=No).</p>
<p>Monto de multas por incumplimiento de reglamento de convivencia (valor real) Ingresar sólo si el 
departamento tiene multas para pagar.</p>
<p>Los datos de los departamentos del edificio terminan cuando el operador indica que no desea 
registrar más datos de departamentos.</p>
<p>Cada categoría de departamento tiene un valor base de expensa, que surge de los gastos comunes 
del edificio y es $ 4000, $ 3000 y $ 2000 y $ 1000, respectivamente. El valor Adicional por Uso 
Profesional es $ 2500. El valor Adicional por tener Cochera es $ 1500.</p>
El cálculo del valor del Monto de la Expensa es la siguiente:
<p>Monto de Expensa=Valor Base según la categoría + Adicional Profesional (si el destino es profesional) 
+ Adicional Cochera (si tiene cochera).</p>
<p>Hacer una función que tenga como parámetros la categoría del departamento, la marca si es o no de 
uso profesional y la marca si tiene o no cochera y devuelva como resultado el Monto de la Expensa.
Informar por cada departamento el Monto Total a pagar, es decir, el Monto de la Expensa más el 
Monto de las multas (si lo hubiera).</p>
Al finalizar el registro de la información de los departamentos, se debe informar:
<p>a) La cantidad de departamentos de categoría ‘d’ (dos ambientes) que son de uso profesional.</p>
<p>Hacer una función que tenga como parámetro el valor obtenido en el punto a y lo muestre por 
pantalla con carteles aclaratorios.</p>
