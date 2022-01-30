// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 27, 2022
// This program generates a list of random numbers
// and then calculates the average of all of those numbers
#include <iostream>
#include <iomanip>
#include <random>


int main() {
  // Create variables
  int randomNumber;
  int numberCounter;
  float total;

  const int MAX_ARRAY_SIZE = 10;
  const int MAX_NUM = 100;
  const int MIN_NUM = 0;

  // Create the array
  int listOfInts[MAX_ARRAY_SIZE];

  // Create a loop genrates a random number and adds it to the array
  for (numberCounter = 0; numberCounter < MAX_ARRAY_SIZE; numberCounter++) {
      std::random_device rseed;

      std::mt19937 rgen(rseed());  // mersenne_twister

      std::uniform_int_distribution<int> idist(MIN_NUM, MAX_NUM);

      randomNumber = idist(rgen);

      total = total + randomNumber;
      listOfInts[numberCounter] = randomNumber;
      std::cout << listOfInts[numberCounter];
      std::cout << " added to the list at position ";
      std::cout << numberCounter + 1 << ". \n";
  }
  // Print the final average
  total = total / MAX_ARRAY_SIZE;
  std::cout << " \n";
  std::cout << "The average is " << total << ".\n";
}
