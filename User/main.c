#include "stm32f10x.h"                  // Device header


int main(void)
{ 
		//RCC->APB2ENR =0x00000010;      //GPIOC时钟
		//GPIOC->CRH =0x00300000;        //PC13口的模式
	  //GPIOC->ODR =0x00002000;       //低电平点亮
	
    GPIO_InitTypeDef GPIO_InitStructure;                  //结构体命名
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE); //使能时钟（外设，刷新状态）
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;      //GPIO模式
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;            //GPIO端口
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;     //GPIO速度
		GPIO_Init(GPIOC,&GPIO_InitStructure);                 //GPIO初始化（GPIOx，&结构体命名）
 //   GPIO_SetBits(GPIOC,GPIO_Pin_13); 
		GPIO_ResetBits(GPIOC,GPIO_Pin_13);
	
	while (1)
	{
		
	}
}
