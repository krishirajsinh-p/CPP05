/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:47:44 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/25 22:02:59 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const string target) : AForm("ShrubberyCreationForm", 145, 137, target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : AForm(rhs) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
	if (this != &rhs)
		*this = ShrubberyCreationForm(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	if (getIfSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getExecGrade())
		throw AForm::GradeTooLowException();
	else {
		ofstream file(getTarget() + "_shrubbery");
		if (file.is_open()) {
			file << "          /\\" << endl
				<< "      )    /\\" << endl
				<< "    _(__  /   \\" << endl
				<< "  _) |  )/_____\\" << endl
				<< "    |__|      |__|" << endl;
			file.close();
		} else {
			std::cerr << "Unable to open " << getTarget() << "_shrubbery file." << endl;
		}
	}
}
