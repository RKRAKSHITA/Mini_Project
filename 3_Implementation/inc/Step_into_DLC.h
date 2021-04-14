/** 
* @file Step_into_DLC.h
* DLC based application application 
*
*/
#ifndef __STEP_INTO_DLC_H__
#define __STEP_INTO_DLC_H__

#include <stdio.h>
#include <stdlib.h>


/**
*  performs and operation of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of a.b
*/
int And_gate(int a, int b);

/**
*  performs or operation of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of a+b
*/
int Or_gate(int a, int b);

/**
*  performs not operation of a and returns the result
* @param[in] a
* @return Result of ~a
*/
int Not_gate(int a, int b);

/**
*  performs nor operation of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of ~(a+b)
*/
int Nor_gate(int a, int b);

/**
*  performs exor operation of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of a^b
*/
int Exor_gate(int a, int b);

/**
*  performs exnor operation of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of ~(a^b)
*/
int Exnor_gate(int a, int b);

/**
*  performs and operation of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return Result of a.b
*/
int And_gate(int a, int b);

/**
*  half adder function of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return sum
*/
int Half_adder(int a, int b);

/**
*  half subtractor function of a, b and returns the result
* @param[in] a
* @param[in] b 
* @return difference
*/
int Half_subtractor(int a, int b);
#endif  /* #define __STEP_INTO_DLC_H__ */