#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T, typename Function>
void iter(T *array, const std::size_t length, Function function)
{
	for (std::size_t index = 0; index < length; ++index)
		function(array[index]);
}

#endif
