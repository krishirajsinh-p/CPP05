/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:32:07 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/24 05:46:34 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

void Bureaucrat::setGrade(short Grade) {
	if (Grade < 1)
		throw GradeTooHighException();
	if (Grade > 150)
		throw GradeTooLowException();
	this->grade = Grade;
}

Bureaucrat::Bureaucrat(string Name, short Grade) : name(Name), grade(0) {
	try {
		setGrade(Grade);
	} catch(const std::exception& e) {
		std::cerr << e.what() << endl;
	}
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	*this = Bureaucrat(rhs);
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.getName()), grade(0) {
	try {
		setGrade(src.getGrade());
	} catch(const std::exception& e) {
		std::cerr << e.what() << endl;
	}
}

Bureaucrat::~Bureaucrat() {
}

const string Bureaucrat::getName() const {
	return this->name;
}

short Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade() {
	try {
		setGrade(grade - 1);
	} catch(const std::exception& e) {
		std::cerr << e.what() << endl;
	}
}

void Bureaucrat::decrementGrade() {
	try {
		setGrade(grade + 1);
	} catch(const std::exception& e) {
		std::cerr << e.what() << endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "'1' is the highest grade possible.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "'150' is the lowest grade possible.";
}

ostream& operator<<(ostream& o, const Bureaucrat& rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
