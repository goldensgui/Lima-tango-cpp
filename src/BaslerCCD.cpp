static const char *RcsId = "$Id:  $";
//+=============================================================================
//
// file :         BaslerCCD.cpp
//
// description :  C++ source for the BaslerCCD and its commands. 
//                The class is derived from Device. It represents the
//                CORBA servant object which will be accessed from the
//                network. All commands which can be executed on the
//                BaslerCCD are implemented in this file.
//
// project :      TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
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
//               BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================



//===================================================================
//
//	The following table gives the correspondence
//	between commands and method name.
//
//  Command name|  Method name
//	----------------------------------------
//  State   |  dev_state()
//  Status  |  dev_status()
//
//===================================================================


#include <tango.h>
#include <PogoHelper.h>
#include <BaslerCCD.h>
#include <BaslerCCDClass.h>

namespace BaslerCCD_ns
{

//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::BaslerCCD(string &s)
// 
// description : 	constructor for simulated BaslerCCD
//
// in : - cl : Pointer to the DeviceClass object
//      - s : Device name 
//
//-----------------------------------------------------------------------------
BaslerCCD::BaslerCCD(Tango::DeviceClass *cl,string &s)
:Tango::Device_4Impl(cl,s.c_str())
{
	init_device();
}

BaslerCCD::BaslerCCD(Tango::DeviceClass *cl,const char *s)
:Tango::Device_4Impl(cl,s)
{
	init_device();
}

BaslerCCD::BaslerCCD(Tango::DeviceClass *cl,const char *s,const char *d)
:Tango::Device_4Impl(cl,s,d)
{
	init_device();
}
//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::delete_device()
// 
// description : 	will be called at device destruction or at init command.
//
//-----------------------------------------------------------------------------
void BaslerCCD::delete_device()
{
	//	Delete device allocated objects
	DELETE_SCALAR_ATTRIBUTE(attr_frameRate_read	);
	
	//!!!! ONLY LimaDetector device can do this !!!!
	//if(m_ct!=0)
	//{
	//	ControlFactory::instance().reset("Basler");
	//	m_ct = 0;
	//}
}	

//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::init_device()
// 
// description : 	will be called at device initialization.
//
//-----------------------------------------------------------------------------
void BaslerCCD::init_device()
{
	INFO_STREAM << "BaslerCCD::BaslerCCD() create device " << device_name << endl;

	// Initialise variables to default values
	//--------------------------------------------
	get_device_property();
	CREATE_SCALAR_ATTRIBUTE(attr_frameRate_read,0.0	);
	m_is_device_initialized = false;
	set_state(Tango::INIT);		
	m_status_message.str("");
	
	try
	{
		//- get the main object used to pilot the lima framework
		//in fact LimaDetector is create the singleton control objet
		//so this call, will only return existing object, no need to give it the ip !!
		m_ct = ControlFactory::instance().get_control("Basler");		
		if(m_ct==0)
		{
			INFO_STREAM<<"Initialization Failed : Unable to get the lima control object !"<<endl;
			m_status_message <<"Initialization Failed : Unable to get the lima control object !"<< endl;
			m_is_device_initialized = false;
			set_state(Tango::INIT);		
			return;			
		}
		
		//- get interface to specific camera
		m_hw = dynamic_cast<Basler::Interface*>(m_ct->hwInterface());
		if(m_hw==0)
		{
			INFO_STREAM<<"Initialization Failed : Unable to get the interface of camera plugin !"<<endl;
			m_status_message <<"Initialization Failed : Unable to get the interface of camera plugin !"<< endl;
			m_is_device_initialized = false;
			set_state(Tango::INIT);		
			return;			
		}
		
	}
	catch(Exception& e)
	{
		INFO_STREAM<<"Initialization Failed : "<<e.getErrMsg()<<endl;
		m_status_message <<"Initialization Failed : "<<e.getErrMsg( )<< endl;
		m_is_device_initialized = false;
		set_state(Tango::INIT);		
		return;
	}
	catch(...)
	{
		INFO_STREAM<<"Initialization Failed : UNKNOWN"<<endl;
		m_status_message <<"Initialization Failed : UNKNOWN"<< endl;
		set_state(Tango::INIT);
		m_is_device_initialized = false;
		return;
	}
	m_is_device_initialized = true;
	set_state(Tango::STANDBY);	
	this->dev_state();		
}


//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::get_device_property()
// 
// description : 	Read the device properties from database.
//
//-----------------------------------------------------------------------------
void BaslerCCD::get_device_property()
{
	//	Initialize your default values here (if not done with  POGO).
	//------------------------------------------------------------------

	//	Read device properties from database.(Automatic code generation)
	//------------------------------------------------------------------
	Tango::DbData	dev_prop;

	//	End of Automatic code generation
	//------------------------------------------------------------------

}
//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::always_executed_hook()
// 
// description : 	method always executed before any command is executed
//
//-----------------------------------------------------------------------------
void BaslerCCD::always_executed_hook()
{
	//- get the main object used to pilot the lima framework
	//in fact LimaCCD is create the singleton control objet
	//so this call, will only return existing object, no need to give it the ip !!
	m_ct = ControlFactory::instance().get_control("Basler");
	
	//- get interface to specific detector
	if(m_ct!=0)
		m_hw = dynamic_cast<Basler::Interface*>(m_ct->hwInterface());
	
}
//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::read_attr_hardware
// 
// description : 	Hardware acquisition for attributes.
//
//-----------------------------------------------------------------------------
void BaslerCCD::read_attr_hardware(vector<long> &attr_list)
{
	DEBUG_STREAM << "BaslerCCD::read_attr_hardware(vector<long> &attr_list) entering... "<< endl;
	//	Add your own code here
}

//+----------------------------------------------------------------------------
//
// method : 		BaslerCCD::read_frameRate
// 
// description : 	Extract real attribute values for frameRate acquisition result.
//
//-----------------------------------------------------------------------------
void BaslerCCD::read_frameRate(Tango::Attribute &attr)
{
	DEBUG_STREAM << "BaslerCCD::read_frameRate(Tango::Attribute &attr) entering... "<< endl;
	if(m_ct!=0)
	{	
		try
		{
			m_hw->getFrameRate((double&)*attr_frameRate_read);
			attr.set_value(attr_frameRate_read);
		}
		catch(Tango::DevFailed& df)
		{
			ERROR_STREAM << df << endl;
			//- rethrow exception
			Tango::Except::re_throw_exception(df,
						static_cast<const char*> ("TANGO_DEVICE_ERROR"),
						static_cast<const char*> (string(df.errors[0].desc).c_str()),
						static_cast<const char*> ("BaslerCCD::read_frameRate"));
		}
		catch(Exception& e)
		{
			ERROR_STREAM << e.getErrMsg() << endl;
			//- throw exception
			Tango::Except::throw_exception(
						static_cast<const char*> ("TANGO_DEVICE_ERROR"),
						static_cast<const char*> (e.getErrMsg().c_str()),
						static_cast<const char*> ("BaslerCCD::read_frameRate"));
		}
	}
}


//+------------------------------------------------------------------
/**
 *	method:	BaslerCCD::dev_state
 *
 *	description:	method to execute "State"
 *	This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *
 * @return	State Code
 *
 */
//+------------------------------------------------------------------
Tango::DevState BaslerCCD::dev_state()
{
	Tango::DevState	argout = DeviceImpl::dev_state();
	DEBUG_STREAM << "BaslerCCD::dev_state(): entering... !" << endl;	
	//	Add your own code to control device here
	
	stringstream    DeviceStatus;
	DeviceStatus 	<< "";
	Tango::DevState DeviceState	= Tango::STANDBY;
	if(!m_is_device_initialized )
	{
		DeviceState			= Tango::INIT;
		DeviceStatus		<< m_status_message.str();		
	}
	else if (m_ct==0)
	{
		DeviceState			= Tango::INIT;
		DeviceStatus		<<"Initialization Failed : Unable to get the lima control object !\n\n";				
	}
	else
	{
		CtControl::Status status;
		m_ct->getStatus(status);
		if (status.AcquisitionStatus == lima::AcqReady)
		{
			DeviceState=Tango::STANDBY;
			DeviceStatus<<"Waiting for Request ...\n"<<endl;
		}		
		else if(status.AcquisitionStatus == lima::AcqRunning)
		{
			DeviceState=Tango::RUNNING;
			DeviceStatus<<"Acquisition is Running ...\n"<<endl;
		}
		else
		{
			DeviceState=Tango::FAULT;//FAULT
			DeviceStatus<<"Acquisition is in Fault\n"<<endl;
		}
	}
	
	set_state(DeviceState);
	set_status(DeviceStatus.str());
	
	argout = DeviceState;
	return argout;
}


}	//	namespace
