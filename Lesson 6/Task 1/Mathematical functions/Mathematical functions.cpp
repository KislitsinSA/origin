#include<iostream>
#include"main.h"

double add(double num1, double num2) {
	return num1 + num2;}

double subtract(double num1, double num2) {
	return num1 - num2;}

double multiply(double num1, double num2) {
	return num1 * num2;}

double divide(double num1, double num2) {
	return num1 / num2;}

double exponentiation(double num1, int num2) {
	auto num_buf{ 1 };
	for(int i = 0; i<=num2-1; i++)
	{
		num_buf *= num1;
	}
	return num_buf;}
