/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 22:21:18 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/26 00:59:34 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern& src) {
	(void)src;
}

Intern& Intern::operator=(const Intern& rhs) {
	(void)rhs;
	return *this;
}

Intern::~Intern() {
}

AForm* Intern::makeForm(string name, string target) {
	AForm *returnForm = nullptr;
	
	string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* forms[] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};

	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			cout << "Intern creates " << name << endl;
			returnForm = forms[i];
		} else {
			delete forms[i];
		}
	}

	if (returnForm == nullptr)
		cout << "Intern cannot create " << name << " form." << endl;
	return returnForm;
}
