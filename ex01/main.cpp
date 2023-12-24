/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:19:42 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/24 18:29:04 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void) {
	try
	{
		{
			Form form("Form", 0, 75);
		}

		{
			Form form("Form", 151, 75);
		}

		{
			// Bureaucrat bureaucrat("Bureaucrat", 1);
			Bureaucrat bureaucrat("Bureaucrat", 2);
			Form form("Form", 1, 1);

			cout << form << endl;
			bureaucrat.signForm(form);
			cout << form << endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}

	return 0;
}
//make && clear && ./Form
