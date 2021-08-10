/*----- PROTECTED REGION ID(SpectralClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        SpectralInstrumentClass.h
//
// description : Include for the Spectral Instrument root class.
//               This class is the singleton class for
//                the Spectral Instrument device class.
//               It contains all properties and methods which the 
//               Spectral Instrument requires only once e.g. the commands.
//
// project :     Spectral Instrument detector TANGO specific device.
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


#ifndef SpectralClass_H
#define SpectralClass_H

#include <tango.h>
#include <SpectralInstrument.h>


/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass.h


namespace Spectral_ns
{
/*----- PROTECTED REGION ID(SpectralClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	SpectralClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute cooling class definition
class coolingAttrib: public Tango::Attr
{
public:
	coolingAttrib():Attr("cooling",
			Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~coolingAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Spectral *>(dev))->read_cooling(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Spectral *>(dev))->write_cooling(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Spectral *>(dev))->is_cooling_allowed(ty);}
};

//	Attribute ccdTemperature class definition
class ccdTemperatureAttrib: public Tango::Attr
{
public:
	ccdTemperatureAttrib():Attr("ccdTemperature",
			Tango::DEV_FLOAT, Tango::READ) {};
	~ccdTemperatureAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Spectral *>(dev))->read_ccdTemperature(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Spectral *>(dev))->is_ccdTemperature_allowed(ty);}
};

//	Attribute readoutSpeed class definition
class readoutSpeedAttrib: public Tango::Attr
{
public:
	readoutSpeedAttrib():Attr("readoutSpeed",
			Tango::DEV_ENUM, Tango::READ_WRITE) {};
	~readoutSpeedAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Spectral *>(dev))->read_readoutSpeed(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<Spectral *>(dev))->write_readoutSpeed(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Spectral *>(dev))->is_readoutSpeed_allowed(ty);}
	virtual bool same_type(const type_info &in_type) {return typeid(readoutSpeedEnum) == in_type;}
	virtual string get_enum_type() {return string("readoutSpeedEnum");}
};


/**
 *	The SpectralClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  SpectralClass : public Tango::DeviceClass
#else
class SpectralClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(SpectralClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	SpectralClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static SpectralClass *init(const char *);
		static SpectralClass *instance();
		~SpectralClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		SpectralClass(string &);
		static SpectralClass *_instance;
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

#endif   //	Spectral_H