#ifndef ARRAY_H
# define ARRAY_H

#include <cstddef>
#include <exception>

template<typename T>
class Array {
	public :
		Array() : _array(NULL),_length(0) {}
		Array(unsigned int n) {
					_array = new T[n];
					_length = n;}
		Array(Array const & cpy) {
					_length = cpy.size();
					if (_length == 0)
						_array = NULL;
					else
						_array = new T[_length];
					for (size_t i = 0; i < _length; i++)
						_array[i] = cpy._array[i];}
		Array& operator=(Array const & cpy) {
						_length = cpy.size();
						if (_array != NULL)
							delete [] _array;
						if (_length == 0)
							_array = NULL;
						else
							_array = new T[_length];
						for (size_t i = 0; i < _length; i++)
							_array[i] = cpy._array[i];
						return (*this);}
		T&	operator[](size_t idx) {
						if (idx < 0 || idx >= size() || _array == NULL)
							throw std::exception();
						return _array[idx];}

		size_t size(void) const{
					return (_length);}
		
		T 		*_array;
	private :
		size_t _length;	
};

#endif
