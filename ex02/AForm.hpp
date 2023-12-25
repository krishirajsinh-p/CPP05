/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:41:49 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/26 00:56:26 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;
using std::exception;

class Bureaucrat;

class AForm
{
	private:
		const string name;
		bool isSigned;
		const short signGrade;
		const short execGrade;
		const string target;
		AForm();

	public:
		AForm(string Name, short SignGrade, short ExecGrade, string Target);
		AForm(const AForm& src);
		AForm& operator=(const AForm& rhs);
		virtual ~AForm();
		void checkRange(short Grade);

		const string getName() const;
		bool getIfSigned() const;
		short getSignGrade() const;
		short getExecGrade() const;

		void beSigned(Bureaucrat& bureaucrat);

		const string getTarget() const;

		class GradeTooHighException : public exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public exception {
			public:
				const char* what() const throw();
		};

		class FormNotSignedException : public exception {
			public:
				const char* what() const throw();
		};

		virtual void execute(const Bureaucrat& executor) const = 0;
};

ostream& operator<<(ostream& o, const AForm& rhs);

#endif
