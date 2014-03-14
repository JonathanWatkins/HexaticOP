//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	Output.cpp
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "Output.h"

#include "HexaticOP.h"
#include "StopWatch.h"

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	interface
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void Output::SetOutput(HexaticOP & hex, StopWatch & stw)
{
    //se_ = val.GetOptionSE();
    //c_ = val.GetOptionValue();
    //t_ = stw.GetTime();
}
 
void Output::DoOutput()
{
    //ut::OutputLine("Option value ", c_);
    //ut::OutputLine("se           ", se_);
    //ut::OutputLine("Time taken   ", t_);
}

void Output::OutputBanner(std::string strg)
{
    //ut::OutputLine(strg);
}

void Output::OutputCounter(long j, long M, long interval)
{
    //ut::OutputCounter(j, M, interval);
}
  
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	end
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
