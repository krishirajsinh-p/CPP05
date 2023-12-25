/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:47:44 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/25 08:58:04 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const string Target) : target(Target), AForm("ShrubberyCreationForm", 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : target(rhs.getTarget()), AForm(rhs) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
	if (this != &rhs)
		*this = ShrubberyCreationForm(rhs);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

const string ShrubberyCreationForm::getTarget() const {
	return target;
}

// void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
// 	if ( executor.getGrade() > this->getGradeToExecute() ) {
// 		throw Form::GradeTooLowException();
// 	}

// 	std::ofstream file( this->getName() + "_shrubbery" );
// 	file << "                      ___" << std::endl;
// 	file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
// 	file << "             ,-'          __,,-- \\" << std::endl;
// 	file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
// 	file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
// 	file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
// 	file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
// 	file << "     (     ,-'                  `." << std::endl;
// 	file << "      `._,'     _   _             ;" << std::endl;
// 	file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
// 	file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
// 	file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
// 	file << "                \"Hb HH dF" << std::endl;
// 	file << "                 \"HbHHdF" << std::endl;
// 	file << "                  |HHHF" << std::endl;
// 	file << "                  |HHH|" << std::endl;
// 	file << "                  |HHH|" << std::endl;
// 	file << "                  |HHH|" << std::endl;
// 	file << "                  |HHH|" << std::endl;
// 	file << "                  dHHHb" << std::endl;
// 	file << "                .dFd|bHb.               o" << std::endl;
// 	file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
// 	file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
// 	file << "##########################################" << std::endl;
// 	file.close();
// }
