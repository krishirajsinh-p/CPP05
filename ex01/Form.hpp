/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 05:59:15 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/24 16:14:28 by kpuwar           ###   ########.fr       */
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

class Bureaucrat;

class Form
{
	private:
		const string name;
		bool isSigned;
		const short signGrade;
		const short execGrade;
		Form();

	public:
		Form(string Name, short SignGrade, short ExecGrade);
		Form(const Form& src);
		Form& operator=(const Form& rhs);
		~Form();
		void checkRange(short Grade);

		const string getName() const;
		bool getIfSigned() const;
		short getSignGrade() const;
		short getExecGrade() const;

		void beSigned(Bureaucrat& bureaucrat);

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
