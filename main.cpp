#include <bits/stdc++.h>

/* function prototype */
size_t digit_count(const size_t& temp_number);

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the number_of_integers */
    int number_of_integers;
    std::cin >> number_of_integers;

    /* navigate through each number */
    while (number_of_integers--) {

        /* get the number */
        size_t number;
        std::cin >> number;

        /* find out the total occurrence of digit 4 */
        size_t count_occurrence_of = digit_count(number);

        /* print the total occurrence of digit 4 */
        std::cout << count_occurrence_of << std::endl;
    }
    return 0;
}

/* a function to calculate the total
 * occurrence of digit 4 in number */
size_t digit_count(const size_t& number) {

    /* define temp_number to store number
     * so that original doesn't get altered */
    size_t temp_number{number};
    size_t count_occurrence_of{0};

    /* navigate through each digit in the number */
    while (temp_number != 0) {
        if (temp_number % 10 == 4) {
            /* if the digit under processing equals
             * 4 then update the occurrence count */
            count_occurrence_of++;
        }

        /* reduce the temp_number by
         * eliminating processed digit */
        temp_number /= 10;
    }

    /* return the count_occurrence_of 4 */
    return count_occurrence_of;
}