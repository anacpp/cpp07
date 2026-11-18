template <typename T>
Array<T>::Array(void) : _elements(0), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int size)
	: _elements(size == 0 ? 0 : new T[size]()), _size(size)
{
}

template <typename T>
Array<T>::Array(const Array &source) : _elements(0), _size(0)
{
	Array duplicate(source._size);

	for (unsigned int index = 0; index < source._size; ++index)
		duplicate._elements[index] = source._elements[index];
	exchange(duplicate);
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _elements;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &source)
{
	if (this != &source)
	{
		Array duplicate(source);

		exchange(duplicate);
	}
	return *this;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return _size;
}

template <typename T>
void Array<T>::exchange(Array &other)
{
	T *elements = _elements;
	unsigned int size = _size;

	_elements = other._elements;
	_size = other._size;
	other._elements = elements;
	other._size = size;
}
