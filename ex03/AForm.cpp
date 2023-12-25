/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:44:38 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/25 22:01:47 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

void AForm::checkRange(short Grade) {
	if (Grade < 1) {
		throw AForm::GradeTooHighException();
	}
	if (Grade > 150) {
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm(string Name, short SignGrade, short ExecGrade, string Target) : name(Name), isSigned(false), signGrade(SignGrade), execGrade(ExecGrade), target(Target) {
	checkRange(signGrade);
	checkRange(execGrade);
}

AForm::AForm(const AForm& src) : name(src.getName()), isSigned(src.getIfSigned()), signGrade(src.getSignGrade()), execGrade(src.getExecGrade()), target(src.getTarget()) {
	checkRange(signGrade);
	checkRange(execGrade);
}

AForm& AForm::operator=(const AForm& rhs) {
	if (this != &rhs)
		isSigned = rhs.getIfSigned();
	return *this;
}

AForm::~AForm() {
}

const string AForm::getName() const {
	return name;
}

bool AForm::getIfSigned() const {
	return isSigned;
}

short AForm::getSignGrade() const {
	return signGrade;
}

short AForm::getExecGrade() const {
	return execGrade;	
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade \
	&& bureaucrat.getGrade() <= signGrade) {
		isSigned = true;
	} else {
		throw AForm::GradeTooLowException();
	}
}

const string AForm::getTarget() const {
	return target;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "grade is higher than expected.";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "grade is lower than expected.";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "form is not signed.";
}

ostream& operator<<(ostream& o, const AForm& rhs) {
	o << "------------- AForm Info -------------" << endl
	<< "Form name: " << rhs.getName() << endl
	<< "Is Form signed: " << rhs.getIfSigned() << endl
    << "Grade to sign: " << rhs.getSignGrade() << endl
    << "Grade to execute: " << rhs.getExecGrade() << endl
	<< "-------------------------------------";
	return o;
}
