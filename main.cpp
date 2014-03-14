/*	
 * 	This program takes a space delimited text file of
 * 	x and y positions and returns a file containing
 *  the structure factor - SFplotdata.txt.
 * 
 *  The calculations are based on real space lattice
 *  spacings of a0=1e-7m
 * 
 *  The data set must be at least as large as
 *  10e-7 < xval < 60e-7 
 *  2e-7  < yval < 50e-7
 *  for everything outside this range is trimmed before
 *  calculation.
 * 
 *  The range/resolution in reciprocal space is 
 *  -3pi to 3pi in qx and qy in steps of pi/20.0
 * 
 * 
 *  Modifications need to be made to this program to allow
 *  for different densities and parameters to be specified.
 * 
 *  
 *  
 * 	This was written by Jon Watkins - 2012
 * 
 */

#include "Application_Wrapper.h"

#include <stdexcept>
#include <iostream>


int main()
{
		
		try
    {
        Application_Wrapper app;
        app.run();
    }
    catch(const std::runtime_error & e)
    {
				std::cout << "Error caught:  " << e.what() << std::endl;

    }
    catch(...)
    {
				std::cout << "Unknown error caught" << std::endl;

    }
	
	
}
