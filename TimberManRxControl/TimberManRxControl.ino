/*
 * This code configures the reception pins between the RF 433 MHz module an Arduino 
 * It also establishes a serial communication between PC and Arduino to send control movements
 * 
 * @author: Jorge Zepeda Tinoco on 22/04/18
 * @email: jorzet.94@gmail.com
 */

#include <VirtualWire.h>

#define LED 6
#define RX 11
#define TX 12
#define PUSH 3

/*
 * defines macros movements
 */
#define MOVEMENT_ONE "a"
#define MOVEMENT_TWO "b"
#define MOVEMENT_THREE "c"
#define MOVEMENT_FOUR "d"
#define MOVEMENT_FIVE "e"
#define MOVEMENT_SIX "f"

int comingData[21];
int movement;

/*
 * set up pins and baud rate
 */
void setup() {
    Serial.begin(9600);
    vw_set_tx_pin(TX);
    vw_set_rx_pin(RX);
    vw_set_ptt_pin(PUSH);
    vw_set_ptt_inverted(true); 
    vw_setup(2000);  
    
    vw_rx_start();
    pinMode(LED, OUTPUT);
}

void loop() {
    // set bufer length
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

    // check if module has a message
    if (vw_get_message(buf, &buflen)) { // Non-blocking
        //digitalWrite(LED, HIGH); // Flash a light to show received good message   
        int i;
        for (i = 0; i < buflen; i++) {
            comingData[i] = int(buf[i]);
        }
    
        sscanf((char*)comingData, "%d", &movement);
        //digitalWrite(LED, LOW);
        Serial.println(movement);

        /* 
        *  check movement and write to serial port
        *  according to the movement it gonna send a character to serial port
        */
        switch (movement) {
            case 1:
                Serial.println(MOVEMENT_ONE);
            break;
            case 2:
                Serial.println(MOVEMENT_TWO);
            break;
            case 3:
                Serial.println(MOVEMENT_THREE);
            break;
            case 4:
                Serial.println(MOVEMENT_FOUR);
            break;
            case 5:
                Serial.println(MOVEMENT_FIVE);
            break;  
            case 6:
                Serial.println(MOVEMENT_SIX);
            break;
        }
        //delay(100);
    }

    // clear coming data
    memset(comingData, 0, sizeof(comingData));    
}
