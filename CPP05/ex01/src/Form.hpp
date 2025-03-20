#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const name;
		bool is_it_signed;
		int const grade_to_sign;
		int const grade_to_execute;
	
	public:
		Form();
		Form(std::string name, int g_to_sign, int g_to_execute);
		Form(Form& other);
		~Form();
		Form& operator=(Form& other);

		std::string getName() const;
		int 		getGradeToSign() const;
		int 		getGradeToExecute() const;
		bool		getIsItSigned() const;

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
		
		void		beSigned(Bureaucrat& bure);
};

std::ostream operator<<(std::ostream os, const Form& other)
{
	os << "Form: name = " << other.getName() << " signed = " << other.getIsItSigned() << " to_sign = " << other.getGradeToSign() << " to_execute = " << other.getGradeToExecute() << std::endl;
}