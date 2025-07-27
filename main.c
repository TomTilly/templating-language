//
//  main.c
//  templating-language
//
//  Created by Thomas Tillistrand and Thomas Foster on 7/26/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, const char * argv[]) {
    if (argc != 4) {
        printf("error: bad arguments\n");
        printf("Usage: tl [layout file] [input dir] [output dir]\n");
        return EXIT_FAILURE;
    }

    const char * template_file_path = argv[1];
    const char * input_dir_path = argv[2];
    const char * output_dir_path = argv[3];

    //
    // Open template file
    //
    FILE * template_file = fopen(template_file_path, "r");
    if (template_file == NULL) {
        printf("error: couldn't open template file %s\n", template_file_path);
        return EXIT_FAILURE;
    }

    //
    // Open input dir
    //
    DIR * input_dir;
    struct dirent * entry;

    input_dir = opendir(input_dir_path);
    if (input_dir == NULL) {
        printf("error: couldn't open input directory %s\n", input_dir_path);
        return EXIT_FAILURE;
    }

    while ((entry = readdir(input_dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(input_dir);

    return EXIT_SUCCESS;
}
