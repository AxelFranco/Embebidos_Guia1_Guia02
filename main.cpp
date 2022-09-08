/*! @mainpage Guia 1_01 Trabajos Practicos
 * @date Thursday, August 25, 2021
 */

#include "mbed.h"   // Incluye las librerias "mbed.h" and "arm_book_lib.h"
#include "arm_book_lib.h"

int main()
{
    DigitalIn gasDetector(D2); /**< Objeto asociado input digital al detector de GAS (pin D2) - Constructor */

    DigitalOut alarmLed(LED1); /**< Objeto asociado output digital llamado alarmLed, es declarado y asignado a LED1 - Constructor */

    gasDetector.mode(PullDown); /**< gasDetector se configura con un resistor interno de pull-down - Constructor */

    alarmLed = OFF; /**< alarmLed es asignado a OFF */

    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON; /**<Si el gasDetector esta activo, asigno la alarmaLed a ON */
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF; /**<Si el gasDetector esta apagado, alarmLed es asignado a OFF */
        }
    }
}