/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 23:03:39 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/24 14:24:48 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;
using std::exception;

class Bureaucrat
{
	private:
		const string name;
		short grade;
		Bureaucrat();
		void setGrade(short Grade);

	public:
		Bureaucrat(string Name, short Grade);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat();

		const string getName() const;
		short getGrade() const;
		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : public exception {
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public exception {
			public:
				const char* what() const throw();
		};
};

ostream& operator<<(ostream& o, const Bureaucrat& rhs);

#endif
