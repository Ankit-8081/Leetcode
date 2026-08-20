int power(int a, int b) {
    int result = 1;
    a %= 1337;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % 1337;
        }

        a = (a * a) % 1337;
        b /= 2;
    }

    return result;
}

int superPow(int a, int* b, int bSize) {
    int result = 1;

    for (int i = 0; i < bSize; i++) {
        result = (power(result, 10) * power(a, b[i])) % 1337;
    }

    return result;
}