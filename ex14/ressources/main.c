#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_des(char *input) {
    char *result = strdup(input);
    const char *key = "0123456";
    int key_index = 0;
    unsigned int i = 0;

    while (result[i] != '\0') {
        if (key_index == 6) {
            key_index = 0;
        }

        // Use raw byte value directly (e.g. '0' = 48 shifts)
        int shifts = (unsigned char)key[key_index];

        if ((i & 1) == 0) {
            // Even index - decrement
            for (int j = 0; j < shifts; j++) {
                result[i]--;
                if ((unsigned char)result[i] == 0x1F) {
                    result[i] = '~';
                }
            }
        } else {
            // Odd index - increment
            for (int j = 0; j < shifts; j++) {
                result[i]++;
                if ((unsigned char)result[i] == 0x7F) {
                    result[i] = ' ';
                }
            }
        }

        i++;
        key_index++;
    }

    return result;
}


int main(void) {

    char *token = ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|");
    printf("your token is %s\n", token);

    free(token);
    return 0;
}
