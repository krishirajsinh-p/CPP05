/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 14:16:07 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/24 17:03:50 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void Form::checkRange(short Grade) {
	if (Grade < 1) {
		throw Form::GradeTooHighException();
	}
	if (Grade > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(string Name, short SignGrade, short ExecGrade) : name(Name), isSigned(false), signGrade(SignGrade), execGrade(ExecGrade) {
	checkRange(signGrade);
	checkRange(execGrade);
}

Form::Form(const Form& src) : name(src.getName()), isSigned(src.getIfSigned()), signGrade(src.getSignGrade()), execGrade(src.getExecGrade()) {
	checkRange(signGrade);
	checkRange(execGrade);
}

Form& Form::operator=(const Form& rhs) {
	if (this != &rhs)
		*this = Form(rhs);
	return *this;
}

Form::~Form() {
}

const string Form::getName() const {
	return name;
}

bool Form::getIfSigned() const {
	return isSigned;
}

short Form::getSignGrade() const {
	return signGrade;
}

short Form::getExecGrade() const {
	return execGrade;	
}

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade \
	&& bureaucrat.getGrade() <= signGrade) {
		isSigned = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

const char* Form::GradeTooHighException::what() const throw() {
	return "grade is higher than expected.";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "grade is lower than expected.";
}

ostream& operator<<(ostream& o, const Form& rhs) {
	o << "------------- Form Info -------------" << endl
	<< "Form name: " << rhs.getName() << endl
	<< "Is form signed: " << rhs.getIfSigned() << endl
    << "Grade to sign: " << rhs.getSignGrade() << endl
    << "Grade to execute: " << rhs.getExecGrade() << endl
	<< "-------------------------------------";
	return o;
}
