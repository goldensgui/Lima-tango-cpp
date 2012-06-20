//=============================================================================
//
// file :        BaslerCCD.h
//
// description : Include for the BaslerCCD class.
//
// project :	
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
// copyleft :    Synchrotron SOLEIL 
//               L'Orme des merisiers - Saint Aubin
//         BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//=============================================================================
//
//          This file is generated by POGO
//    (Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifndef _BASLERCCD_H
#define _BASLERCCD_H

//using namespace Tango;

/**
 * @author    $Author:  $
 * @version    $Revision:  $
 */

 //    Add your own constant definitions here.
 //-----------------------------------------------

#include "HwInterface.h"
#include "CtControl.h"
#include "CtAcquisition.h"
#include "CtImage.h"
#include "Factory.h"

#include <tango.h>

#include <BaslerInterface.h>
#define MAX_ATTRIBUTE_STRING_LENGTH     256

using namespace lima;
using namespace std;

namespace BaslerCCD_ns
{

/**
 * Class Description:
 * 
 */

/*
 *	Device States Description:
*  Tango::INIT :
*  Tango::STANDBY :
*  Tango::FAULT :
*  Tango::RUNNING :
 */


class BaslerCCD: public Tango::Device_4Impl
{
public :
    //    Add your own data members here
    //-----------------------------------------


    //    Here is the Start of the automatic code generation part
    //-------------------------------------------------------------    
/**
 *    @name attributes
 *    Attribute member data.
 */
//@{
		Tango::DevDouble	*attr_frameRate_read;
//@}

/**
 * @name Device properties
 * Device properties member data.
 */
//@{
/**
 *	Ip Address of the Detector.
 */
	string	detectorIP;
/**
 *	During acquisition, this is the time before declaring that is no available image returned by detector. (in ms)
 */
	Tango::DevShort	detectorTimeout;
/**
 *	Sets the packet size in bytes for the selected steam channel of the Transport Layer.<br>
 */
	Tango::DevLong	detectorPacketSize;
//@}

/**
 *    @name Device properties
 *    Device property member data.
 */
//@{
//@}

/**@name Constructors
 * Miscellaneous constructors */
//@{
/**
 * Constructs a newly allocated Command object.
 *
 *    @param cl    Class.
 *    @param s     Device Name
 */
    BaslerCCD(Tango::DeviceClass *cl,string &s);
/**
 * Constructs a newly allocated Command object.
 *
 *    @param cl    Class.
 *    @param s     Device Name
 */
    BaslerCCD(Tango::DeviceClass *cl,const char *s);
/**
 * Constructs a newly allocated Command object.
 *
 *    @param cl    Class.
 *    @param s     Device name
 *    @param d    Device description.
 */
    BaslerCCD(Tango::DeviceClass *cl,const char *s,const char *d);
//@}

/**@name Destructor
 * Only one destructor is defined for this class */
//@{
/**
 * The object destructor.
 */    
    ~BaslerCCD() {delete_device();};
/**
 *    will be called at device destruction or at init command.
 */
    void delete_device();
//@}

    
/**@name Miscellaneous methods */
//@{
/**
 *    Initialize the device
 */
    virtual void init_device();
/**
 *    Always executed method before execution command method.
 */
    virtual void always_executed_hook();

//@}

/**
 * @name BaslerCCD methods prototypes
 */

//@{
/**
 *	Hardware acquisition for attributes.
 */
	virtual void read_attr_hardware(vector<long> &attr_list);
/**
 *	Extract real attribute values for frameRate acquisition result.
 */
	virtual void read_frameRate(Tango::Attribute &attr);
/**
 *	Read/Write allowed for frameRate attribute.
 */
	virtual bool is_frameRate_allowed(Tango::AttReqType type);
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();

/**
 *	Read the device properties from database
 */
	 void get_device_property();
//@}

    //    Here is the end of the automatic code generation part
    //-------------------------------------------------------------    

	// return true if the device is correctly initialized in init_device
	bool is_device_initialized(){return m_is_device_initialized;};

protected :    
    //    Add your own data members here
    //-----------------------------------------
    
    //- Store the values into the property
    //- Properties stuff    
    int                FindIndexFromPropertyName(Tango::DbData& dev_prop, string property_name);
    template <class T>
    void            create_property_if_empty(Tango::DbData& dev_prop,T value, string property_name);    
    template <class T>
    void            store_value_as_property(T value, string property_name);
	
    bool                 m_is_device_initialized ;
    stringstream        m_status_message;
    //lima OBJECTS
    Basler::Interface*    m_hw;
    CtControl*            m_ct;
    
};

}    // namespace_ns

#endif    // _BASLERCCD_H
