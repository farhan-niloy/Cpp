#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(int pid);
  int Pid() const;               // TODO: See src/process.cpp
  std::string User() const;      // TODO: See src/process.cpp
  std::string Command() const;   // TODO: See src/process.cpp
  float CpuUtilization() const;  // TODO: See src/process.cpp
  void CpuUtilization(long activate_ticks, long system_ticks);
  std::string Ram() const;                 // TODO: See src/process.cpp
  long int UpTime() const;                 // TODO: See src/process.cpp
  bool operator<(Process const& a) const;  // TODO: See src/process.cpp
  bool operator>(const Process& a) const;
  // TODO: Declare any necessary private members
 private:
  int pid_;
  float cpu_{0};
  long cached_active_ticks_{0};
  long cached_idle_ticks_{0};
  long cached_system_ticks_{0};
};

#endif