//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "CentralBureaucracy.hpp"

#include <iostream>

int main( void ) {
    CentralBureaucracy centralBureaucracy;
    centralBureaucracy.feed(new Bureaucrat("John", 30));
    centralBureaucracy.feed(new Bureaucrat("Lessy", 1));
    centralBureaucracy.feed(new Bureaucrat("Andy", 76));
    centralBureaucracy.feed(new Bureaucrat("Ann", 130));
    centralBureaucracy.feed(new Bureaucrat("James", 33));
    centralBureaucracy.feed(new Bureaucrat("Carry", 81));
    centralBureaucracy.feed(new Bureaucrat("Odry", 150));
    centralBureaucracy.feed(new Bureaucrat("Cristian", 24));
    centralBureaucracy.feed(new Bureaucrat("Kate", 111));
    centralBureaucracy.feed(new Bureaucrat("Mike", 73));
    centralBureaucracy.feed(new Bureaucrat("Konny", 66));
    centralBureaucracy.feed(new Bureaucrat("Jan", 34));
    centralBureaucracy.feed(new Bureaucrat("Jack", 22));
    centralBureaucracy.feed(new Bureaucrat("Oliver", 31));
    centralBureaucracy.feed(new Bureaucrat("Jenny", 91));
    centralBureaucracy.feed(new Bureaucrat("Android-0023", 3));
    centralBureaucracy.feed(new Bureaucrat("Daniel", 42));
    centralBureaucracy.feed(new Bureaucrat("Rugi", 50));

    centralBureaucracy.queueUp("Lindsey");
    centralBureaucracy.queueUp("Charly");
    centralBureaucracy.queueUp("Jen");
    centralBureaucracy.queueUp("Artur");
    centralBureaucracy.queueUp("Marvin");
    centralBureaucracy.queueUp("Vinny");
    centralBureaucracy.queueUp("Harry");
    centralBureaucracy.queueUp("Simon");
    centralBureaucracy.queueUp("Elle");
    centralBureaucracy.queueUp("Lars");
    centralBureaucracy.queueUp("Steven");

    centralBureaucracy.doBureaucracy();

}