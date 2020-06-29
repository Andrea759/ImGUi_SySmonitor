#pragma once
#define PROCESS_H

#include <string>
#include <vector>
/*Basic class for Process representation, It contains relevant attributes as shown below*/
class Process {
 public:
  void Update();

  std::vector<std::string> procfileread(std::string);
  int Pid();
  void Pid_Insec(int);
  float CpuUtilization();         
  std::string Parent_Pid();
  long int UpTime();                       
  bool exist();
  std::string Name();
  std::string User();                      // TODO: See src/process.cpp
  std::string Command();                   // TODO: See src/process.cpp
  std::string Ram();                       // TODO: See src/process.cpp
  std::string Status();
                         // TODO: See src/process.cpp 
  std::string Read_Name();
  std::string Read_Parent();
  std::string Read_User();
  std::string Read_Command();
  std::string Read_Ram();
  std::string Read_Status();
  int Read_Pid();
  float Read_Cpu();
  long int Read_Uptime();


private:
  std::string name;
  int process_ID;
  std::string pP_ID;
  std::string u_ID;
  float cpu_Usage;
  std::string ram_Usage;
  std::string status_buffer;
  std::string command;
  long int uptime;

  float prev_u_time=0;
  float prev_s_time=0;
  float prev_uptime=0;

  



};
