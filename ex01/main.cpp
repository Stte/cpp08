/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:44:54 by tspoof            #+#    #+#             */
/*   Updated: 2024/02/08 17:21:57 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <random>

int main(void)
{
	std::cout << "---------- Basic -----------" << std::endl;

	{
	Span sp = Span(5);


	sp.addNumber(4);
	sp.addNumber(7);
	sp.addNumber(42);

	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}

	std::cout << "---------- Iterator 5 -----------" << std::endl;

	{
	Span sp = Span(5);

	std::vector<int> random_numbers(5);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1,  1000);

	int min = INT_MAX;
	int max = INT_MIN;
	for (int& num : random_numbers)
	{
		num = dis(gen);
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}
	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " << max << std::endl;

	// print random numbers
	for (int& num : random_numbers)
		std::cout << num << " ";
	std::cout << std::endl;

	sp.addNumbers(random_numbers.begin(), random_numbers.end());

	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}

	std::cout << "--------- Over 10000 -------------" << std::endl;

	{
	Span sp = Span(10001);

	std::vector<int> random_numbers(10001);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1,  20000);

	int min = INT_MAX;
	int max = INT_MIN;
	for (int& num : random_numbers)
	{
		num = dis(gen);
		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}
	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " << max << std::endl;

	sp.addNumbers(random_numbers.begin(), random_numbers.end());

	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}

	std::cout << "--------- One number ------------" << std::endl;

	try
	{
		Span sp = Span(5);

		sp.addNumber(4);

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------- Span full ------------" << std::endl;

	try
	{
		Span sp = Span(2);

		sp.addNumber(4);
		sp.addNumber(8);
		sp.addNumber(42);

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- Negatives ------------" << std::endl;

	{
		Span sp = Span(5);

		sp.addNumber(-4);
		sp.addNumber(-7);
		sp.addNumber(-42);
		sp.addNumber(42);

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}

	std::cout << "---------- Speshuls ------------" << std::endl;

	{
		Span sp = Span(5);

		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;
	}

	std::cout << "---------- Speshuls 2 ------------" << std::endl;

	try
	{
		Span sp = Span(5);

		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);

		Span sp2 = sp;
		sp2.addNumber(24);

		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp.longestSpan() << std::endl;

		std::cout << "Shortest2: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest2: " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
