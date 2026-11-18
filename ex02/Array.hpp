#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
public:
	Array(void);
	explicit Array(unsigned int size);
	~Array(void);

	unsigned int size(void) const;

private:
	Array(const Array &source);
	Array &operator=(const Array &source);

	T *_elements;
	unsigned int _size;
};

# include "Array.tpp"

#endif
