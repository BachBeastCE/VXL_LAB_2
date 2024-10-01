#include "LAB2.h"

int counter0= 100;
int counter1= 100;
int counter2= 100;

int status0 = 0;
int status1 = 0;

const int MAX_LED = 4;
int index_led = 0;
int led_buffer [4] = {2, 4, 6, 8};

int hour = 15, minute = 8, second = 50;

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer [8] = {0x3c,0x7e,0xc3,0xc3,0xff,0xff,0xc3,0xc3};




/////////////////////////
void display7SEG(int num){
	switch (num){
	case 0:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
	    break;
	}
	case 1:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
	    break;
	}
	case 2:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 3:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 4:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 5:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 6:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 7:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_SET);
	    break;
	}
	case 8:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	case 9:{
	    HAL_GPIO_WritePin(GPIOB, SEG0, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG1, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG2, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG3, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG4, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOB, SEG5, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(GPIOB, SEG6, GPIO_PIN_RESET);
	    break;
	}
	}
}

void update7SEG ( int index ){
	switch ( index ){
	case 0:{
		// Display the first 7 SEG with led_buffer [0]
		display7SEG(led_buffer[0]);
		HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
		break ;
	}
	case 1:{
		// Display the second 7 SEG with led_buffer [1]
		display7SEG(led_buffer[1]);
	    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
		break ;
	}
	case 2:{
		// Display the third 7 SEG with led_buffer [2]
		display7SEG(led_buffer[2]);
	    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
		break ;
	}
	case 3:
	{
		// Display the forth 7 SEG with led_buffer [3]
		display7SEG(led_buffer[3]);
	    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_RESET);
		break ;
	}
	}
}

void updateClockBuffer(){
	led_buffer[0]= hour/10;
	led_buffer[1]= hour %10;
	led_buffer[2] = minute /10;
	led_buffer[3] = minute %10;
}

void displayROWLEDMatrix(uint8_t value){
	HAL_GPIO_WritePin(GPIOA,ENM0, !((value >> 7) & 1));
	HAL_GPIO_WritePin(GPIOA,ENM1, !((value >> 6) & 1));
	HAL_GPIO_WritePin(GPIOA,ENM2, !((value >> 5) & 1));
	HAL_GPIO_WritePin(GPIOA,ENM3, !((value >> 4) & 1));
	HAL_GPIO_WritePin(GPIOA,ENM4, !((value >> 3) & 1));
	HAL_GPIO_WritePin(GPIOA,ENM5, !((value >> 2) & 1));
	HAL_GPIO_WritePin(GPIOA,ENM6, !((value >> 1) & 1));
	HAL_GPIO_WritePin(GPIOA,ENM7, !((value) & 1));
}

void updateLEDMatrix (int index ){
	switch ( index ){
		case 0:{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_SET);
			displayROWLEDMatrix( matrix_buffer[0]);
			break ;
		}
		case 1:
		{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_SET);
			displayROWLEDMatrix( matrix_buffer[1]);
			break ;
		}
		case 2:
		{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_SET);
			displayROWLEDMatrix( matrix_buffer[2]);
			break ;
		}
		case 3:
		{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_SET);
			displayROWLEDMatrix( matrix_buffer[3]);
			break ;
		}
		case 4:
		{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_SET);
			displayROWLEDMatrix( matrix_buffer[4]);
			break ;
		}
		case 5:
		{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_SET);
			displayROWLEDMatrix( matrix_buffer[5]);
			break ;
		}
		case 6:
		{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_SET);
			displayROWLEDMatrix( matrix_buffer[6]);
			break ;
		}
		case 7:
		{
			HAL_GPIO_WritePin(GPIOB, ROW0, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW1, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW2, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW3, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW4, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW5, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW6, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, ROW7, GPIO_PIN_RESET);
			displayROWLEDMatrix( matrix_buffer[7]);
			break ;
		}
	}
}

void shift_right_around(){
	matrix_buffer [0] =  (matrix_buffer [0] >> 1) | (matrix_buffer [0] << (7));
	matrix_buffer [1] =  (matrix_buffer [1] >> 1) | (matrix_buffer [1] << (7));
	matrix_buffer [2] =  (matrix_buffer [2] >> 1) | (matrix_buffer [2] << (7));
	matrix_buffer [3] =  (matrix_buffer [3] >> 1) | (matrix_buffer [3] << (7));
	matrix_buffer [4] =  (matrix_buffer [4] >> 1) | (matrix_buffer [4] << (7));
	matrix_buffer [5] =  (matrix_buffer [5] >> 1) | (matrix_buffer [5] << (7));
	matrix_buffer [6] =  (matrix_buffer [6] >> 1) | (matrix_buffer [6] << (7));
	matrix_buffer [7] =  (matrix_buffer [7] >> 1) | (matrix_buffer [7] << (7));
}

////////////////////////


void INIT_LAB2_EX0(void){
	//GPIO SET UP
	__HAL_RCC_GPIOA_CLK_ENABLE();
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	GPIO_InitStruct.Pin = LED_RED;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    //BEGIN
    HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_RESET);
}

