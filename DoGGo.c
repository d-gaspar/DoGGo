#include<stdio.h>
#include<stdlib.h>

void read(char *input){
    // check if file exists
    if(!fileExists(input)){
        printf("File doesn't exist.");
        return;
    }

    // read file
    FILE *file = fopen(input, "r");
    int c;
    char *line = malloc(1);
    int i = 0;
    while((c = getc(file))!= EOF) {
        if(c == '\n'){
            line[i] = '\0';
            printf("LINE: %s\n", line);
            line = realloc(line, 1);
            i = 0;
        } else {
            line[i] = c;
            i++;
            line = realloc(line, i + 1);
        }
    }
    fclose(file);
}

int fileExists(char *input){
    FILE *file;
    if (file = fopen(input, "r")){
        fclose(file);
        return 1;
    } else {
        return 0;
    }
}

void main(){
  read("test/colors.tsv");
}
