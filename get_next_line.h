/*
** get_next_line.h for get_next_line in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Fri Dec 18 19:47:00 2015 Ronan Boiteau
** Last update Thu Apr 28 20:18:44 2016 Ronan Boiteau
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# ifndef READ_SIZE
#  define READ_SIZE (32)
# endif

typedef unsigned int		t_uint;

char	*get_next_line(int const fd);

#endif /* !GET_NEXT_LINE_H_ */