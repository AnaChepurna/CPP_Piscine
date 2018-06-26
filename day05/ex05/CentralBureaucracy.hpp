//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP


#include "OfficeBlock.hpp"

# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define RESET		"\x1B[0m"

class CentralBureaucracy {

public:

    CentralBureaucracy();
    CentralBureaucracy(CentralBureaucracy const & src);
    CentralBureaucracy &operator=(CentralBureaucracy const& src);
    ~CentralBureaucracy();
    void queueUp(std::string target);
    void doBureaucracy();
    void feed(Bureaucrat *bureaucrat);

    class QueueNode {
    public:
        std::string target;
        QueueNode * next;
        QueueNode();
        QueueNode(std::string target);
        QueueNode(QueueNode const& src);
        QueueNode &operator=(QueueNode const& src);
        ~QueueNode();
    };

    class NoVacantPlacesExeption : public std::exception {
    public:
        NoVacantPlacesExeption();
        NoVacantPlacesExeption(NoVacantPlacesExeption const &);
        ~NoVacantPlacesExeption() throw();
        NoVacantPlacesExeption &		operator=(NoVacantPlacesExeption const &);
        virtual const char* what() const throw();
    };

private:
    OfficeBlock officeBlock[20];
    CentralBureaucracy::QueueNode * first;
    QueueNode * getFirst();
    std::string getRandomRequest();
};

#endif
