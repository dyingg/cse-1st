#include <stdio.h>
#include <stdlib.h>


int copyfile(char * name1, char * name2) {
    FILE * file1, * file2;
    if((file1 = fopen(name1, "r"))== NULL) {
        printf("File to copy from not found.\n");
        return 0;

    }
    if((file2 = fopen(name2, "w")) == NULL) {
        printf("File to copy to not found.\n");
        return 0;
    }
    char ch = fgetc(file1);
    while(ch != EOF) {
        fputc(ch, file2);
        ch = fgetc(file1);
    }
    fclose(file1);
    fclose(file2);
    return 1;

}
int main(int argc,char ** argv)
{
    if(argc != 3) {
        printf("Invalid arguments use syntax copy file1 file3\n");
        return -1;
    }
    if(copyfile(argv[1], argv[2])) {
        printf("Successfully copied file.\n");
        return 0;
    };

    return -1;
}
