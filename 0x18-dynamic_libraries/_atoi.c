int _atoi(char *s) {
    int sign = 1;
    int result = 0;

    while (*s) {
        if (*s == '-') {
            sign *= -1;
        } else if (*s >= '0' && *s <= '9') {
            result = result * 10 + (*s - '0');
        } else if (result != 0) {
            break; // Stop at the end of the number
        }
        s++;
    }

    return result * sign;
}
