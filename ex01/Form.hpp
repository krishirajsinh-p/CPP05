/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 05:59:15 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/24 13:06:57 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;
using std::exception;

class Form
{
	private:
		const string name;
		bool isSigned;
		const short signGrade;
		const short execGrade;
		Bureaucrat *bureaucrat;
		Form();

	public:
		Form(string Name, bool IsSigned, short SignGrade, short ExecGrade);
		Form(Form& src);
		Form& operator=(Form& rhs);
		~Form();

		const string getName() const;
		bool getIfSigned() const;
		const short getSignGrade() const;
		const short getExecGrade() const;

		void beSigned(Bureaucrat& bureaucrat);
		void signForm();

		class GradeTooHighException : public exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public exception {
			public:
				const char* what() const throw();
		};
};

ostream& operator<<(ostream& o, const Form& rhs);

#endif
