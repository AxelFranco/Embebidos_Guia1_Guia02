/*! @mainpage Guia 1 Trabajos Practicos
 * @date Thursday, August 25, 2021
 */

//=====[Libraries]=========================================================

#include "mbed.h"   // Incluye las librerias "mbed.h" and "arm_book_lib.h"
#include "arm_book_lib.h"

int main()
{
    //=====[Declaracion e inicializacion de variables]====================

    // Equivalente a DigitalIn GasDetector
    gpio_t * gasDetector2 = (gpio_t *)malloc(sizeof(gpio_t)); 
    gpio_init_in(gasDetector2, D2); /**< Objeto asociado input digital al detector de GAS (pin D2) - Constructor */
    // *****************************

    // Equivalente a DigitalOut AlarmLed
    gpio_t * alarmLed2 = (gpio_t *)malloc(sizeof(gpio_t));
    gpio_init_out(alarmLed2, LED1); /**< Objeto asociado output digital llamado alarmLed, es declarado y asignado a LED1 - Constructor */
    // ****************************

    // Equivalente a gasDetector.mode(Pulldown)
    gpio_mode(gasDetector2, PullDown);  /**< gasDetector se configura con un resistor interno de pull-down - Constructor */
    // **********************

    // Equivalente a alarmLed2 = OFF
    gpio_write(alarmLed2, OFF);  /**< alarmLed es asignado a OFF */ 
    // ***********************
    
    // Loop de repeticion eterno
    while (true) {


        // Equivalente a if (gasDetector == ON)
        if (gpio_read(gasDetector2) == ON)
        {
            gpio_write(alarmLed2, ON); /*<Si el gasDetector esta activo, asigno la alarmaLed a ON */
        }
        // ************************

        // Equivalente a if (gasDetector == OFF)
        if (gpio_read(gasDetector2) == OFF)
        {
            gpio_write(alarmLed2, OFF); /*<Si el gasDetector esta apagado, alarmLed es asignado a OFF */
        }
        // *************************
    }
}

/**
 * @note Github es un portal creado para alojar el codigo de las aplicaciones de cualquier desarrollador 
 */