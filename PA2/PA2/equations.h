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


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


// Defined constants
#define PI 3.14159
#define G 6.67e-11


//Function protoypes and headers
double calculate_newtons_2nd_law(double mass, double acceleration);
double calculate_volume_cylinder(double radius, double height);
char perform_character_encoding(char plaintext_character);
double calculate_gravity_force(double mass1, double mass2, double distance);
double calculate_tangent(double theta);
double calculate_parallel_resistance(int r1, int r2, int r3);
double calculate_distance_between_2pts(double x1, double y1, double x2, double y2);
double calculate_general_equation(int a, double x, double z);