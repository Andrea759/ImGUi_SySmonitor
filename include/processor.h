#pragma once
#define PROCESSOR_H

class Processor {
    
 public:

  float Utilization();  // TODO: See src/processor.cpp
  int Cpu();
  // TODO: Declare any necessary private members
 
 private:
    int Cpu_Count;
    float CPU_Previous_Idle=0,CPU_Previous_Total=0;
};
