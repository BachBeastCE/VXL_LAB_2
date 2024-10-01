#ifndef INC_LAB2_H_
#define INC_LAB2_H_

// INCLUDE LIBRARY
#include "main.h"
#include "timer.h"

// GPIO PORT A
#define ENM0 GPIO_PIN_2
#define ENM1 GPIO_PIN_3
#define DOT GPIO_PIN_4
#define LED_RED GPIO_PIN_5
#define EN0 GPIO_PIN_6
#define EN1 GPIO_PIN_7
#define EN2 GPIO_PIN_8
#define EN3 GPIO_PIN_9
#define ENM2 GPIO_PIN_10
#define ENM3 GPIO_PIN_11
#define ENM4 GPIO_PIN_12
#define ENM5 GPIO_PIN_13
#define ENM6 GPIO_PIN_14
#define ENM7 GPIO_PIN_15

// GPIO PORT B
#define SEG0 GPIO_PIN_0
#define SEG1 GPIO_PIN_1
#define SEG2 GPIO_PIN_2
#define SEG3 GPIO_PIN_3
#define SEG4 GPIO_PIN_4
#define SEG5 GPIO_PIN_5
#define SEG6 GPIO_PIN_6

#define ROW0 GPIO_PIN_8
#define ROW1 GPIO_PIN_9
#define ROW2 GPIO_PIN_10
#define ROW3 GPIO_PIN_11
#define ROW4 GPIO_PIN_12
#define ROW5 GPIO_PIN_13
#define ROW6 GPIO_PIN_14
#define ROW7 GPIO_PIN_15

// GLOBAL
extern int counter0; //LED
extern int counter1; //7SEG
extern int counter2; //DOT
extern int counter3;

extern int status0;
extern int status1;

extern const int MAX_LED;
extern int index_led;
extern int led_buffer [4];

extern int hour,minute,second;

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer [8];

// FUNCTIONS
void display7SEG(int index);
void update7SEG(int index);
void updateClockBuffer();
void displayLEDMatrix(uint8_t index );
void updateLEDMatrix (int index );

void shift_right_around(void);

// INIT
void INIT_LAB2_EX0(void);
void INIT_LAB2_EX1(void);
void INIT_LAB2_EX2(void);
void INIT_LAB2_EX4(void);
void INIT_LAB2_EX5(void);
void INIT_LAB2_EX6(void);
void INIT_LAB2_EX7(void);
void INIT_LAB2_EX8(void);
void INIT_LAB2_EX9(void);
void INIT_LAB2_EX10(void);
// EXCUTE
void EXECUTE_LAB2_EX0(void);
void EXECUTE_LAB2_EX1(void);
void EXECUTE_LAB2_EX2(void);
void EXECUTE_LAB2_EX4(void);
void EXECUTE_LAB2_EX5(void);
void EXECUTE_LAB2_EX6(void);
void EXECUTE_LAB2_EX7(void);
void EXECUTE_LAB2_EX8(void);
void EXECUTE_LAB2_EX9(void);
void EXECUTE_LAB2_EX10(void);

/////////// END ////////////

#endif /* INC_LAB2_H_ */
