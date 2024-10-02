#pragma once

#include <iostream>
#include <string>

class Decimal {
    private:
        unsigned char* _array;
        size_t _size;
        
    public:
        Decimal();
        Decimal(const std::initializer_list<unsigned char> &t);
        Decimal(const size_t& n, unsigned char t);
        Decimal(const std::string &t);
        Decimal(const Decimal& other);
        Decimal(Decimal&& other) noexcept;


        bool operator== (const Decimal &other) const;
        bool operator!= (const Decimal &other) const; 
        bool operator< (const Decimal &other) const; 
        bool operator> (const Decimal &other) const; 
        Decimal& operator= (const Decimal &other); 
        Decimal& operator+= (const Decimal &other); 
        Decimal& operator-= (const Decimal &other);

        std::ostream& print(std::ostream& os) const;

        virtual ~Decimal();
};