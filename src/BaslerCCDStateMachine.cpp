static const char *RcsId = "$Id $";
//+=============================================================================
//
// file :         BaslerCCDStateMachine.cpp
//
// description :  C++ source for the BaslerCCD and its alowed 
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
#include <BaslerCCD.h>
#include <BaslerCCDClass.h>

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

namespace BaslerCCD_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::is_frameRate_allowed
// 
// description : 	Read/Write allowed for frameRate attribute.
//
//-----------------------------------------------------------------------------
bool BaslerCCD::is_frameRate_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( (get_state()==Tango::FAULT || get_state()==Tango::RUNNING )&& type==Tango::READ_REQ )
		{
           return true;
		}
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}



//=================================================
//		Commands Allowed Methods
//=================================================


}	// namespace BaslerCCD_ns
