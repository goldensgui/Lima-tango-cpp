static const char *RcsId = "$Id $";
//+=============================================================================
//
// file :         HamamatsuStateMachine.cpp
//
// description :  C++ source for the Hamamatsu and its alowed 
//                methods for commands and attributes
//
// project :      TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// SVN only:
// $HeadURL: $
//
// CVS only:
// $Source:  $
// $Log:  $
//
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================

#include <tango.h>
#include <Hamamatsu.h>
#include <HamamatsuClass.h>

/*====================================================================
 *	This file contains the methods to allow commands and attributes
 * read or write execution.
 *
 * If you wand to add your own code, add it between 
 * the "End/Re-Start of Generated Code" comments.
 *
 * If you want, you can also add your own methods.
 *====================================================================
 */

namespace Hamamatsu_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_lostFrames_allowed
// 
// description : 	Read/Write allowed for lostFrames attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_lostFrames_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_fps_allowed
// 
// description : 	Read/Write allowed for fps attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_fps_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_wViewEnabled_allowed
// 
// description : 	Read/Write allowed for wViewEnabled attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_wViewEnabled_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_topViewExposureTime_allowed
// 
// description : 	Read/Write allowed for topViewExposureTime attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_topViewExposureTime_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_bottomViewExposureTime_allowed
// 
// description : 	Read/Write allowed for bottomViewExposureTime attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_bottomViewExposureTime_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_channel1Polarity_allowed
// 
// description : 	Read/Write allowed for channel1Polarity attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_channel1Polarity_allowed(Tango::AttReqType type)
{
	 if (get_state() == Tango::INIT ||
        get_state() == Tango::FAULT ||
        get_state() == Tango::RUNNING)
    {
        //	End of Generated Code
        if (get_state() == Tango::RUNNING && type == Tango::READ_REQ)
        {
            return true;
        }
	}

	//	Re-Start of Generated Code
	return false;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_channel2Polarity_allowed
// 
// description : 	Read/Write allowed for channel2Polarity attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_channel2Polarity_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT ||
        get_state() == Tango::FAULT ||
        get_state() == Tango::RUNNING)
    {
        //	End of Generated Code
        if (get_state() == Tango::RUNNING && type == Tango::READ_REQ)
        {
            return true;
        }
	}
	//	Re-Start of Generated Code
	return false;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_channel3Polarity_allowed
// 
// description : 	Read/Write allowed for channel3Polarity attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_channel3Polarity_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT ||
        get_state() == Tango::FAULT ||
        get_state() == Tango::RUNNING)
    {
        //	End of Generated Code
        if (get_state() == Tango::RUNNING && type == Tango::READ_REQ)
        {
            return true;
        }
	}
	//	Re-Start of Generated Code
	return false;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_channel1Kind_allowed
// 
// description : 	Read/Write allowed for channel1Kind attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_channel1Kind_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT ||
        get_state() == Tango::FAULT ||
        get_state() == Tango::RUNNING)
    {
        //	End of Generated Code
        if (get_state() == Tango::RUNNING && type == Tango::READ_REQ)
        {
            return true;
        }
	}
	//	Re-Start of Generated Code
	return false;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_channel2Kind_allowed
// 
// description : 	Read/Write allowed for channel2Kind attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_channel2Kind_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT ||
        get_state() == Tango::FAULT ||
        get_state() == Tango::RUNNING)
    {
        //	End of Generated Code
        if (get_state() == Tango::RUNNING && type == Tango::READ_REQ)
        {
            return true;
        }
	}
	//	Re-Start of Generated Code
	return false;
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::is_channel3Kind_allowed
// 
// description : 	Read/Write allowed for channel3Kind attribute.
//
//-----------------------------------------------------------------------------
bool Hamamatsu::is_channel3Kind_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT ||
        get_state() == Tango::FAULT ||
        get_state() == Tango::RUNNING)
    {
        //	End of Generated Code
        if (get_state() == Tango::RUNNING && type == Tango::READ_REQ)
        {
            return true;
        }
	}
	//	Re-Start of Generated Code
	return false;
}

//=================================================
//		Commands Allowed Methods
//=================================================

}	// namespace Hamamatsu_ns
