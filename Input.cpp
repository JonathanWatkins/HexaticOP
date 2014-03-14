//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	Input.cpp
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "Input.h"

#include "Coord.h"

#include <sstream>
#include <iostream>
#include <vector>
#include <fstream>

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	interface
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Input::Input()
{
 
	std::ostringstream oss;
	
	oss << "posdata.txt";
	std::cout << "oss: " << oss << std::endl;
	
	std::ifstream myfile (oss.str().c_str());
  std::cout << "initialise Vortices" << std::endl;
  
  double file;
  
	if (myfile.is_open())
	{
	
		std::cout << "Initial Vortex Positions From File" << std::endl;
		file = true;
		double xval;
		double yval;
    
    while ( myfile.good() )
    {
      myfile >> xval >> yval;
     
      Coord new_coord;
      
      new_coord.SetPos(xval,yval,0);
			
			rs_pos_.push_back(new_coord);
			
    }
    myfile.close();

	}
	
   
  std::cout << "Input: Added" << rs_pos_.size() << " positions."  << std::endl;
 
   
}
  
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	end
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
