#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(13005));
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(-5));
	printf("%d\n", ft_recursive_factorial(13005));
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(-5,0));
	printf("%d\n", ft_iterative_power(5,0));
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(2,4));
	printf("%d\n", ft_iterative_power(5,-5));
	printf("%d\n", ft_iterative_power(-5,-5));
	printf("%d\n", ft_iterative_power(1,-5));
	printf("%d\n", ft_iterative_power(-5,1));
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(2,4));
	printf("%d\n", ft_recursive_power(2,0));
	printf("%d\n", ft_recursive_power(2,-4));
	printf("%d\n", ft_recursive_power(0,4));
	printf("%d\n", ft_recursive_power(-2,4));
	printf("%d\n", ft_recursive_power(100,100000));
	printf("%d\n", ft_recursive_power(2,4));
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(1));
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%i\n", ft_sqrt(16));
	printf("%i\n", ft_sqrt(4));
	printf("%i\n", ft_sqrt(15));
	printf("%i\n", ft_sqrt(0));
	printf("%i\n", ft_sqrt(-16));
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%i,\n", ft_is_prime(0));
	printf("%i,\n", ft_is_prime(1));
	printf("%i,\n", ft_is_prime(3));
	printf("%i,\n", ft_is_prime(4));
	printf("%i,\n", ft_is_prime(5));
	return (0);
}



#include <stdio.h>
int main()
{
	printf("%i,\n", ft_find_next_prime(-7));
	printf("%i,\n", ft_find_next_prime(0));
	printf("%i,\n", ft_find_next_prime(1));
	printf("%i,\n", ft_find_next_prime(2));
	printf("%i,\n", ft_find_next_prime(7));
	printf("%i,\n", ft_find_next_prime(20));
	return (0);
}
