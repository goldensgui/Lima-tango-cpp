/*----- PROTECTED REGION ID(DhyanaClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        DhyanaClass.h
//
// description : Include for the Dhyana root class.
//               This class is the singleton class for
//                the Dhyana device class.
//               It contains all properties and methods which the 
//               Dhyana requires only once e.g. the commands.
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


#ifndef DhyanaClass_H
#define DhyanaClass_H

#ifdef WIN32
#include "tango.h"
#endif
#include <Dhyana.h>

#ifndef WIN32
#include "tango.h"
#endif

/*----- PROTECTED REGION END -----*/	//	DhyanaClass.h


namespace Dhyana_ns
{
/*----- PROTECTED REGION ID(DhyanaClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	DhyanaClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute tucamVersion class definition
class tucamVersionAttrib: public Tango::Attr
{
public:
	tucamVersionAttrib():Attr("tucamVersion",
			Tango::DEV_STRING, Tango::READ) {};
	~tucamVersionAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_tucamVersion(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_tucamVersion_allowed(ty);}
};

//	Attribute temperature class definition
class temperatureAttrib: public Tango::Attr
{
public:
	temperatureAttrib():Attr("temperature",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~temperatureAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_temperature(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_temperature_allowed(ty);}
};

//	Attribute temperatureTarget class definition
class temperatureTargetAttrib: public Tango::Attr
{
public:
	temperatureTargetAttrib():Attr("temperatureTarget",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~temperatureTargetAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_temperatureTarget(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_temperatureTarget(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_temperatureTarget_allowed(ty);}
};

//	Attribute fanSpeed class definition
class fanSpeedAttrib: public Tango::Attr
{
public:
	fanSpeedAttrib():Attr("fanSpeed",
			Tango::DEV_USHORT, Tango::READ_WRITE) {};
	~fanSpeedAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_fanSpeed(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_fanSpeed(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_fanSpeed_allowed(ty);}
};

//	Attribute globalGain class definition
class globalGainAttrib: public Tango::Attr
{
public:
	globalGainAttrib():Attr("globalGain",
			Tango::DEV_STRING, Tango::READ_WRITE) {};
	~globalGainAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_globalGain(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_globalGain(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_globalGain_allowed(ty);}
};

//	Attribute fps class definition
class fpsAttrib: public Tango::Attr
{
public:
	fpsAttrib():Attr("fps",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~fpsAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_fps(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_fps_allowed(ty);}
};

//	Attribute channel1 class definition
class channel1Attrib: public Tango::Attr
{
public:
	channel1Attrib():Attr("channel1",
			Tango::DEV_ENUM, Tango::READ_WRITE) {};
	~channel1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_channel1(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_channel1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_channel1_allowed(ty);}
	virtual bool same_type(const type_info &in_type) {return typeid(channel1Enum) == in_type;}
	virtual string get_enum_type() {return string("channel1Enum");}
};

//	Attribute channel2 class definition
class channel2Attrib: public Tango::Attr
{
public:
	channel2Attrib():Attr("channel2",
			Tango::DEV_ENUM, Tango::READ_WRITE) {};
	~channel2Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_channel2(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_channel2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_channel2_allowed(ty);}
	virtual bool same_type(const type_info &in_type) {return typeid(channel2Enum) == in_type;}
	virtual string get_enum_type() {return string("channel2Enum");}
};

//	Attribute channel3 class definition
class channel3Attrib: public Tango::Attr
{
public:
	channel3Attrib():Attr("channel3",
			Tango::DEV_ENUM, Tango::READ_WRITE) {};
	~channel3Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_channel3(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_channel3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_channel3_allowed(ty);}
	virtual bool same_type(const type_info &in_type) {return typeid(channel3Enum) == in_type;}
	virtual string get_enum_type() {return string("channel3Enum");}
};

//	Attribute width_ch1 class definition
class width_ch1Attrib: public Tango::Attr
{
public:
	width_ch1Attrib():Attr("width_ch1",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~width_ch1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_width_ch1(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_width_ch1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_width_ch1_allowed(ty);}
};

//	Attribute width_ch2 class definition
class width_ch2Attrib: public Tango::Attr
{
public:
	width_ch2Attrib():Attr("width_ch2",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~width_ch2Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_width_ch2(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_width_ch2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_width_ch2_allowed(ty);}
};

//	Attribute width_ch3 class definition
class width_ch3Attrib: public Tango::Attr
{
public:
	width_ch3Attrib():Attr("width_ch3",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~width_ch3Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_width_ch3(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_width_ch3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_width_ch3_allowed(ty);}
};

//	Attribute delay_ch1 class definition
class delay_ch1Attrib: public Tango::Attr
{
public:
	delay_ch1Attrib():Attr("delay_ch1",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~delay_ch1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_delay_ch1(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_delay_ch1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_delay_ch1_allowed(ty);}
};

//	Attribute delay_ch2 class definition
class delay_ch2Attrib: public Tango::Attr
{
public:
	delay_ch2Attrib():Attr("delay_ch2",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~delay_ch2Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_delay_ch2(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_delay_ch2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_delay_ch2_allowed(ty);}
};

//	Attribute delay_ch3 class definition
class delay_ch3Attrib: public Tango::Attr
{
public:
	delay_ch3Attrib():Attr("delay_ch3",
			Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~delay_ch3Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_delay_ch3(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_delay_ch3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_delay_ch3_allowed(ty);}
};

//	Attribute edge1 class definition
class edge1Attrib: public Tango::Attr
{
public:
	edge1Attrib():Attr("edge1",
			Tango::DEV_ENUM, Tango::READ_WRITE) {};
	~edge1Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_edge1(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_edge1(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_edge1_allowed(ty);}
	virtual bool same_type(const type_info &in_type) {return typeid(edge1Enum) == in_type;}
	virtual string get_enum_type() {return string("edge1Enum");}
};

//	Attribute edge2 class definition
class edge2Attrib: public Tango::Attr
{
public:
	edge2Attrib():Attr("edge2",
			Tango::DEV_ENUM, Tango::READ_WRITE) {};
	~edge2Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_edge2(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_edge2(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_edge2_allowed(ty);}
	virtual bool same_type(const type_info &in_type) {return typeid(edge2Enum) == in_type;}
	virtual string get_enum_type() {return string("edge2Enum");}
};

//	Attribute edge3 class definition
class edge3Attrib: public Tango::Attr
{
public:
	edge3Attrib():Attr("edge3",
			Tango::DEV_ENUM, Tango::READ_WRITE) {};
	~edge3Attrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Dhyana *>(dev))->read_edge3(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Dhyana *>(dev))->write_edge3(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Dhyana *>(dev))->is_edge3_allowed(ty);}
	virtual bool same_type(const type_info &in_type) {return typeid(edge3Enum) == in_type;}
	virtual string get_enum_type() {return string("edge3Enum");}
};


/**
 *	The DhyanaClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  DhyanaClass : public Tango::DeviceClass
#else
class DhyanaClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(DhyanaClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static DhyanaClass *init(const char *);
		static DhyanaClass *instance();
		~DhyanaClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		DhyanaClass(string &);
		static DhyanaClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	Dhyana_H