void INIT_LAB2_EX1(void) {
	//GPIOA SET UP
	__HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = LED_RED|EN0|EN1;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    //GPIOB SET UP
    __HAL_RCC_GPIOB_CLK_ENABLE();
    GPIO_InitStruct.Pin = SEG0|SEG1|SEG2|SEG2|SEG3|SEG4|SEG5|SEG6;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
    //BEGIN
    HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_RESET);
}

void INIT_LAB2_EX2(void){
	//GPIOA SET UP
    __HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = LED_RED|DOT|EN0|EN1|EN2|EN3;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    //GPIOB SET UP
    __HAL_RCC_GPIOB_CLK_ENABLE();
    GPIO_InitStruct.Pin = SEG0|SEG1|SEG2|SEG2|SEG3|SEG4|SEG5|SEG6;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
    //BEGIN
    HAL_GPIO_WritePin(GPIOA, LED_RED, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, DOT, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_RESET);
}

void INIT_LAB2_EX4(void){
	INIT_LAB2_EX2();
}

void INIT_LAB2_EX5(void){
	INIT_LAB2_EX2();
}

void INIT_LAB2_EX6(void){
	INIT_LAB2_EX0();
}

void INIT_LAB2_EX7(void){
	INIT_LAB2_EX2();
}
void INIT_LAB2_EX8(void){
	INIT_LAB2_EX2();
}
void INIT_LAB2_EX9(void){
	//GPIOA SET UP
    __HAL_RCC_GPIOA_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = ENM0|ENM1|ENM2|ENM3|ENM4|ENM5|ENM6|ENM7;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    //GPIOB SET UP
    __HAL_RCC_GPIOB_CLK_ENABLE();
    GPIO_InitStruct.Pin = ROW0|ROW1|ROW2|ROW3|ROW4|ROW5|ROW6|ROW7;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}
void INIT_LAB2_EX10(void){
	uint8_t right_arrow[8]={0x30,0x18,0x0c,0xfe,0xfe,0x0c,0x18,0x30};
	for(int i =0; i < MAX_LED_MATRIX; i++){
		matrix_buffer [i] = right_arrow[i];
	}
	INIT_LAB2_EX9();
}

////////// EXCUTE ////////////////////////////

void EXECUTE_LAB2_EX0(void){
	counter0--;
	if(counter0 <=0){
		counter0 = 100;
		//TODO
		HAL_GPIO_TogglePin(GPIOA, LED_RED);
		//END
	}
}

void EXECUTE_LAB2_EX1(void) {
	counter1--;
		if(counter1 <=0){
				counter1 = 50;
				switch(status1){
				case 0:{
					HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
					display7SEG(1);
					status1 = 1;
					break;
				}
				case 1:{
				    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
				    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_RESET);
					display7SEG(2);
					status1 = 0;
					break;
				}
				}
		}
}

void EXECUTE_LAB2_EX2(void){
	counter1--;
	counter2--;
		if(counter1 <=0){
				counter1 = 50;
				//TODO
				switch(status0){
				case 0:{
					HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
					display7SEG(1);
					status0 = 1;
					break;
				}
				case 1:{
				    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
				    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
					display7SEG(2);
					status0 = 2;
					break;
				}
				case 2:{
				    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
				    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
					display7SEG(3);
					status0 = 3;
					break;
				}
				case 3:{
				    HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
				    HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_RESET);
					display7SEG(0);
					status0 = 0;
					break;
				}
				}
		}
	if(counter2 <=0){
		counter2 = 100;
		//TODO
		HAL_GPIO_TogglePin(GPIOA, DOT);
		//END
	}
}

void EXECUTE_LAB2_EX4(void){
	counter1--;
	counter2--;
	if(counter1 <=0){
		counter1 = 25;
		//TODO
		update7SEG (index_led++);
		if(index_led == MAX_LED){index_led=0;}
	}
	if(counter2 <=0){
		counter2 = 100;
		//TODO
		HAL_GPIO_TogglePin(GPIOA, DOT);
		//END
	}

}

void EXECUTE_LAB2_EX5(void){
	second ++;
		if ( second >= 60) {
			second = 0;
			minute ++;
		}
		if( minute >= 60) {
			minute = 0;
			hour ++;
		}
		if( hour >=24){
			 hour = 0;
		}
		updateClockBuffer ();
		HAL_Delay (1000) ;
}

void EXECUTE_LAB2_EX6(void){
	HAL_GPIO_TogglePin ( GPIOA , LED_RED );
}
void EXECUTE_LAB2_EX7(void){
	second ++;
	HAL_GPIO_TogglePin ( GPIOA , DOT );
		if ( second >= 60) {
			second = 0;
			minute ++;
		}
		if( minute >= 60) {
			minute = 0;
			hour ++;
		}
		if( hour >=24){
			 hour = 0;
		}
		updateClockBuffer ();
}
void EXECUTE_LAB2_EX8(void){
		update7SEG (index_led++);
		if(index_led == MAX_LED){index_led=0;}
}

void EXECUTE_LAB2_EX9(void){
	updateLEDMatrix(index_led_matrix++);
	if(index_led_matrix >= MAX_LED_MATRIX){index_led_matrix=0;}
}

void EXECUTE_LAB2_EX10(void){
	shift_right_around();
}
