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
Array<T>::~Array(void)
{
	delete[] _elements;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return _size;
}
