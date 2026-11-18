#include <stdio.h>
#include <string.h>

int main(void) // split
{
	char	**result;
    int     i;

    i = 0;
    result = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
    if (!result)
        return (1);
    while (result[i])
    {
        printf("[%s]\n", result[i]);
        i++;
    }
    ft_free(result);
    return (0);
}

int	main(void) // substr
{
	printf("%s\n", ft_substr("hola", 2, 0));
}

int	main(void) // bzero
{
	char	s[15] = "hola que tal";
	printf("%s\n", s);
	ft_bzero(s, 5);
	printf("%s\n", s);
	bzero(s, 5);
	printf("%s\n", s);
}

int	main(void) // atoi
{
	char	str[20] = " ---+--+1234ab567";
	
	printf("%d", ft_atoi(str));
}

int	main(void) // lstadd_back
{
	t_list	*lst;
	t_list	*new;
	lst = ft_lstnew("hola");
	new = ft_lstnew("que tal");
	ft_lstadd_back(&lst, new);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
}

int	main(void) // memmove
{
	char dest [15] = "adios";
	char src [15] = "hola";
	memmove(dest, src, 3);
	printf("%s\n", dest);
	ft_memmove(dest, src, 3);
	printf("%s\n", dest);
}

int	main(void) // strlcat
{
	char dest[] = "como ";
	char src[] = "estas";
	
	printf("%zu", ft_strlcat(dest, src, 3));
}

int	main(void) // strlcpy
{
	char dest [15] = "adios";
	char src [15] = "";
	ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
	strlcpy(dest, src, 5);
	printf("%s\n", dest);
}

int	main(void) // strnstr
{
	printf("%s", ft_strnstr("hola que tal ", "que", 15));
}