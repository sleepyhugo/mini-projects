#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>
#include <limits>

int main() {
    using clock = std::chrono::steady_clock;

    bool running = false;
    clock::time_point startTime;
    clock::duration elapsed = clock::duration::zero();

    int choice = 0;

    while (true) {
        std::cout << "\nStopwatch Menu\n";
        std::cout << "1) Start (press ENTER to stop)\n";
        std::cout << "2) Show elapsed\n";
        std::cout << "3) Reset\n";
        std::cout << "4) Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 1) {
            if (running) {
                std::cout << "Already running.\n";
                continue;
            }

            running = true;
            startTime = clock::now();

            std::atomic<bool> stopRequested(false);

            // Thread that waits for ENTER
            std::thread inputThread([&]() {
                std::cin.get();          // blocks until user presses ENTER
                stopRequested = true;
            });

            std::cout << "Running... (press ENTER to stop)\n";

            // Live update loop
            while (!stopRequested) {
                auto now = clock::now();
                auto currentElapsed = elapsed + (now - startTime);
                double seconds = std::chrono::duration<double>(currentElapsed).count();

                std::cout << "\rElapsed: " << seconds << " seconds        ";
                std::cout.flush();

                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }

            auto now = clock::now();
            elapsed += (now - startTime);
            running = false;

            if (inputThread.joinable()) inputThread.join();

            double seconds = std::chrono::duration<double>(elapsed).count();
            std::cout << "\rElapsed: " << seconds << " seconds        \n";
            std::cout << "Stopped.\n";

        } else if (choice == 2) {
            double seconds = std::chrono::duration<double>(elapsed).count();
            std::cout << "Elapsed time: " << seconds << " seconds\n";

        } else if (choice == 3) {
            elapsed = clock::duration::zero();
            running = false;
            std::cout << "Reset.\n";

        } else if (choice == 4) {
            std::cout << "Goodbye!\n";
            break;

        } else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}
