/*********************************************************************************************
* Programmer: Manuel Berrueta                                                                *
* WSU ID: 011585195                                                                          *
*                                                                                            *
* Class: CptS 121; Sec 1                                                                     *
* Programming Assignment: PA2                                                                *
*                                                                                            *
* Date: 20170911                                                                             *
*                                                                                            *
* Description: PA2 Assignment                                                                *
*                                                                                            *
*********************************************************************************************/


#include "equations.h"


int main(void)
{
	
	// 1. Newton's Second Law of Motion Variables
	double force = 0.0, mass = 0.0, acceleration = 0.0;

	// 2. Volume of a cylinder Variables
	double volume = 0.0, radius = 0.0, height = 0.0;

	// 3. Chracter Encoding Variables
	char plaintext_character = 0, encoded_character = 0;

	// 4. Gravity: force = G * mass1 * mass2 / distance2 Variables
	double gravity = 0.0, mass1 = 0.0, mass2 = 0.0, distance = 0.0;

	// 5. Tangent: tan_theta = sin (theta) / cos (theta) Variables
	double tan_theta = 0.0, theta = 0.0;

	// 6. Total parallel resistance: parallel_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3) Variables
	double parallel_resistance = 0.0;
	int R1 = 0, R2 = 0, R3 = 0;

	// 7. Distance between two points Variables
	double two_pointDistance = 0.0, x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, xp2 = 0.0, yp2 = 0.0;

	// 8. General equation
	double generalEquation = 0.0, x = 0.0, z = 0.0;
	int a = 0;


	printf("Equation Evaluator Calculator \n\n");


	// 1. Newton's Second Law of Motion
	printf("Please enter the mass and acceleration <both floating-point values> for use in Newton's Law: ");
	scanf(" %lf %lf", &mass, &acceleration);
	force = calculate_newtons_2nd_law(mass, acceleration);
	printf("Newton's Second Law: force = mass * acceleration = %lf * %lf = %.2lf \n\n", mass, acceleration, force);


	// 2. Volume of a cylinder: volume_cylinder = PI * radius2 * height
	printf("Please enter the radius and height <both floating-point values> for use in a volume of cylinder equation: ");
	scanf(" %lf %lf", &radius, &height);
	volume = calculate_volume_cylinder(radius, height);
	printf("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = %lf * %lf^2 * %lf = %lf \n\n", PI, radius, height, volume);


	// 3. Character encoding: encoded_character = 10 + (plaintext_character - 'a') + 'A' 
	printf("Please enter one plain text character: ");
	scanf(" %c", &plaintext_character);
	encoded_character = 10 + (plaintext_character - 'a') + 'A';
	printf("Using the formula 10 + %c(plain text character you entered) - (ascii value of 'a') + 'A'(ascii value) = %c in Ascii translation. \n\n",
		plaintext_character, encoded_character);


	// 4. Gravity: force = G * mass1 * mass2 / distance2
	printf("Gravity equation - Enter first mass, second mass, and distance: ");
	scanf(" %lf%lf%lf", &mass1, &mass2, &distance);
	gravity = calculate_gravity_force(mass1, mass2, distance);
	printf("Gravity: force = G * %lf * %lf / %lf^2 = %.15lf \n\n", mass1, mass2, distance, gravity);


	// 5. Tangent: tan_theta = sin (theta) / cos (theta)
	printf("Enter value for theta: ");
	scanf(" %lf", &theta);
	tan_theta = calculate_tangent(theta);
	printf("The result of sin(%lf) / cos(%lf) = %lf \n\n", theta, theta, tan_theta);


	// 6. Total parallel resistance: parallel_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3)
	printf("Total Parallel Resistance Calculator - Enter R1, R2, and R3 integers to be calculated for 3 resistors: ");
	scanf(" %d %d %d", &R1, &R2, &R3);
	parallel_resistance = calculate_parallel_resistance(R1, R2, R3);
	printf("Total Parallel Resistance Using Formula with resistance values entered as parallel_resistance = 1 / (1 / %d(R1) + 1 / %d(R2) + 1 / %d(R3) = %f \n\n", R1, R2, R3, parallel_resistance);


	// 7. Distance between two points: distance = square root of ((x1 - x2)2 + (y1 - y2)2)
	printf("Distance between two points, enter first ordered pair (x, y): ");
	scanf(" %lf%lf", &x1, &y1);
	printf("Distance between two points, enter second ordered pair (x, y): ");
	scanf(" %lf%lf", &x2, &y2);
	two_pointDistance = calculate_distance_between_2pts(x1, y1, x2, y2);
	printf("Distance between two points using the formula: distance = square root of ((%lf(x1) - %lf(x2))^2 + (%lf(y1) - %lf(y2))^2) = %lf \n\n", x1, x2, y1, y2, two_pointDistance);


	// 8. General equation: y = (7 / 5) * x / a + z - a / (a % 2) + PI
	printf("General Equation, give values for x, a and z in that order: ");
	scanf(" %lf%d%lf", &x, &a, &z);
	generalEquation = calculate_general_equation(a, x, z);
	printf("General equation: y = (7 / 5) * %lf(x) / %d(a) + %lf(z) - %d(a) / (%d(a) %% 2) + %lf(PI) = %lf \n\n", x, a, z, a, a, PI, generalEquation);


	printf("End of Equation Evaluator Calculator Functions \n\n");


	return (0);
}