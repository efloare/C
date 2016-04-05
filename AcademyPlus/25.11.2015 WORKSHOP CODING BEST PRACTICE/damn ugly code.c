/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   damn ugly code.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efloare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:06:38 by efloare           #+#    #+#             */
/*   Updated: 2015/11/25 17:01:07 by efloare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_isdigit(char *c)
{
    if((atoi(c)) >= '0' && ((atoi(c)) <= '9'))
        return(1);
    if(c == ".")
       return (1);
    else
       return (0);
}

int     ft_ismail(char *c)
{
    int i;
    
    i = 0;
    while(c)
    {
        if( strcmp(c , "@") == 0 || strcmp(c, ".") == 0)
            i++;
        c++;
    }
    if( i == 0)
        return (0);
    else
        return (1);
}

int		ft_isalpha(int c)
{
    if ((c <= 'Z') && (c >= 'A'))
        return (1);
    if ((c <= 'z') && (c >= 'a'))
        return (1);
    if (c == '-')
        return (1);
    else
        return (0);
}

int main()
{
	FILE *file;
	char buff[255];
    char firstname[20];
    char lastname[20];
    char mail[20];
    char nota[5];
    char city[10];
    int string_counter;
    int word_counter;
    int sign_counter;
    int line;
   
    line = 1;
	file = fopen("students.csv", "r");
	while(fscanf(file, "%s", buff) > 0)
	{
        
        sign_counter = 0;
        word_counter = 0;
        string_counter = 0;
        while(*(buff + string_counter) != 0)
		{
            
			if(buff[string_counter] == ';')
			{
				sign_counter++;
				word_counter = 0;
			}
			else
            {
				if(sign_counter == 0)
				{
					firstname[word_counter] = buff[string_counter];
					if(ft_isalpha(firstname[word_counter]) == 0)
                    {
                        printf("%s", "Bad firsname at line ");
                        printf("%d", line);
                        return(0);
                    }
                    if(buff[string_counter + 1] == ';')
						firstname[word_counter + 1]= '\0';
				}
				if(sign_counter == 1)
				{
					lastname[word_counter] = buff[string_counter];
                    if(ft_isalpha(lastname[word_counter]) == 0)
                    {
                        printf("%s", "Bad lastname at line ");
                        printf("%d", line);
                        return(0);
                    }
					if(buff[string_counter + 1] == ';')
						lastname[word_counter + 1]= '\0';
                    
				}
				if(sign_counter == 2)
				{
					mail[word_counter] = buff[string_counter];
					if(buff[string_counter + 1] == ';')
                    {
						mail[word_counter + 1]= '\0';
                        /*if(ft_ismail(mail) == 0)
                        {
                            printf("%s", "Bad mail at line ");
                            printf("%d", line);
                            return(0);
                        }*/
                    }
				}
				if(sign_counter == 3)
				{
					nota[word_counter] = buff[string_counter];
                    if(buff[string_counter + 1] == ';')
                        nota[word_counter + 1]= '\0';
                    if(ft_isdigit(firstname) == 0)
                    {
                        printf("%s", "Bad note at line ");
                        printf("%d", line);
                        return(0);
                    }
				}
				if(sign_counter == 4)
				{
					city[word_counter] = buff[string_counter];
                    if(ft_isalpha(firstname[word_counter]) == 0)
                    {
                        printf("%s", "Bad City at line ");
                        printf("%d", line);
                        return(0);
                    }
					if(buff[string_counter + 1] == 0)
                    {
                        line++;
						city[word_counter + 1]='\0';
                    }
				}
				word_counter++;
			}
			string_counter++;
		}
		if(strcmp(city, "Cluj") == 0 && atol(nota) >= 8.00)
		{
			printf("%s %s\n",firstname, lastname);
		}
	}
	return 0;
}
