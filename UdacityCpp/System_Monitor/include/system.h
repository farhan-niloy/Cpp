#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <vector>

#include "process.h"
#include "processor.h"

class System {
 public:
  Processor& Cpu();                   // TODO: See src/system.cpp
  std::vector<Process>& Processes();  // TODO: See src/system.cpp
  float MemoryUtilization() const;          // TODO: See src/system.cpp
  long UpTime() const;                      // TODO: See src/system.cpp
  int TotalProcesses() const;               // TODO: See src/system.cpp
  int RunningProcesses() const;             // TODO: See src/system.cpp
  std::string Kernel() const;               // TODO: See src/system.cpp
  std::string OperatingSystem() const;      // TODO: See src/system.cpp

  // TODO: Define any necessary private members
 private:
  Processor cpu_;
  std::vector<Process> processes_;
};

#endif