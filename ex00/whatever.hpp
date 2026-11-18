#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &first, T &second)
{
	T rotation[2] = {second, first};

	first = rotation[0];
	second = rotation[1];
}

template <typename T>
const T &min(const T &first, const T &second)
{
	const T *selection[2] = {&second, &first};

	return *selection[first < second];
}

template <typename T>
const T &max(const T &first, const T &second)
{
	if (first > second)
		return first;
	return second;
}

#endif
