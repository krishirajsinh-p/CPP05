/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 01:38:01 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/25 03:14:07 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const string Target) : target(Target), AForm("RobotomyRequestForm", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs) : target(rhs.getTarget()), AForm(rhs) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
	if (this != &rhs)
		*this = RobotomyRequestForm(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

const string RobotomyRequestForm::getTarget() const {
	return target;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
	else {
		static size_t i;
		if ( i % 2 == 0 )
			cout << "*drilling noise* " << target << " has been robotomized successfully." << endl;
		else
			cout << "Robotomy for " << target << " has failed." << endl;
		i++;
	}
}
