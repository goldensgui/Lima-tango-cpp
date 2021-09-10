/*----- PROTECTED REGION ID(DhyanaStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        DhyanaStateMachine.cpp
//
// description : State machine file for the Dhyana class
//
// project :     Device specific for Dhyana detector
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

#include <Dhyana.h>

/*----- PROTECTED REGION END -----*/	//	Dhyana::DhyanaStateMachine.cpp

//================================================================
//  States   |  Description
//================================================================
//  FAULT    |  
//  INIT     |  
//  RUNNING  |  
//  STANDBY  |  


namespace Dhyana_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_tucamVersion_allowed()
 *	Description : Execution allowed for tucamVersion attribute
 */
//--------------------------------------------------------
bool Dhyana::is_tucamVersion_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::INIT ||
			get_state()==Tango::FAULT ||
			get_state()==Tango::RUNNING)
		{
		/*----- PROTECTED REGION ID(Dhyana::tucamVersionStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	Dhyana::tucamVersionStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_temperature_allowed()
 *	Description : Execution allowed for temperature attribute
 */
//--------------------------------------------------------
bool Dhyana::is_temperature_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::INIT ||
			get_state()==Tango::FAULT ||
			get_state()==Tango::RUNNING)
		{
		/*----- PROTECTED REGION ID(Dhyana::temperatureStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	Dhyana::temperatureStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_temperatureTarget_allowed()
 *	Description : Execution allowed for temperatureTarget attribute
 */
//--------------------------------------------------------
bool Dhyana::is_temperatureTarget_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for temperatureTarget attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::temperatureTargetStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::temperatureTargetStateAllowed_WRITE

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::FAULT ||
			get_state()==Tango::INIT ||
			get_state()==Tango::RUNNING)
		{
		/*----- PROTECTED REGION ID(Dhyana::temperatureTargetStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	Dhyana::temperatureTargetStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_fanSpeed_allowed()
 *	Description : Execution allowed for fanSpeed attribute
 */
//--------------------------------------------------------
bool Dhyana::is_fanSpeed_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for fanSpeed attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::fanSpeedStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::fanSpeedStateAllowed_WRITE

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::FAULT ||
			get_state()==Tango::INIT ||
			get_state()==Tango::RUNNING)
		{
		/*----- PROTECTED REGION ID(Dhyana::fanSpeedStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	Dhyana::fanSpeedStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_globalGain_allowed()
 *	Description : Execution allowed for globalGain attribute
 */
//--------------------------------------------------------
bool Dhyana::is_globalGain_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for globalGain attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::globalGainStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::globalGainStateAllowed_WRITE

	//	Check access type.
	if ( type==Tango::READ_REQ )
	{
		//	Compare device state with not allowed states for READ 
		if (get_state()==Tango::FAULT ||
			get_state()==Tango::INIT ||
			get_state()==Tango::RUNNING)
		{
		/*----- PROTECTED REGION ID(Dhyana::globalGainStateAllowed_READ) ENABLED START -----*/
		
		/*----- PROTECTED REGION END -----*/	//	Dhyana::globalGainStateAllowed_READ
			return false;
		}
		return true;
	}
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_fps_allowed()
 *	Description : Execution allowed for fps attribute
 */
//--------------------------------------------------------
bool Dhyana::is_fps_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for fps attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::fpsStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::fpsStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_channel1_allowed()
 *	Description : Execution allowed for channel1 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_channel1_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for channel1 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::channel1StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::channel1StateAllowed_WRITE

	//	Not any excluded states for channel1 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::channel1StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::channel1StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_channel2_allowed()
 *	Description : Execution allowed for channel2 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_channel2_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for channel2 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::channel2StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::channel2StateAllowed_WRITE

	//	Not any excluded states for channel2 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::channel2StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::channel2StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_channel3_allowed()
 *	Description : Execution allowed for channel3 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_channel3_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for channel3 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::channel3StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::channel3StateAllowed_WRITE

	//	Not any excluded states for channel3 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::channel3StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::channel3StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_width_ch1_allowed()
 *	Description : Execution allowed for width_ch1 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_width_ch1_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for width_ch1 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::width_ch1StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::width_ch1StateAllowed_WRITE

	//	Not any excluded states for width_ch1 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::width_ch1StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::width_ch1StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_width_ch2_allowed()
 *	Description : Execution allowed for width_ch2 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_width_ch2_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for width_ch2 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::width_ch2StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::width_ch2StateAllowed_WRITE

	//	Not any excluded states for width_ch2 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::width_ch2StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::width_ch2StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_width_ch3_allowed()
 *	Description : Execution allowed for width_ch3 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_width_ch3_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for width_ch3 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::width_ch3StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::width_ch3StateAllowed_WRITE

	//	Not any excluded states for width_ch3 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::width_ch3StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::width_ch3StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_delay_ch1_allowed()
 *	Description : Execution allowed for delay_ch1 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_delay_ch1_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for delay_ch1 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::delay_ch1StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::delay_ch1StateAllowed_WRITE

	//	Not any excluded states for delay_ch1 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::delay_ch1StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::delay_ch1StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_delay_ch2_allowed()
 *	Description : Execution allowed for delay_ch2 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_delay_ch2_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for delay_ch2 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::delay_ch2StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::delay_ch2StateAllowed_WRITE

	//	Not any excluded states for delay_ch2 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::delay_ch2StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::delay_ch2StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana::is_delay_ch3_allowed()
 *	Description : Execution allowed for delay_ch3 attribute
 */
//--------------------------------------------------------
bool Dhyana::is_delay_ch3_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for delay_ch3 attribute in Write access.
	/*----- PROTECTED REGION ID(Dhyana::delay_ch3StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::delay_ch3StateAllowed_WRITE

	//	Not any excluded states for delay_ch3 attribute in read access.
	/*----- PROTECTED REGION ID(Dhyana::delay_ch3StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Dhyana::delay_ch3StateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================


/*----- PROTECTED REGION ID(Dhyana::DhyanaStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Dhyana::DhyanaStateAllowed.AdditionalMethods

}	//	End of namespace
