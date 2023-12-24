/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 04:58:35 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/24 05:46:31 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat obj("Leonard", 1);
		Bureaucrat obj2("Sheldon", 150);

		cout << obj << endl << obj2 << endl << endl;

		obj.decrementGrade();
		obj2.incrementGrade();

		cout << endl << obj << endl << obj2 << endl;
	}

	cout << endl << "-------------------------------" << endl << endl;

	{
		Bureaucrat obj("Leonard", 0);
		Bureaucrat obj2("Sheldon", 151);
	}

	cout << endl << "-------------------------------" << endl << endl;

	{
		Bureaucrat obj("Leonard", 1);
		Bureaucrat obj2("Sheldon", 150);

		cout << obj << endl << obj2 << endl << endl;

		obj.incrementGrade();
		obj2.decrementGrade();

		cout << endl << obj << endl << obj2 << endl;
	}

	return 0;
}
