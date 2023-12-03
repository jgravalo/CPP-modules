#include<Contact.hpp>

class Phonebook
{
    private:
        Contact contact[8];
        int     size;
    public:
        Phonebook();
        Phonebook(Contact _contact);
        ~Phonebook();
        void    add(void);
        void    search(void);
        void    exit(void);
        int     isnumber(std::string str);
        int     isempty(std::string str);
};