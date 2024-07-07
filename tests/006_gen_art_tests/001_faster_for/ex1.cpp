#include <iostream>
#include <chrono>
#include <algorithm>
#include <vector>
#include <string>

using TimePoint = std::chrono::time_point<std::chrono::high_resolution_clock>;
using TimeDuration = std::chrono::duration<double>;
using String = std::string;

const long long N = 1000000000;

void forEach() {
    int tmp = 0;
    std::vector<int> nums(N);
    std::for_each(nums.begin(), nums.end(), [&tmp](const int&){
        ++tmp;
		std::cout << tmp << std::endl;
    });
}

void standartFor() {
	int tmp = 0;
    for (int i = 0; i < N; i++) {
		++tmp;
		std::cout << tmp << std::endl;
    }
}

TimePoint timerNow() {
	return std::chrono::high_resolution_clock::now();
}

void printTimer(TimePoint start, TimePoint end, String methodName) {
	TimeDuration duration = end - start;
	std::cout << methodName << "duration time: " 
			  << duration.count() << " seconds" 
			  << std::endl;
}

int main() {
    auto start = timerNow();
    standartFor();
    auto end = timerNow();
	printTimer(start, end, "'standartFor()'");

	start = timerNow();
    forEach();
    end = timerNow();
	printTimer(start, end, "'forEach()'");

    return 0;
}

// g++ ex1.cpp -o ex1.exe ; ./ex1.exe