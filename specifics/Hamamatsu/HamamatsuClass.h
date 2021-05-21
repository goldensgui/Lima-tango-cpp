//=============================================================================
//
// file :         HamamatsuClass.h
//
// description :  Include for the HamamatsuClass root class.
//                This class is the singleton class for
//                the Hamamatsu device class.
//                It contains all properties and methods which the 
//                Hamamatsu requires only once e.g. the commands.
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
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================

#ifndef _HAMAMATSUCLASS_H
#define _HAMAMATSUCLASS_H

#include <tango.h>
#include <Hamamatsu.h>


namespace Hamamatsu_ns
{//=====================================
//	Define classes for attributes
//=====================================
class outputTriggersStatusAttrib: public Tango::SpectrumAttr
{
public:
	outputTriggersStatusAttrib():SpectrumAttr("outputTriggersStatus", Tango::DEV_STRING, Tango::READ, 4) {};
	~outputTriggersStatusAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<Hamamatsu *>(dev))->read_outputTriggersStatus(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<Hamamatsu *>(dev))->is_outputTriggersStatus_allowed(ty);}
};

class nbOutputTriggerAttrib: public Tango::Attr
{
public:
	nbOutputTriggerAttrib():Attr("nbOutputTrigger", Tango::DEV_USHORT, Tango::READ) {};
	~nbOutputTriggerAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<Hamamatsu *>(dev))->read_nbOutputTrigger(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<Hamamatsu *>(dev))->is_nbOutputTrigger_allowed(ty);}
};

class bottomViewExposureTimeAttrib: public Tango::Attr
{
public:
	bottomViewExposureTimeAttrib():Attr("bottomViewExposureTime", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~bottomViewExposureTimeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<Hamamatsu *>(dev))->read_bottomViewExposureTime(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<Hamamatsu *>(dev))->write_bottomViewExposureTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<Hamamatsu *>(dev))->is_bottomViewExposureTime_allowed(ty);}
};

class topViewExposureTimeAttrib: public Tango::Attr
{
public:
	topViewExposureTimeAttrib():Attr("topViewExposureTime", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~topViewExposureTimeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<Hamamatsu *>(dev))->read_topViewExposureTime(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<Hamamatsu *>(dev))->write_topViewExposureTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<Hamamatsu *>(dev))->is_topViewExposureTime_allowed(ty);}
};

class wViewEnabledAttrib: public Tango::Attr
{
public:
	wViewEnabledAttrib():Attr("wViewEnabled", Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~wViewEnabledAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<Hamamatsu *>(dev))->read_wViewEnabled(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<Hamamatsu *>(dev))->write_wViewEnabled(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<Hamamatsu *>(dev))->is_wViewEnabled_allowed(ty);}
};

class fpsAttrib: public Tango::Attr
{
public:
	fpsAttrib():Attr("fps", Tango::DEV_DOUBLE, Tango::READ) {};
	~fpsAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<Hamamatsu *>(dev))->read_fps(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<Hamamatsu *>(dev))->is_fps_allowed(ty);}
};

class lostFramesAttrib: public Tango::Attr
{
public:
	lostFramesAttrib():Attr("lostFrames", Tango::DEV_LONG, Tango::READ) {};
	~lostFramesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<Hamamatsu *>(dev))->read_lostFrames(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<Hamamatsu *>(dev))->is_lostFrames_allowed(ty);}
};

//=========================================
//	Define classes for commands
//=========================================
class SetOutputTriggersPolarityCmd : public Tango::Command
{
public:
	SetOutputTriggersPolarityCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetOutputTriggersPolarityCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetOutputTriggersPolarityCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Hamamatsu *>(dev))->is_SetOutputTriggersPolarity_allowed(any);}
};



class SetOutputTriggerKindCmd : public Tango::Command
{
public:
	SetOutputTriggerKindCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetOutputTriggerKindCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetOutputTriggerKindCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Hamamatsu *>(dev))->is_SetOutputTriggerKind_allowed(any);}
};



//
// The HamamatsuClass singleton definition
//

class
#ifdef WIN32
	__declspec(dllexport)
#endif
	HamamatsuClass : public Tango::DeviceClass
{
public:
//	properties member data

//	add your own data members here
//------------------------------------

public:
	Tango::DbData	cl_prop;
	Tango::DbData	cl_def_prop;
	Tango::DbData	dev_def_prop;

//	Method prototypes
	static HamamatsuClass *init(const char *);
	static HamamatsuClass *instance();
	~HamamatsuClass();
	Tango::DbDatum	get_class_property(string &);
	Tango::DbDatum	get_default_device_property(string &);
	Tango::DbDatum	get_default_class_property(string &);
	
protected:
	HamamatsuClass(string &);
	static HamamatsuClass *_instance;
	void command_factory();
	void get_class_property();
	void attribute_factory(vector<Tango::Attr *> &);
	void write_class_property();
	void set_default_property();
	string get_cvstag();
	string get_cvsroot();

private:
	void device_factory(const Tango::DevVarStringArray *);
};


}	//	namespace Hamamatsu_ns

#endif // _HAMAMATSUCLASS_H
