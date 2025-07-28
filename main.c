//
//  main.c
//  templating-language
//
//  Created by Thomas Tillistrand and Thomas Foster on 7/26/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    if (argc != 3) {
        printf("error: bad arguments\n");
        printf("Usage: tl [layout file] [input dir]\n");
        return EXIT_FAILURE;
    }

    const char * template_file_path = argv[1];
    const char * input_dir_path = argv[2];
    // TODO: Replace with safer string cat
    char output_file_name[PATH_MAX] = {0};
    strcat(output_file_name, input_dir_path);
    strcat(output_file_name, ".html");
//    const char * output_dir_path = argv[3];

    //
    // Open template file
    //
    FILE * template_file = fopen(template_file_path, "r");
    if (template_file == NULL) {
        printf("error: couldn't open template file %s\n", template_file_path);
        return EXIT_FAILURE;
    }

    //
    // Open output file
    //
    FILE * output_file = fopen("build", "w");
    if (output_file == NULL) {
        printf("error: couldn't open output file %s\n", "build");
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
