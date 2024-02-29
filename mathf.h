#pragma once
/** \file mathf.h
	\brief Libreria di funzioni per l'integrazione
	\author Matteo Montani
*/
#ifndef MATHF_H
#define MATHF_H

float Polynomial(float* coeff, int size, float in);
void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);
float Trapezoidal(float* values, int size, float stepsize);

#endif 
