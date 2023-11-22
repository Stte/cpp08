/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tspoof <tspoof@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:44:54 by tspoof            #+#    #+#             */
/*   Updated: 2023/11/22 20:08:03 by tspoof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "easyfind.hpp"

int main(void)
{

	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	int number = easyfind(numbers, 3);
	std::cout << number << std::endl;

	std::cout << "----------------" << std::endl;

	std::list<int> numbers2;
	numbers2.push_back(1);
	numbers2.push_back(2);
	numbers2.push_back(3);
	numbers2.push_back(4);
	numbers2.push_back(5);
	int number2 = easyfind(numbers2, 2);
	std::cout << number2 << std::endl;

	std::cout << "----------------" << std::endl;

	try
	{
		int number3 = easyfind(numbers2, 6);
		std::cout << number3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

	return 0;
}
