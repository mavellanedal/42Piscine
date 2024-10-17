/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santunes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:25:38 by santunes          #+#    #+#             */
/*   Updated: 2024/07/21 12:22:53 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dict.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int validate_args(const char *str) 
{
    while (*str) 
	{
        if (*str == '.' || *str == ',') 
			return (0);
        if (*str < '0' || *str > '9') 
		{
            if (*str == '-' || *str == '+') 
				return (0);
            return (0);
        }
        str++;
    }
    return (1);
}

void print_error(const char *msg) 
{
    write(STDERR_FILENO, msg, strlen(msg));
    write(STDERR_FILENO, "\n", 1);
}

void search_and_print_value(const char *num_str, char **keys, char **values, int num_entries) 
{
    int	i;

	i = 0;
	while (i < num_entries) 
	{
        if (strcmp(keys[i], num_str) == 0) 
		{
            printf("Value: %s\n", values[i]);
            return ();
        }
		i++;
    }
}

void free_resources(char **keys, char **values, char *buffer, int fd) 
{
    int	i;
	int	j;

	j = 0;
	i = 0;
	if (buffer) 
		free(buffer);
    if (keys) 
	{
        while (i < MAX_ENTRIES && keys[i]) 
		{
			free(keys[i]);
			i++;
		}
        free(keys);
    }
    if (values) 
	{
        while (j < MAX_ENTRIES && values[j]) free(values[j]);
        	free(values);
    }
    if (fd != -1) close(fd);
}

int open_dict(void)
{ 
    const char *file_path = "./numbers.dict"; 
    int fd = open(file_path, O_RDONLY);
    if (fd == -1) 
	{
        const char *error_message = "Error opening file\n";
        write(STDERR_FILENO, error_message, 18);
        return (-1);
    }
    return (fd);
}

int initialize_dict(char ***keys, char ***values, int *num_entries) 
{
    *keys = (char **)malloc(MAX_ENTRIES * sizeof(char *));
    if (*keys == NULL) 
	{
        const char *error_message = "Memory allocation for keys failed\n";
        write(STDERR_FILENO, error_message, 36);
        return (-1);
    }

    *values = (char **)malloc(MAX_ENTRIES * sizeof(char *));
    if (*values == NULL) 
	{
        const char *error_message = "Memory allocation for values failed\n";
        write(STDERR_FILENO, error_message, 36);
        free(*keys);
        return (-1);
    }

    *num_entries = 0;
    return (0);
}

int read_dict(int fd, char **buffer) 
{
    *buffer = (char *)malloc(BUFFER_SIZE);
    if (*buffer == NULL) 
	{
        const char *error_message = "Buffer allocation failed\n";
        write(STDERR_FILENO, error_message, 24);
        close(fd);
        return (-1);
    }

    ssize_t bytes_read = read(fd, *buffer, BUFFER_SIZE);
    if (bytes_read == -1) 
	{
        const char *error_message = "Error reading file\n";
        write(STDERR_FILENO, error_message, 18);
        free(*buffer);
        close(fd);
        return (-1);
    }

    return (bytes_read);
}

int parse_buffer(char *buffer, char **keys, char **values, int *num_entries) 
{
    int index = 0;
    char *line_start = buffer;
    char *line_end;

    while ((line_end = strchr(line_start, '\n')) != NULL) 
	{
        char *colon = strchr(line_start, ':');
        if (colon && colon < line_end) 
		{
            *colon = '\i0';
            keys[index] = strdup(line_start); // Use strdup to copy key
            if (keys[index] == NULL) 
			{
                const char *error_message = "Memory allocation for key failed\n";
                write(STDERR_FILENO, error_message, 36);
                return (-1);
            }

            *colon = ':';
            char *value_start = colon + 1;
            *line_end = '\0';
            values[index] = strdup(value_start); // Use strdup to copy value
            if (values[index] == NULL) 
			{
                const char *error_message = "Memory allocation for value failed\n";
                write(STDERR_FILENO, error_message, 36);
                return (-1);
            }

            *line_end = '\n';
            index++;
            if (index >= MAX_ENTRIES) 
			{
                break;
            }
        }
        line_start = line_end + 1;
    }

    *num_entries = index;
    return (0);
}
