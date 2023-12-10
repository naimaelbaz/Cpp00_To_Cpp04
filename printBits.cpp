// void print(float a)
// {
// 	char *p = (char *)&a;
	
// 	for (size_t i = sizeof a; i > 0; i--)
// 	{
// 		for (size_t j = 8; j > 0; j--)
// 		{
// 			int bit = (i-1) * 8 +j;
// 			std::cout << std::bitset<8>(p[i - 1])[j - 1];
// 			if (bit == 32 || bit == 24)
// 				std::cout << " ";
// 		}
// 	}
// 	std::cout << "\n";
// }
#include <iostream>

int main() {
    int i = 5;

    // Post-increment: Use the current value of i and then increment it
    int result = i++;

    std::cout << "Result: " << result << std::endl;  // Output: 5
    std::cout << "Updated i: " << i << std::endl;    // Output: 6
	int i , j;
	i = 0; 
	i++;
    return 0;
}
