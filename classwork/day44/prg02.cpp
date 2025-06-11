#include <iostream>
#include <thread>

void backgroundTask(int& x) {
    x += 10;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Background task done." << std::endl;
}
//void update(int& x) { x += 5; }

int main() {
    int val=10;
    std::thread t(backgroundTask,std::ref(val));
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
   // std::this_thread::sleep_for(std::chrono::seconds(50)); // Wait to see output
    std::this_thread::sleep_for(std::chrono::seconds(10));

   // std::thread t1(update, std::ref(val));
    //t1.detach();
    std::cout << val << std::endl;
    
    return 0;
}