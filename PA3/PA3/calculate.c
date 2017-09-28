/*********************************************************************************************
* Programmer: Manuel Berrueta                                                                *
* WSU ID: 011585195                                                                          *
*                                                                                            *
* Class: CptS 121; Sec 1   Lab 2                                                             *
* Programming Assignment: PA3                                                                *
*                                                                                            *
* Date: 20170915                                                                             *
*                                                                                            *
* Description: PA3 Assignment - A program that processes numbers, corresponding to student   *
*								records read in from a file, and writes the required results *
*								to an output file						                     *
*                                                                                            *
*********************************************************************************************/


#include "calculate.h"


// Reads one double precision number from the input file.Note: You may assume that the file only contains real numbers.
/************************************************************
* Function: read_double ()                                  *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Reads one double precision number from the   *
*              input file                                   *
* Input parameters: An input file pointer.                  *
* Returns: The number read from the input file (double)     *
* Preconditions: The input file must be open.               *
* Postconditions: The number extracted from the file is     *
*				  returned to function to be used for       *
*                 calculations (double)                     *
*************************************************************/
double read_double(FILE *infile)
{
	double num = 0.0;

	fscanf(infile, " %lf", &num);

	return num;
}


//  Reads one integer number from the input file.
/************************************************************
* Function: read_integer ()                                 *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Reads one integer precision number from the  *
*              input file                                   *
* Input parameters: An input file pointer.                  *
* Returns: The number read from the input file (int)        *
* Preconditions: The input file must be open.               *
* Postconditions: The number extracted from the file is     *
*				  returned to function to be used for       *
*                 calculations (int)                        *
*************************************************************/
int read_integer(FILE *infile)
{
	int num = 0;

	fscanf(infile, " %d", &num);

	return num;
}



// Finds the sum of number1, number2, number3, number4, and number5 and returns the result.
//  Reads one integer number from the input file.
/************************************************************
* Function: calculate_sum ()                                *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Adds 5 type double inputs                    *
* Input parameters: 5 type double numbers                   *
* Returns: The number read from the input file (int)        *
* Preconditions: 5 type double numbers must be provided     *
* Postconditions: The 5 numbers are added and the sum is	*
*				  returned by the function					*
*************************************************************/
double calculate_sum(double number1, double number2, double number3, double number4, double number5)
{
	double gpa_sum = 0.0;

	gpa_sum = number1 + number2 + number3 + number4 + number5;

	return gpa_sum;
}


// Determines the mean through the calculation sum / number and returns the result.
// You need to check to make sure that number is not 0. If it is 0 the function returns - 1.0 
// (we will assume that we are calculating the mean of positive numbers), otherwise it returns the mean.
/************************************************************
* Function: calculate_mean ()                               *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Returns the mean of provided inputs          *
* Input parameters: One double sum variable and one int		*
*					number variable							*
* Returns: The sum variable divided by the numbers variable *
* Preconditions: The sum and number parameters must be      *
*				 provided.									*
* Postconditions: Function returns the results of division	*
*				  of parameter sum by parameter number		*
*************************************************************/
double calculate_mean(double sum, int number)
{
	double mean = 0.0;

	if (number > 0.0)
	{
		mean = sum / number;
	}
	else
	{
		return mean = -1;
	}

	return mean;
}


// Determines the deviation of number from the mean and returns the result.The deviation may be calculated as number - mean.
/************************************************************
* Function: calculate_mean ()                               *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Returns the mean of provided inputs          *
* Input parameters: One double sum variable and one int		*
*					number variable							*
* Returns: The sum variable divided by the numbers variable *
* Preconditions: The sum and number parameters must be      *
*				 provided.									*
* Postconditions: Function returns the results of division	*
*				  of parameter sum by parameter number		*
*************************************************************/
double calculate_deviation(double number, double mean)
{
	double dev = 0.0;

	dev = number - mean;

	return dev;
}


