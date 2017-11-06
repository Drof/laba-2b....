#include "stdafx.h"
#include <stdio.h>
#include <math.h>

// Декларації функцій
int num(int n);  //returns the value of a numerator of a given problem
int fact(int n); //a factorial function

				 //Глобальна змінна m
int m = 3;

int main() {

	double increment, sum = 1;

	// Ітерація по х в інтервалі (0.1; 0.4)
	for (float x = 0.1; x <= 0.4; x += 0.05) {

		// Ітерація по n, доки n-ий доданок не буде менше похибки
		for (int n = 1; ; n++) {

			increment = m * num(n) * pow(x, n) / fact(n);
			sum += increment;

			if (increment <= 0.001) {
				printf("%f\n", sum);
				break;
			}
		}
	}
}


//Реалізації функцій

// Функція для визначення факторіалу
int fact(int n) {
	if (n > 1)
		return n * fact(n - 1);
	else
		return 1;
}


// Функція для визначення чисельника дробу в даному прикладі
int num(int n) {
	if (n > 1)
		return (m + n - 1) * num(n - 1);
	else
		return 1;
}
