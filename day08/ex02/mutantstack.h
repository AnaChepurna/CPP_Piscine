//
// Created by Anastasia CHEPURNA on 6/29/18.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
    MutantStack() {}
    MutantStack(MutantStack<T> const& src): std::stack<T>(src) {}
    ~MutantStack() {}
    typedef typename std::stack<T>::container_type::iterator iterator;
    using std::stack<T>::operator=;

    iterator	begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator	end()
    {
        return std::stack<T>::c.end();
    }
};

//template<typename T>
//MutantStack::MutantStack() {
//}
//
//template<typename T>
//MutantStack::MutantStack(MutantStack const &src) {
//    *this = std::stack(src);
//}
//
//template<typename T>
//MutantStack::~MutantStack() {
//}

//template<typename T>
//MutantStack::iterator MutantStack<T>::begin() {
//    return std::stack<T>::c.begin();
//}
//
//template<typename T>
//MutantStack::iterator MutantStack<T>::end() {
//    return std::stack<T>::c.end();
//}

#endif
