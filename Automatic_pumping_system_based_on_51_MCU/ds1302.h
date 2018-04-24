#ifndef __DS1302_H_
#define __DS1302_H_

//---����ͷ�ļ�---//
#include<reg51.h>
#include<intrins.h>

//---�ض���ؼ���---//
#ifndef uchar
#define uchar unsigned char
#endif

#ifndef uint 
#define uint unsigned int
#endif


//---����ds1302ʹ�õ�IO��---//
sbit DSIO=P3^4;
sbit RST= P3^5;
sbit SCLK=P3^6;

//---����ȫ�ֺ���---//
void Ds1302Write(uchar addr, uchar dat);
uchar Ds1302Read(uchar addr);
void Ds1302Init();
void Ds1302ReadTime();
void LcdDisplay();
void ShowWeek(void);

//---����ȫ�ֱ���--//
extern uchar TIME[7];
extern uchar WRITE_RTC_ADDR[7];

#endif