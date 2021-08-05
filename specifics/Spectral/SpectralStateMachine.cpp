/*----- PROTECTED REGION ID(SpectralStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        SpectralStateMachine.cpp
//
// description : State machine file for the Spectral class
//
// project :     Spectral detector TANGO specific device.
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <Spectral.h>

/*----- PROTECTED REGION END -----*/	//	Spectral::SpectralStateMachine.cpp

//================================================================
//  States   |  Description
//================================================================
//  INIT     |  
//  STANDBY  |  
//  FAULT    |  
//  RUNNING  |  


namespace Spectral_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Spectral::is_cooling_allowed()
 *	Description : Execution allowed for cooling attribute
 */
//--------------------------------------------------------
bool Spectral::is_cooling_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for cooling attribute in Write access.
	/*----- PROTECTED REGION ID(Spectral::coolingStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spectral::coolingStateAllowed_WRITE

	//	Not any excluded states for cooling attribute in read access.
	/*----- PROTECTED REGION ID(Spectral::coolingStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spectral::coolingStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spectral::is_ccdTemperature_allowed()
 *	Description : Execution allowed for ccdTemperature attribute
 */
//--------------------------------------------------------
bool Spectral::is_ccdTemperature_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ccdTemperature attribute in read access.
	/*----- PROTECTED REGION ID(Spectral::ccdTemperatureStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spectral::ccdTemperatureStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Spectral::is_readoutSpeed_allowed()
 *	Description : Execution allowed for readoutSpeed attribute
 */
//--------------------------------------------------------
bool Spectral::is_readoutSpeed_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for readoutSpeed attribute in Write access.
	/*----- PROTECTED REGION ID(Spectral::readoutSpeedStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spectral::readoutSpeedStateAllowed_WRITE

	//	Not any excluded states for readoutSpeed attribute in read access.
	/*----- PROTECTED REGION ID(Spectral::readoutSpeedStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Spectral::readoutSpeedStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================


/*----- PROTECTED REGION ID(Spectral::SpectralStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Spectral::SpectralStateAllowed.AdditionalMethods

}	//	End of namespace
