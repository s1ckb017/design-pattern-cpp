#ifndef ITERATOR_H
#define  ITERATOR_H

/*
    Iterator interface, general because this interface must be implemented
    by many iterator for specific objects
*/

template <class C>  class myiterator{
public:
    virtual bool hasNext() = 0;
    virtual  C next() = 0;
};

#endif
