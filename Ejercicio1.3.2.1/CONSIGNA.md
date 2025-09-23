Dificultad: básica, Requerido: Indispensable.
Desarrollar la función toMin (pasar a minutos) que recibe un número entero de
cuatro dígitos con formato de hhhmm, que corresponde a una cantidad de tiempo
expresado en horas y minutos, y retorna ese mismo valor expresado en minutos.

int toMin(int t);

Por ejemplo: si t fuese: 25048, que indica 250 horas y 48 minutos, la
función debe retornar: 15048.


Luego, desarrollar la función excedente, que recibe el precio de un abono
telefónico, la cantidad de minutos libres incluidos en dicho abono, el cargo por cada
minuto excedente y la cantidad de minutos utilizados por el abonado; y retorna la
cantidad de minutos excedidos y el importe que debe pagar el abonado.
El prototipo de la función debe ser el siguiente:

void excedente(double precio
, int minLibres
, double valorMinutoExcedente
, int minutosUtilizados
, int &minutosExcedidos
, double &importeAAbonar);

Utilizando lo anterior, junto con los datos y la operatoria que se describe
más abajo, emitir el siguiente listado:

Turno: mañana
Abonado         Dirección       Min.Libres     Min Exced. Total a abonar
xxxxxxxxxxxx    xxxxxxxxxxxxxxx     999            999      9999.99
xxxxxxxxxxxx    xxxxxxxxxxxxxxx     999            999      9999.99
xxxxxxxxxxxx    xxxxxxxxxxxxxxx     999            999      9999.99
: : : : :
Turno: Tarde
Abonado         Dirección       Min.Libres     MinExced. Total a abonar
xxxxxxxxxxxx    xxxxxxxxxxxxxxx     999            999     9999.99
xxxxxxxxxxxx    xxxxxxxxxxxxxxx     999            999     9999.99
xxxxxxxxxxxx    xxxxxxxxxxxxxxx     999            999     9999.99
: : : : :