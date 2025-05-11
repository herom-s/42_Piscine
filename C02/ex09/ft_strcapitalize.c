/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermarti <hermarti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:07 by hermarti          #+#    #+#             */
/*   Updated: 2025/04/23 16:26:08 by hermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_alphanum(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

char	*ft_word_end(char *str)
{
	char	*end;

	end = str;
	while (*end != '\0' && ft_is_alphanum(*end))
	{
		if (*end >= 'A' && *end <= 'Z')
		{
			*end += 32;
		}
		end++;
	}
	return (end);
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str;
	while (*start)
	{
		if (ft_is_alphanum(*start))
		{
			end = ft_word_end(start);
			if (ft_is_lowercase(*start))
			{
				*start -= 32;
			}
			start = end;
		}
		else
		{
			start++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "oi, tuDo bem? 42palAvras quarEnta-e-duas; cinquenta+e+um";

	printf("before str1 = %s\n", str1);
	printf("str1_return_capitalize = %s\n", ft_strcapitalize(str1));
	printf("after str1 = %s\n", str1);
	return (0);
}
*/
