#include <unistd.h>

int	main(int ac, char **ag)
{
	int	i;
	int	j;
	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (ag[1][i] && ag[2][j])
		{
			if (ag[1][i] == ag[2][j])
				i++;
			j++;
		}
		if (ag[1][i] == '\0')
		{
			i = 0;
			while (ag[1][i])
			{
				write (1, &ag[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
}
