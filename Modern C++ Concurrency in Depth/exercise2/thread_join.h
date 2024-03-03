#pragma once

#include <thread>

class thread_join {
  std::thread& t;

public:
  explicit thread_join(std::thread& _t) : t(_t) {}
  ~thread_join() {
    if (t.joinable()) {
      t.join();
    }
  }

  thread_join(const thread_join&) = delete;
  thread_join& operator=(const thread_join&) = delete;
};

