//
// Created by Anastasia CHEPURNA on 6/27/18.
//

#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>
#include <stdexcept>

template< typename T >
class Array {
private:
    T * _array;
    unsigned int _size;
public:
    Array<T>(): _array(NULL), _size(0) {};
    Array<T>(unsigned int size): _array(NULL), _size(size) {
        if (_size)
            _array = new T[size];
    };
    Array<T>( Array<T> const & src ) {
        *this = src;
    };

    ~Array<T>() {};
    Array<T> &	operator=( Array<T> const & src ) {
        if ( this != &src ) {
            delete [] this->_array;
            this->_size = src._size;
            this->_array = new T[src._size];
            for (unsigned int i = 0; i < src._size; ++i )
                this->_array[i] = src._array[i];
        }
        return (*this);
    };
    T &	operator[]( unsigned int num ) {
        if ( num < _size)
            return ( _array[num] );
        else
            throw std::range_error("Unsuitable index");
    };
    unsigned int size() {
        return (_size);
    }
};

#endif
