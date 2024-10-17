/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:55:18 by santunes          #+#    #+#             */
/*   Updated: 2024/07/21 12:23:39 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
#define DICT_H

#define MAX_ENTRIES 50
#define BUFFER_SIZE 1024

int open_dict(void);
int read_dict(int fd, char **buffer);
int initialize_dict(char ***keys, char ***values, int *num_entries);
int parse_buffer(char *buffer, char **keys, char **values, int *num_entries);
int validate_args(const char *str);
void print_error(const char *msg);
void search_and_print_value(const char *num_str, char **keys, char **values, int num_entries);
void free_resources(char **keys, char **values, char *buffer, int fd);
int ft_strlen(const char *msg);
int ft_strcmp(char **keys, const char *num_str);
char    *ft_strdup(const char *str);
char    ft_strchr(const char *str, int c);

#endif // DICT_H
