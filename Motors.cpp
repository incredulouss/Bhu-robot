
///*
//  Motors.cpp - Library for running Motors.
//  Created by Utkarsh Gupta, July 7, 2018.
//  Released into the public domain.
//*/
//
//#include "Arduino.h"
//#include "Motors.h"
//
//Motors::Motors()
//{
//   config( 26,22,24,30,28,4,3 ,13); 
//}
//    
//
//void Motors:: config(int rp1, int rp2,int lp1,int lp2)
//{
//   
//     rightMotor1 = rp1;
//     rightMotor2 = rp2;
//     leftMotor1  = lp1;
//     leftMotor2  = lp2 ;
//
//    
//     pinMode(rightMotor1, OUTPUT);
//     pinMode(rightMotor2, OUTPUT);
//     pinMode(leftMotor1, OUTPUT);
//     pinMode(leftMotor2, OUTPUT);
//   
//
//}
//
//
// void Motors:: forward(int maxx , int mins)
//{
//
//  
//  analogWrite(rightMotor1, maxs);
//  analogWrite(rightMotor2, mins);
//  analogWrite(leftMotor1, maxx);
//  analogWrite(leftMotor2, mins);
//  
//}
//void Motors:: right(int maxx , int mins)
//{
//
//
// 
//  analogWrite(rightMotor1, mins);
//  analogWrite(rightMotor2, maxs);
// 
//  analogWrite(leftMotor1, maxs);
//  analogWrite(leftMotor2, mins);
//
//}
//void Motors:: left(int maxx , int mins)
//{
//
//  analogWrite(motorPower, 1); 
//  analogWrite(rightMotor1, 1);
//  analogWrite(rightMotor2, 0);
//  analogWrite(rightMotorPWM, pwm);
//  analogWrite(leftMotor1, 0);
//  analogWrite(leftMotor2, 1);
//  analogWrite(leftMotorPWM, pwm+10);
//}
//void Motors:: stp(int maxx , int mins)
//{
//  analogWrite(motorPower, 1);
//  analogWrite(rightMotor1, 0);
//  analogWrite(rightMotor2, 1);
//  analogWrite(rightMotorPWM, 0);
//  analogWrite(leftMotor1, 0);
//  analogWrite(leftMotor2, 1);
//  analogWrite(leftMotorPWM, 0+10);
//  for(int i=100;i>=0;i=i-2)
//  {
//     analogWrite(leftMotorPWM, i);
//     analogWrite(rightMotorPWM, i);
//  }
////}
