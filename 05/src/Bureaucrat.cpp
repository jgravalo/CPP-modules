#include<Bureaucrat.hpp>

Bureaucrat::Bureaucrat(void)
{
    name = "confidential";
    grade = 150;
}

Bureaucrat::Bureaucrat(class Bureaucrat& Copy)
{
    name = Copy.getName();
    grade = Copy.getGrade();
}

Bureaucrat& Bureaucrat::operator=(class Bureaucrat& Copy)
{
    name = Copy.getName();
    grade = Copy.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string Bureaucrat::getName(void)
{
    return(name);
}

int         Bureaucrat::getGrade(void)
{
    return (grade);
}

void        Bureaucrat::setName(std::string _name)
{
    name = _name;
}

void        Bureaucrat::setGrade(int _grade)
{
    grade = _grade;
}

void        Bureaucrat::gradePromotion(void)
{
    grade--;
}

void        Bureaucrat::gradeDemotion(void)
{
    grade++;
}

std::ostream&   operator<<(std::ostream& out, class Bureaucrat& Copy)
{
    std::cout << Copy.getName() << ", bureaucrat grade " << Copy.getGrade() << std::endl;
    return (out);
}
