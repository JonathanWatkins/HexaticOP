//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	HexaticOP.cpp
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "HexaticOP.h"

#include "Input.h"
#include "Output.h"
#include "StopWatch.h"

#include <iostream>
#include <fstream>
#include <cmath>
#include <list>
#include <sstream>
#include <iomanip>
#include <string.h>
#include <stdio.h>

#include "delaunay.h"

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	constructor
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

HexaticOP::HexaticOP(Input * inp, Output * out)
:
inp_(inp),
out_(out)
{

	pi_ = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;    
 
	rs_pos_ = &inp_->GetRealSpacePositions(); 
               	
}
                                          
HexaticOP::~HexaticOP()
{
  
}
                                           
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	run
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void HexaticOP::run()
{
	
	
	double numRecip=3.0;
		
	bool file;
	
	//std::ofstream plotdata;
	//plotdata.precision(6);
  
  std::cout << "posdata size: " << rs_pos_->size() << std::endl;
  
  int num_points=rs_pos_->size();
  
  	
	double real_part=0;
	double imag_part=0;
	
	for (std::vector<Coord>::const_iterator p = rs_pos_->begin(); 
			p != rs_pos_->end(); ++p)
	{
		//std::cout << std::distance(posdata.begin(),p)+1 << std::endl;
		
		for (std::vector<Coord>::const_iterator q = rs_pos_->begin(); 
			q != rs_pos_->end(); ++p)
		{
		
		
		
		
		real_part+=cos(Gx*(p->get_x()-r0x)+Gy*(p->get_y()-r0y));
		imag_part+=sin(Gx*(p->get_x()-r0x)+Gy*(p->get_y()-r0y));
		
		//std::cout << real_part << ", " << imag_part << std::endl;
	
	}
	
	real_part/=numParticles;
	imag_part/=numParticles;
	
	double sqrd=real_part*real_part+imag_part*imag_part;
	
	std::cout << "HexaticOP: " << sqrd << std::endl;
	
  //plotdata.close();


}
 
 
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	end
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX







