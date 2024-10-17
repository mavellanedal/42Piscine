/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavellan, joamoril, santunes <marvin@42.fr>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:06:04 by mavellan          #+#    #+#             */
/*   Updated: 2024/07/20 12:39:14 by mavellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stddef.h> // For NULL

int main(int argc, char **argv) {
    int fd;
    char **keys = NULL;
    char **values = NULL;
    char *buffer = NULL;
    int num_entries;

    if (argc != 2 || !validate_args(argv[1])) {
        print_error("ERROR, invalid arguments.");
        return 0;
    }

    if ((fd = open_dict()) == -1 ||
        initialize_dict(&keys, &values, &num_entries) != 0 ||
        read_dict(fd, &buffer) == -1 ||
        parse_buffer(buffer, keys, values, &num_entries) != 0) {
        free_resources(keys, values, buffer, fd);
        return 1;
    }

    search_and_print_value(argv[1], keys, values, num_entries);
    free_resources(keys, values, buffer, fd);
    return 0;
}
