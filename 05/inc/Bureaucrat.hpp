#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>

class Bureaucrat
{
private:
    /* data */
    const std::string   name;
    int                 grade;
public:
    Bureaucrat(void);
    Bureaucrat(class Bureaucrat& Copy);
    Bureaucrat& operator=(class Bureaucrat& Copy);
    ~Bureaucrat();
    std::string getName(void);
    int         getGrade(void);
    void        setName(std::string _name);
    void        setGrade(int _grade);
    void        gradePromotion(void);
    void        gradeDemotion(void);
};

std::ostream&   operator<<(std::ostream& out, class Bureaucrat& Copy);

#endif