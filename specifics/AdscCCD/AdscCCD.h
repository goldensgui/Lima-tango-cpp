//=============================================================================
//
// file :        AdscCCD.h
//
// description : Include for the AdscCCD class.
//
// project :	Adsc CCD detector from Lima
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
//		 BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifndef _ADSCCCD_H
#define _ADSCCCD_H


//using namespace Tango;

/**
 * @author	$Author:  $
 * @version	$Revision:  $
 */

 //	Add your own constant definitions here.
 //-----------------------------------------------
#include "tango.h"
#include <yat4tango/PropertyHelper.h>

#include "HwInterface.h"
#include "CtControl.h"
#include "CtAcquisition.h"
#include <AdscCamera.h>
#include <AdscInterface.h>
#include "Factory.h"

#define MAX_ATTRIBUTE_STRING_LENGTH     256
using namespace lima;
using namespace std;
using namespace yat4tango;
namespace AdscCCD_ns
{

/**
 * Class Description:
 * 
 */

/*
 *	Device States Description:
*  Tango::STANDBY :
*  Tango::INIT :
*  Tango::RUNNING :
*  Tango::FAULT :
 */


class AdscCCD: public Tango::Device_4Impl
{
public :
	//	Add your own data members here
	//-----------------------------------------


	//	Here is the Start of the automatic code generation part
	//-------------------------------------------------------------	
/**
 *	@name attributes
 *	Attribute member data.
 */
//@{
		Tango::DevString	*attr_imagePath_read;
		Tango::DevString	attr_imagePath_write;
		Tango::DevString	*attr_fileName_read;
		Tango::DevString	attr_fileName_write;
		Tango::DevBoolean	*attr_useStoredImageDark_read;
		Tango::DevBoolean	attr_useStoredImageDark_write;
		Tango::DevUShort	*attr_imageKind_read;
		Tango::DevUShort	attr_imageKind_write;
		Tango::DevBoolean	*attr_isLastImage_read;
		Tango::DevBoolean	attr_isLastImage_write;
//@}

/**
 * @name Device properties
 * Device properties member data.
 */
//@{
/**
 *	During acquisition, this is the time before declaring that is no available image returned by detector. (in ms)
 */
	Tango::DevShort	readerTimeout;
/**
 *	Enable/Disable using ImageDiffraction to read image file.
 *	[default = enable]
 */
	Tango::DevBoolean	useReader;
//@}

/**
 *	@name Device properties
 *	Device property member data.
 */
//@{
//@}

/**@name Constructors
 * Miscellaneous constructors */
//@{
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	AdscCCD(Tango::DeviceClass *cl,string &s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	AdscCCD(Tango::DeviceClass *cl,const char *s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device name
 *	@param d	Device description.
 */
	AdscCCD(Tango::DeviceClass *cl,const char *s,const char *d);
//@}

/**@name Destructor
 * Only one destructor is defined for this class */
//@{
/**
 * The object destructor.
 */	
	~AdscCCD() {delete_device();};
/**
 *	will be called at device destruction or at init command.
 */
	void delete_device();
//@}

	
/**@name Miscellaneous methods */
//@{
/**
 *	Initialize the device
 */
	virtual void init_device();
/**
 *	Always executed method before execution command method.
 */
	virtual void always_executed_hook();

//@}

/**
 * @name AdscCCD methods prototypes
 */

//@{
/**
 *	Hardware acquisition for attributes.
 */
	virtual void read_attr_hardware(vector<long> &attr_list);
/**
 *	Extract real attribute values for imagePath acquisition result.
 */
	virtual void read_imagePath(Tango::Attribute &attr);
/**
 *	Write imagePath attribute values to hardware.
 */
	virtual void write_imagePath(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for fileName acquisition result.
 */
	virtual void read_fileName(Tango::Attribute &attr);
/**
 *	Write fileName attribute values to hardware.
 */
	virtual void write_fileName(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for useStoredImageDark acquisition result.
 */
	virtual void read_useStoredImageDark(Tango::Attribute &attr);
/**
 *	Write useStoredImageDark attribute values to hardware.
 */
	virtual void write_useStoredImageDark(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for imageKind acquisition result.
 */
	virtual void read_imageKind(Tango::Attribute &attr);
/**
 *	Write imageKind attribute values to hardware.
 */
	virtual void write_imageKind(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for isLastImage acquisition result.
 */
	virtual void read_isLastImage(Tango::Attribute &attr);
/**
 *	Write isLastImage attribute values to hardware.
 */
	virtual void write_isLastImage(Tango::WAttribute &attr);
/**
 *	Read/Write allowed for imagePath attribute.
 */
	virtual bool is_imagePath_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for fileName attribute.
 */
	virtual bool is_fileName_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for useStoredImageDark attribute.
 */
	virtual bool is_useStoredImageDark_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for imageKind attribute.
 */
	virtual bool is_imageKind_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for isLastImage attribute.
 */
	virtual bool is_isLastImage_allowed(Tango::AttReqType type);
/**
 *	Execution allowed for SetHeaderParameters command.
 */
	virtual bool is_SetHeaderParameters_allowed(const CORBA::Any &any);
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();
/**
 * Set crystallographic parameters reported in the image header. <br>
 *	
 *	[param_name=value]<CARRIAGE RETURN>[param_name=value]<CARRIAGE RETURN>...<br>
 *	
 *	sample :<br>
 *	DISTANCE=300\nPHI=88.5\n...\nWAVELENGTH=0.987\n\0<br>
 *	
 *	List of availables param_name :<br>
 *	@param	argin	
 *	@exception DevFailed
 */
	void	set_header_parameters(Tango::DevString);

/**
 *	Read the device properties from database
 */
	 void get_device_property();
//@}

	//	Here is the end of the automatic code generation part
	//-------------------------------------------------------------	
	    // return true if the device is correctly initialized in init_device
	    bool is_device_initialized(){return m_is_device_initialized;};


protected :	
	//	Add your own data members here
	//-----------------------------------------

    bool                    m_is_device_initialized ;
    stringstream            m_status_message;

    //LIMA objects
    Adsc::Interface*        m_hw;
    CtControl*              m_ct; 
};

}	// namespace_ns

#endif	// _ADSCCCD_H