/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 03:29:30 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/14 03:48:05 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
template <typename T>

class Array
{
private:
	unsigned int _size;
	T* _array;
public :
	Array() : _size(0), _array(new T[0]) {}
	Array(unsigned int n) : _size(n), _array(new T[n]) {}
	Array(const Array& other)
	{
		_size = other._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < other._size; i++)
			this->_array[i] = other._array[i];
	}
	~Array(){delete[] _array;}
	
	T& operator[](unsigned int idx)
	{
		if (idx >= this->_size)
			throw OutOfRangeException();
		return this->_array[idx];
	}
	Array& operator=(const Array& rhs)
	{
		if (this != &rhs)
		{
			this->~Array();
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
				this->_array[i] = rhs._array[i];
		}
		return *this;
	}
	unsigned int size(){return _size;}

	class OutOfRangeException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Element is out of range of array");
		}
	};
};