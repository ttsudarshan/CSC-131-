//concatenate the contents of two text files and produce its output in a third file.//
#include <stdio.h>

int main(int argc, char *argv[]) {

    FILE *fp1, *fp2, *dest_fp;
    dest_fp = fopen(argv[3], "w");
    fp1 = fopen(argv[1], "r");
    char ch1;
    while ((ch1 = getc(fp1)) != EOF) {
        putc(ch1, dest_fp);
    }
    fclose(fp1);

    fp2 = fopen(argv[2], "r");
    char ch2;
    while ((ch2 = getc(fp2)) != EOF) {
        putc(ch2, dest_fp);
    }
    fclose(fp2);

    fclose(dest_fp);
}
