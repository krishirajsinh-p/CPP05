/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:31:21 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/25 22:13:21 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try {
		Bureaucrat bureaucrat("Sheldon", 1);
		ShrubberyCreationForm form1("Shrubbery");
		RobotomyRequestForm form2("Robotomy");
		PresidentialPardonForm form3("President");

		cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
		cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		cout << "\n--------------- Form 3 ( President ) ---------------" << endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	} catch (exception &e) {
		std::cerr << e.what() << endl;
	}
	return 0;
}
