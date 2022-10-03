
// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 10/3/2022
// This program calculates the pizza cost

#include <iomanip>
#include <iostream>

float HST = 0.13;
int labourCost = 2.00;
float rentalCost = 2.25;
float ingredCost = 1.50;

float diameter, subtotal, total, tax;

int main() {
    // input

    std::cout << "Insert diameter of pizza: ";
    std::cin >> diameter;

    // process

    subtotal = labourCost + rentalCost + ingredCost * diameter;
    tax = HST * subtotal;
    total = subtotal + tax;

    // output
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << "\n";
}
