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


//1 
/************************************************************
* Function: calculate_newtons_2nd_law                       *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function calculates force by taking a   *
*			   double mass & acceleration inputs from the   *
*			   user.                                        *
* Input parameters: mass and acceleration.                  *
* Returns: The calculation of force, mass * acceleration    *
* Preconditions: The user must enter double numbers for     *
*                mass and acceleration                      *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
double calculate_newtons_2nd_law(double mass, double acceleration)
{
	double force = 0.0;

	force = mass * acceleration;
		
	return force;
}


//2
/************************************************************
* Function: calculate_volume_cylinder                       *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function calculates volume of a cylinder*
*			   using a constant macro PI defined and taking *
*              inputs radius and height to do the remaining *
*              arithmetic from the user.                    *
* Input parameters: radius and height.                      *
* Returns: The calculations for voume of a cylinder         *
* Preconditions: The user must enter double numbers for     *
*                radius and height.                         *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
double calculate_volume_cylinder(double radius, double height)
{
	double volume = 0.0;

	volume = PI * pow(radius, 2) * height;
	
	return volume;
}


//3
/************************************************************
* Function: perform_character_encoding                      *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function performs arithmetic on the     *
*              character entered by the user using its ascii*
*              value                                        *
* Input parameters: character                               *
* Returns: The arithmetic performed on the ascii value of   *
*          the charactered entered.                         *
* Preconditions: The user must enter a valid character      *
*                                                           *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
char perform_character_encoding(char plaintext_character)
{
	char encoded_character = 'a';

	encoded_character = 10 + (plaintext_character - 'a') + 'A';
	
	
	return encoded_character;
}


// 4
/************************************************************
* Function: calculate_gravity_force                         *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function calculates gravity taking input*
*              from the userin the form of double mass1,    *
*              mass2, distance                              *
* Input parameters: double mass1, mass2, distance           *
* Returns: The calculations of gravity                      *
* Preconditions: The user must enter double values for      *
*                mass1, mas2 and distance                   *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
double calculate_gravity_force(double mass1, double mass2, double distance)
{
	double gravity = 0.0;

	gravity = G * mass1 * mass2 / pow(distance, 2);

	return gravity;
}


// 5
/************************************************************
* Function: calculate_tangent                               *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function calculates tangent by taking   *
*              one value (theta) entered by the user for    *
*              sin(theta) divided by cos(theta)             *
* Input parameters: double theta                            *
* Returns: The calculations for tangent of theta            *
* Preconditions: The user must enter a double value for     *
*                theta                                      *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
double calculate_tangent(double theta)
{
	double tan_theta = 0.0;

	tan_theta = sin(theta) / cos(theta);
	
	return tan_theta;
}


// 6
/************************************************************
* Function: calculate_parallel_resistance                   *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function calculates parallel resistance *
*              by taking inputs for resistance of each of 3 *
			   resistors.                                   *
* Input parameters: r1, r2, r3 (Resistance Values)          *
* Returns: The calculations for parallel resistance         *
* Preconditions: The user must enter 3 double values for    *
*                each resistor.                             *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
double calculate_parallel_resistance(int r1, int r2, int r3)
{
	double parallel_resistance = 0.0;

	parallel_resistance = 1 / (((double)1 / r1) + ((double)1 / r2) + ((double)1 / r3));

	return parallel_resistance;
}


// 7
/************************************************************
* Function: calculate_distance_between_2pts                 *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function calculates the distance between*
*			   two points by taking input of two points     *
*			   coordinates (x, y).                          *
* Input parameters: (x1, y1) and (x2, y2) coordinate points *
* Returns: The calculations for the distance of 2 points    *
* Preconditions: The user must enter 4 double values, 2 for *
*                each coordinate of the point (x, y).       *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
double calculate_distance_between_2pts(double x1, double y1, double x2, double y2)
{
	double two_pointDistance = 0.0, xp2 = 0.0, yp2 = 0.0;
	
	xp2 = (x1 - x2);
	yp2 = (y1 - y2);
	two_pointDistance = sqrt(pow(xp2, 2) + pow(yp2, 2));


	return two_pointDistance;
}


// 8
/************************************************************
* Function: calculate_general_equation                      *
* Date Created: 20170911                                    *
* Date Last Modified: 20170911                              *
* Description: This function adds, subtracts, multiplies and*
*              divides from inputs given by the user        *
* Input parameters: double x,z and int a.                   *
* Returns: Result of various calculations on given inputs   *
* Preconditions: The user must enter 2 double values and 1  *
*                integer value.                             *
* Postconditions: The calculation is returned to a printf   *
*                 statement and displayed to the user       *
*************************************************************/
double calculate_general_equation(int a, double x, double z)
{
	double generalEquation = 0.0;

	generalEquation = ((double)7 / 5) * x / (a + z - a) / (a % 2) + PI;

	return generalEquation;
}