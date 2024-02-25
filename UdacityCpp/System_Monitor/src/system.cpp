#include <unistd.h>
#include <cstddef>
#include <set>
#include <string>
#include <vector>

#include "linux_parser.h"
#include "process.h"
#include "processor.h"
#include "system.h"

using namespace std;

// TODO: Return the system's CPU
Processor& System::Cpu() { return cpu_; }

// TODO: Return a container composed of the system's processes
vector<Process>& System::Processes() {
  vector<int> pids{LinuxParser::Pids()};
  set<int> extant_pids;
  for (Process const& process : processes_) {
    extant_pids.insert(process.Pid());
  }

  for (int pid : pids) {
    if (extant_pids.find(pid) == extant_pids.end())
      processes_.emplace_back(pid);
  }

  for (auto& process : processes_) {
    process.CpuUtilization(LinuxParser::ActiveJiffies(process.Pid()),
                           LinuxParser::Jiffies());
  }
  std::sort(processes_.begin(), processes_.end(), std::greater<Process>());
  return processes_;
}

// TODO: Return the system's kernel identifier (string)
std::string System::Kernel() const { return LinuxParser::Kernel(); }

// TODO: Return the system's memory utilization
float System::MemoryUtilization() const {
  return LinuxParser::MemoryUtilization();
}

// TODO: Return the operating system name
std::string System::OperatingSystem() const {
  return LinuxParser::OperatingSystem();
}

// TODO: Return the number of processes actively running on the system
int System::RunningProcesses() const { return LinuxParser::RunningProcesses(); }

// TODO: Return the total number of processes on the system
int System::TotalProcesses() const { return LinuxParser::TotalProcesses(); }

// TODO: Return the number of seconds since the system started running
long int System::UpTime() const { return LinuxParser::UpTime(); }