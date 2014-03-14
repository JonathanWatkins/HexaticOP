//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	Application_Wrapper.cpp
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "Application_Wrapper.h"

#include "Input.h"
#include "Output.h"
#include "StopWatch.h"
#include "HexaticOP.h"

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	constructor
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Application_Wrapper::Application_Wrapper()
{
    inp_ = new Input;      // owns this pointer
    out_ = new Output;     // owns this pointer
    stw_ = new StopWatch;
    
    hex_ = new HexaticOP(inp_, out_);
}
                                          
Application_Wrapper::~Application_Wrapper()
{
   delete inp_;
   delete out_;
   delete stw_;
   delete hex_;
}
                                           
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	run
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void Application_Wrapper::run()
{
    out_->OutputBanner("Hexatic Order Parameter calculator");
    
    stw_->StartStopWatch();
    
    hex_->run();
        
    out_->SetOutput(*hex_, *stw_);
    out_->DoOutput();
}
 
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	end
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
