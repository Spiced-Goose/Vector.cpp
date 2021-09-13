#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

namespace Vector
{
    class vector
    {
        public:
            vector();
            vector(int n);
            ~vector(){delete[] arr;}
            int get(int i) const;
            void set(int i, int x);
            int size();
            int capacity();
            void push_back(int x);
            void reserve(int n);

        private:

            int sz;
            int space;
            int* arr;
    };
}

#endif // VECTOR_H_INCLUDED
