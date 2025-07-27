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
//    const char * output_dir_path = argv[3];

    //
    // Open template file
    //
    FILE * template_file = fopen(template_file_path, "r");
    if (template_file == NULL) {
        printf("error: couldn't open template file %s\n", template_file_path);
        return EXIT_FAILURE;
    }

    

    return EXIT_SUCCESS;
}
