/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 01:37:37 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/25 21:45:57 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const string target) : AForm("PresidentialPardonForm", 25, 5, target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) : AForm(rhs) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
	if (this != &rhs)
		*this = PresidentialPardonForm(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (getIfSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > getExecGrade())
		throw AForm::GradeTooLowException();
	else
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
