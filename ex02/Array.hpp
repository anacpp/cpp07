#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
public:
	Array(void);
	explicit Array(unsigned int size);
	Array(const Array &source);
	~Array(void);
	Array &operator=(const Array &source);

	unsigned int size(void) const;

private:
	void exchange(Array &other);

	T *_elements;
	unsigned int _size;
};

# include "Array.tpp"

#endif
