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
		Form& 		operator=(Form& other);

		std::string getName() const;
		int 		getGradeToSign() const;
		int 		getGradeToExecute() const;
		bool		getIsItSigned() const;
		void		beSigned(Bureaucrat& bure);

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
};

std::ostream& 		operator<<(std::ostream& os, const Form& other);