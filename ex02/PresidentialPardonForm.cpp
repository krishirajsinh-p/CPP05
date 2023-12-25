/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 01:37:37 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/25 03:10:22 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const string Target) : target(Target), AForm("PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) : target(rhs.getTarget()), AForm(rhs) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
	if (this != &rhs)
		*this = PresidentialPardonForm(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

const string PresidentialPardonForm::getTarget() const {
	return target;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
