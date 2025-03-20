#pragma once
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const name;
		bool is_it_signed;
		int const grade_to_sign;
		int const grade_to_execute;

	public:
		AForm();
		AForm(std::string name, int g_to_sign, int g_to_execute);
		AForm(AForm& other);
		~AForm();
		AForm& 			operator=(AForm& other);

		std::string		getName() const;
		int 			getGradeToSign() const;
		int 			getGradeToExecute() const;
		bool			getIsItSigned() const;
		void 			beSigned(Bureaucrat const & bure);
		void			execute(Bureaucrat const & executor) const;
		void virtual	beExecuted() const = 0;

		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw();
		};

		class AFormNotSigned: public std::exception
		{
			public:
				const char* what() const throw();
		};

};

std::ostream& 			operator<<(std::ostream& os, const AForm& other);