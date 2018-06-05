##Tarea-2.-Puerta
#PRÁCTICA 2. Puerta, control de acceso con disminución de consumo de energía. Versión 1	15/03/2018

##Descripción
#Realización de un programa que simula el funcionamiento del control de acceso de una puerta utilizando un Reed Switch. El funcionamiento del circuito pretende que el Reed Switch se encuentre fijo en el marco de la puerta y en la puerta se encuentre un imán el cual activa el Reed Switch cuando hacen contacto, la alarma se activa cada vez que la puerta se abre (es decir, el imán se encuentra lejos del Reed Switch), enviando un mensaje de alerta en un Pantalla LCD y emite un sonido utilizando un Buzzer. Cuando la puerta se cierra la Pantalla vuelve a su estado inicial y el Buzzer deja de emitir sonido. El programa cuenta con instrucciones específicas para lograr disminuir el consumo de energía del arduino (modo sleep()), utilizando interrupciones para dormir y despertar el arduino cuando sea necesario.
##Requisitos básicos para la instalación y utilización del programa
1. Para poder ejecutar el código se debe contar con el software Arduino, que fue utilizado en esta práctica.
2. El diagrama incluido fue elaborado en el software de diseño de circuitos Fritzing.
3. El programa, código y diagrama fueron elaborados utilizando el sistema operativo Linux.
4. Otro requisito es contar con el circuito propiamente armado para que dicho programa pueda funcionar correctamente