// Determines the variance through the calculation:((deviation1) ^ 2 + (deviation2) ^ 2 + (deviation3) ^ 2 + (deviation4) ^ 2 + (deviation5) ^ 2) / number
/************************************************************
* Function: calculate_variance ()                           *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Returns the variance from provided inputs    *
* Input parameters: Five double deviation parameters and    *
*					one number parameter					*
* Returns: The calculations performed inside the function	*
*			of the provided input parameters				*
* Preconditions: The 5 type double deviation parameters and *
*				 the type integer number parameter must be	*
*				 be provided.								*
* Postconditions: Function returns the results of the		*
*				  variance calculations performed on the	*
*				  input parameters							*
*************************************************************/
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
{
	double variance = 0.0;
	double dev = 0.0;

	dev = pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2);
	
	variance = calculate_mean(dev, number);

	return variance;
}


// Calculates the standard deviation as sqrt(variance) and returns the result.
// Recall that you may use the sqrt() function that is found in math.h.
/************************************************************
* Function: calculate_standard_deviation ()                 *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Returns standard deviation from input        *
* Input parameters: One double variance parameter			*
*															*
* Returns: The standard deviation of the input provided     *
* Preconditions: The type double variance parameter must be	*
*				 provided.									*
* Postconditions: Function returns the results of the square*
*				  root of variance (standard deviation)		*
*************************************************************/
double calculate_standard_deviation(double variance)
{
	double standard_dev = 0.0;

	standard_dev = sqrt(variance);

	return standard_dev;
}


// Determines the maximum number out of the five input parameters passed into the function, returning the max.
/************************************************************
* Function: find_max ()									    *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: From input calculates the max value          *
* Input parameters: 5 double number parameters				*
*															*
* Returns: Returns the max value out of the 5 inputs        *
* Preconditions: The five type double number parameters must*
*				 provided.									*
* Postconditions: Function returns the max value			*
*************************************************************/
double find_max(double number1, double number2, double number3, double number4, double number5)
{
	double max_value = 0.0;

	max_value = number1;

	if (number2 > max_value)
	{
		max_value = number2;
	}
	else if (number3 > max_value)
	{
		max_value = number3;
	}
	else if (number4 > max_value)
	{
		max_value = number4;
	}
	else if (number5 > max_value)
	{
		max_value = number5;
	}
	else
	{
		max_value = number1;
	}
	
	return max_value;
}


// Determines the minimum number out of the five input parameters passed into the function, returning the min.
/************************************************************
* Function: find_min ()									    *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: From input calculates the minimum value      *
* Input parameters: 5 double number parameters				*
*															*
* Returns: Returns the max value out of the 5 inputs        *
* Preconditions: The five type double number parameters must*
*				 provided.									*
* Postconditions: Function returns the max value			*
*************************************************************/
double find_min(double number1, double number2, double number3, double number4, double number5)
{
	double min_value = 0.0;

	min_value = number1;

	if (number1 < number2)
	{
		min_value = number1;
	}
	if (number2 < min_value)
	{
		min_value = number2;
	}
	if (number3 < min_value)
	{
		min_value = number3;
	}
	if (number4 < min_value)
	{
		min_value = number4;
	}
	if (number5 < min_value)
	{
		min_value = number5;
	}

	return  min_value;
}


// Prints a double precision number(to the hundredths place) to an output file.
/************************************************************
* Function: print_double ()								    *
* Date Created: 20170917                                    *
* Date Last Modified:  20170917                             *
* Description: Prints input to file					        *
* Input parameters: The outfile and type double number		*
*					parameter.								*
*															*
* Returns: prints input to file						        *
* Preconditions: Need an input parameter for outfile and the*
*				 double number parameter provided.			*
* Postconditions: The input number will be printed to a file*
*************************************************************/
void print_double(FILE *outfile, double number)
{
	
	fprintf(outfile, " %.2lf\n", number);

	
	return;
}