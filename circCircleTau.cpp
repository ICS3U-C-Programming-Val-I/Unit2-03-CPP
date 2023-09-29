// Copyright (c) 2023 Ms Raffin All rights reserved.
//
// Created by: Val
// Created on: Sep, 28, 2023
// This program asks the user for the radius
// of a circle. It then calculates
// and displays the circumference using tau.

#include <iostream>

// declare variables
float radius, circ;

int main() {
    // declaring constant TAU
    const float TAU = 6.28;

    // input - asking for radius
    std::cout << "What is the radius of the circle in cm??\n";
    std::cin >> radius;

    // process - calculating circumference
    circ = radius * TAU;

    // display - shows the are
    std::cout << "The circumference of the circle is " << circ << "cm\n";
}
