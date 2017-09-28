/*********************************************************************************************
* Programmer: Manuel Berrueta                                                                *
* WSU ID: 011585195                                                                          *
*                                                                                            *
* Class: CptS 121; Sec 1  Lab 2                                                              *
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


int main(void)
{
	// Pointers	
	FILE *infile = NULL, *outfile = NULL;

	// Variables
	int idNum1 = 0, idNum2 = 0, idNum3 = 0, idNum4 = 0, idNum5 = 0;
	int class_standing1 = 0, class_standing2 = 0, class_standing3 = 0,
		class_standing4 = 0, class_standing5 = 0;
	double gpa1 = 0.0, gpa2 = 0.0, gpa3 = 0.0, gpa4 = 0.0, gpa5 = 0.0;
	double age1 = 0.0, age2 = 0.0, age3 = 0.0, age4 = 0.0, age5 = 0.0;
	double sum_gpa = 0.0, sum_class = 0.0, sum_ages = 0.0;
	double mean_gpa = 0.0, mean_classes = 0.0, mean_ages = 0.0;
	double dev1 = 0.0, dev2 = 0.0, dev3 = 0.0, dev4 = 0.0, dev5 = 0.0;
	double variance = 0.0;
	double standard_deviation = 0.0;
	double max = 0.0, min = 0.0;



	//Opens an input file "input.dat" for reading;
	infile = fopen("input.dat", "r");

	//Opens an output file "output.dat" for writing;
	outfile = fopen("output.dat", "w");

	//Reads five records from the input file(input.dat);
	//Reader record  1
	idNum1 = read_integer(infile);
	gpa1 = read_double(infile);
	class_standing1 = read_integer(infile);
	age1 = read_double(infile);

	//Reader record 2
	idNum2 = read_integer(infile);
	gpa2 = read_double(infile);
	class_standing2 = read_integer(infile);
	age2 = read_double(infile);

	//Reader record 3
	idNum3 = read_integer(infile);
	gpa3 = read_double(infile);
	class_standing3 = read_integer(infile);
	age3 = read_double(infile);

	//Reader record 4
	idNum4 = read_integer(infile);
	gpa4 = read_double(infile);
	class_standing4 = read_integer(infile);
	age4 = read_double(infile);

	//Reader record 5
	idNum5 = read_integer(infile);
	gpa5 = read_double(infile);
	class_standing5 = read_integer(infile);
	age5 = read_double(infile);


	//Calculates the sum of the GPAs;
	sum_gpa = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
	//printf("The sum of gpa is %lf \n", sum_gpa); //Tests sum of gpa1-5


	//Calculates the sum of the class standings;
	sum_class = calculate_sum(class_standing1, class_standing2, class_standing3, class_standing4, class_standing5);
	//printf("The sum of classes is %lf \n", sum_class);


	//Calculates the sum of the ages;
	sum_ages = calculate_sum(age1, age2, age3, age4, age5);
	//printf("The sum of all ages %lf \n", sum_ages);


	//Calculate Means
	//Calculates the mean of the GPAs, writing the result to the output file(output.dat);
	mean_gpa = calculate_mean(sum_gpa, 5);
	fprintf(outfile, " %lf\n", mean_gpa);
	
	//Calculates the mean of the class standings, writing the result to the output file(output.dat);
	mean_classes = calculate_mean(sum_class, 5);
	fprintf(outfile, " %lf\n", mean_classes);

	//Calculates the mean of the ages, writing the result to the output file(output.dat);
	mean_ages = calculate_mean(sum_ages, 5);
	fprintf(outfile, " %lf\n", mean_ages);
	


	//Calculates the deviation of each GPA from the mean(Hint: need to call calculate_deviation() 5 times)
	dev1 = calculate_deviation(gpa1, mean_gpa);
	dev2 = calculate_deviation(gpa2, mean_gpa);
	dev3 = calculate_deviation(gpa3, mean_gpa);
	dev4 = calculate_deviation(gpa4, mean_gpa);
	dev5 = calculate_deviation(gpa5, mean_gpa);


	//	Calculates the variance of the GPAs
	variance = calculate_variance(dev1, dev2, dev3, dev4, dev5, 5);
	//printf("Variance test: %lf\n", variance); //Test out values
	

	//	Calculates the standard deviation of the GPAs, writing the result to the output file(output.dat);
	standard_deviation = calculate_standard_deviation(variance);
	//printf("Standard Deviation test: %lf\n", standard_deviation); //Test out values
	print_double(outfile, standard_deviation);


	// Determines the min of the GPAs, writing the result to the output file(output.dat);
	min = find_min(gpa1, gpa2, gpa3, gpa4, gpa5);
	print_double(outfile, min);


	// Determines the max of the GPAs, writing the result to the output file(output.dat);
	max = find_max(gpa1, gpa2, gpa3, gpa4, gpa5);
	print_double(outfile, max);


	//Closes the input and output files(i.e.input.dat and output.dat)
	fclose(infile); 
	fclose(outfile); 


	return 0;
 }