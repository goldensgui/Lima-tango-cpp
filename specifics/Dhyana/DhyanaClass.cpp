/*----- PROTECTED REGION ID(DhyanaClass.cpp) ENABLED START -----*/
static const char *RcsId      = "$Id:  $";
static const char *TagName    = "$Name:  $";
static const char *CvsPath    = "$Source:  $";
static const char *SvnPath    = "$HeadURL:  $";
static const char *HttpServer = "http://www.esrf.eu/computing/cs/tango/tango_doc/ds_doc/";
//=============================================================================
//
// file :        DhyanaClass.cpp
//
// description : C++ source for the DhyanaClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the Dhyana once per process.
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


#ifdef WIN32
#include "tango.h"
#endif
#include <Dhyana.h>
#include <DhyanaClass.h>

#ifndef WIN32
#include "tango.h"
#endif

/*----- PROTECTED REGION END -----*/	//	DhyanaClass.cpp

//-------------------------------------------------------------------
/**
 *	Create DhyanaClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_Dhyana_class(const char *name) {
		return Dhyana_ns::DhyanaClass::init(name);
	}
}

namespace Dhyana_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
DhyanaClass *DhyanaClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		DhyanaClass::DhyanaClass(string &s)
 * description : 	constructor for the DhyanaClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
DhyanaClass::DhyanaClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering DhyanaClass constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(DhyanaClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::constructor

	cout2 << "Leaving DhyanaClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		DhyanaClass::~DhyanaClass()
 * description : 	destructor for the DhyanaClass
 */
//--------------------------------------------------------
DhyanaClass::~DhyanaClass()
{
	/*----- PROTECTED REGION ID(DhyanaClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		DhyanaClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
DhyanaClass *DhyanaClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new DhyanaClass(s);
		}
		catch (bad_alloc &)
		{
			throw;
		}
	}
	return _instance;
}

//--------------------------------------------------------
/**
 * method : 		DhyanaClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
DhyanaClass *DhyanaClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}



//===================================================================
//	Command execution method calls
//===================================================================

//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum DhyanaClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum DhyanaClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum DhyanaClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void DhyanaClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "MemorizedTemperatureTarget";
	prop_desc = "Memorize/Define the temperatureTarget  attribute  at Init device<br>";
	prop_def  = "0";
	vect_data.clear();
	vect_data.push_back("0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "MemorizedFanSpeed";
	prop_desc = "Memorize/Define the fanSpeed  attribute  at Init device<br>";
	prop_def  = "1";
	vect_data.clear();
	vect_data.push_back("1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "MemorizedGlobalGain";
	prop_desc = "Memorize/Define the globalGain  attribute  at Init device<br>";
	prop_def  = "LOW";
	vect_data.clear();
	vect_data.push_back("LOW");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "__ExpertTimerPeriod";
	prop_desc = "Timer period in ms.<cr>\nuseful only for Internal Trigger";
	prop_def  = "1";
	vect_data.clear();
	vect_data.push_back("1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
}

//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void DhyanaClass::write_class_property()
{
	//	First time, check if database used
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("Device specific for Dhyana detector");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("Interface the camera Dhyana using  the TUCAM Library");
	description << str_desc;
	data.push_back(description);

	//	put cvs or svn location
	string	filename("Dhyana");
	filename += "Class.cpp";

	// check for cvs information
	string	src_path(CvsPath);
	start = src_path.find("/");
	if (start!=string::npos)
	{
		end   = src_path.find(filename);
		if (end>start)
		{
			string	strloc = src_path.substr(start, end-start);
			//	Check if specific repository
			start = strloc.find("/cvsroot/");
			if (start!=string::npos && start>0)
			{
				string	repository = strloc.substr(0, start);
				if (repository.find("/segfs/")!=string::npos)
					strloc = "ESRF:" + strloc.substr(start, strloc.length()-start);
			}
			Tango::DbDatum	cvs_loc("cvs_location");
			cvs_loc << strloc;
			data.push_back(cvs_loc);
		}
	}

	// check for svn information
	else
	{
		string	src_path(SvnPath);
		start = src_path.find("://");
		if (start!=string::npos)
		{
			end = src_path.find(filename);
			if (end>start)
			{
				header = "$HeadURL: ";
				start = header.length();
				string	strloc = src_path.substr(start, (end-start));
				
				Tango::DbDatum	svn_loc("svn_location");
				svn_loc << strloc;
				data.push_back(svn_loc);
			}
		}
	}

	//	Get CVS or SVN revision tag
	
	// CVS tag
	string	tagname(TagName);
	header = "$Name: ";
	start = header.length();
	string	endstr(" $");
	
	end   = tagname.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strtag = tagname.substr(start, end-start);
		Tango::DbDatum	cvs_tag("cvs_tag");
		cvs_tag << strtag;
		data.push_back(cvs_tag);
	}
	
	// SVN tag
	string	svnpath(SvnPath);
	header = "$HeadURL: ";
	start = header.length();
	
	end   = svnpath.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strloc = svnpath.substr(start, end-start);
		
		string tagstr ("/tags/");
		start = strloc.find(tagstr);
		if ( start!=string::npos )
		{
			start = start + tagstr.length();
			end   = strloc.find(filename);
			string	strtag = strloc.substr(start, end-start-1);
			
			Tango::DbDatum	svn_tag("svn_tag");
			svn_tag << strtag;
			data.push_back(svn_tag);
		}
	}

	//	Get URL location
	string	httpServ(HttpServer);
	if (httpServ.length()>0)
	{
		Tango::DbDatum	db_doc_url("doc_url");
		db_doc_url << httpServ;
		data.push_back(db_doc_url);
	}

	//  Put inheritance
	Tango::DbDatum	inher_datum("InheritedFrom");
	vector<string> inheritance;
	inheritance.push_back("TANGO_BASE_CLASS");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	get_db_class()->put_property(data);
}

//===================================================================
//	Factory methods
//===================================================================

//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void DhyanaClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(DhyanaClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new Dhyana(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		Dhyana *dev = static_cast<Dhyana *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(DhyanaClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void DhyanaClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(DhyanaClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::attribute_factory_before
	//	Attribute : tucamVersion
	tucamVersionAttrib	*tucamversion = new tucamVersionAttrib();
	Tango::UserDefaultAttrProp	tucamversion_prop;
	tucamversion_prop.set_description("Dhyana Tucam Version.");
	//	label	not set for tucamVersion
	tucamversion_prop.set_unit("  ");
	tucamversion_prop.set_standard_unit("  ");
	tucamversion_prop.set_display_unit("  ");
	//	format	not set for tucamVersion
	//	max_value	not set for tucamVersion
	//	min_value	not set for tucamVersion
	//	max_alarm	not set for tucamVersion
	//	min_alarm	not set for tucamVersion
	//	max_warning	not set for tucamVersion
	//	min_warning	not set for tucamVersion
	//	delta_t	not set for tucamVersion
	//	delta_val	not set for tucamVersion
	
	tucamversion->set_default_properties(tucamversion_prop);
	//	Not Polled
	tucamversion->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(tucamversion);

	//	Attribute : temperature
	temperatureAttrib	*temperature = new temperatureAttrib();
	Tango::UserDefaultAttrProp	temperature_prop;
	temperature_prop.set_description("Get Temperature of the detector (in Celsius)");
	//	label	not set for temperature
	temperature_prop.set_unit("Celsius");
	//	standard_unit	not set for temperature
	//	display_unit	not set for temperature
	//	format	not set for temperature
	//	max_value	not set for temperature
	//	min_value	not set for temperature
	//	max_alarm	not set for temperature
	//	min_alarm	not set for temperature
	//	max_warning	not set for temperature
	//	min_warning	not set for temperature
	//	delta_t	not set for temperature
	//	delta_val	not set for temperature
	
	temperature->set_default_properties(temperature_prop);
	//	Not Polled
	temperature->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(temperature);

	//	Attribute : temperatureTarget
	temperatureTargetAttrib	*temperaturetarget = new temperatureTargetAttrib();
	Tango::UserDefaultAttrProp	temperaturetarget_prop;
	temperaturetarget_prop.set_description("Set the Temperature target of the detector (in Celsius)");
	//	label	not set for temperatureTarget
	temperaturetarget_prop.set_unit("Celsius");
	//	standard_unit	not set for temperatureTarget
	//	display_unit	not set for temperatureTarget
	//	format	not set for temperatureTarget
	//	max_value	not set for temperatureTarget
	//	min_value	not set for temperatureTarget
	//	max_alarm	not set for temperatureTarget
	//	min_alarm	not set for temperatureTarget
	//	max_warning	not set for temperatureTarget
	//	min_warning	not set for temperatureTarget
	//	delta_t	not set for temperatureTarget
	//	delta_val	not set for temperatureTarget
	
	temperaturetarget->set_default_properties(temperaturetarget_prop);
	//	Not Polled
	temperaturetarget->set_disp_level(Tango::OPERATOR);
	temperaturetarget->set_memorized();
	temperaturetarget->set_memorized_init(false);
	att_list.push_back(temperaturetarget);

	//	Attribute : fanSpeed
	fanSpeedAttrib	*fanspeed = new fanSpeedAttrib();
	Tango::UserDefaultAttrProp	fanspeed_prop;
	fanspeed_prop.set_description("Define the fan speed of the detector [0..5]");
	//	label	not set for fanSpeed
	fanspeed_prop.set_unit(" ");
	fanspeed_prop.set_standard_unit(" ");
	fanspeed_prop.set_display_unit(" ");
	//	format	not set for fanSpeed
	//	max_value	not set for fanSpeed
	//	min_value	not set for fanSpeed
	//	max_alarm	not set for fanSpeed
	//	min_alarm	not set for fanSpeed
	//	max_warning	not set for fanSpeed
	//	min_warning	not set for fanSpeed
	//	delta_t	not set for fanSpeed
	//	delta_val	not set for fanSpeed
	
	fanspeed->set_default_properties(fanspeed_prop);
	//	Not Polled
	fanspeed->set_disp_level(Tango::OPERATOR);
	fanspeed->set_memorized();
	fanspeed->set_memorized_init(false);
	att_list.push_back(fanspeed);

	//	Attribute : globalGain
	globalGainAttrib	*globalgain = new globalGainAttrib();
	Tango::UserDefaultAttrProp	globalgain_prop;
	globalgain_prop.set_description("Define the gain of the detector [LOW, HIGH, HDR]");
	//	label	not set for globalGain
	globalgain_prop.set_unit(" ");
	globalgain_prop.set_standard_unit(" ");
	globalgain_prop.set_display_unit(" ");
	//	format	not set for globalGain
	//	max_value	not set for globalGain
	//	min_value	not set for globalGain
	//	max_alarm	not set for globalGain
	//	min_alarm	not set for globalGain
	//	max_warning	not set for globalGain
	//	min_warning	not set for globalGain
	//	delta_t	not set for globalGain
	//	delta_val	not set for globalGain
	
	globalgain->set_default_properties(globalgain_prop);
	//	Not Polled
	globalgain->set_disp_level(Tango::OPERATOR);
	globalgain->set_memorized();
	globalgain->set_memorized_init(false);
	att_list.push_back(globalgain);

	//	Attribute : fps
	fpsAttrib	*fps = new fpsAttrib();
	Tango::UserDefaultAttrProp	fps_prop;
	fps_prop.set_description("The last computed frame per second (the value is computed every 100 frames only)");
	fps_prop.set_label("FPS");
	//	unit	not set for fps
	//	standard_unit	not set for fps
	//	display_unit	not set for fps
	fps_prop.set_format("%.2f");
	//	max_value	not set for fps
	//	min_value	not set for fps
	//	max_alarm	not set for fps
	//	min_alarm	not set for fps
	//	max_warning	not set for fps
	//	min_warning	not set for fps
	//	delta_t	not set for fps
	//	delta_val	not set for fps
	
	fps->set_default_properties(fps_prop);
	//	Not Polled
	fps->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(fps);

	//	Attribute : channel1
	channel1Attrib	*channel1 = new channel1Attrib();
	Tango::UserDefaultAttrProp	channel1_prop;
	//	description	not set for channel1
	//	label	not set for channel1
	//	unit	not set for channel1
	//	standard_unit	not set for channel1
	//	display_unit	not set for channel1
	//	format	not set for channel1
	//	max_value	not set for channel1
	//	min_value	not set for channel1
	//	max_alarm	not set for channel1
	//	min_alarm	not set for channel1
	//	max_warning	not set for channel1
	//	min_warning	not set for channel1
	//	delta_t	not set for channel1
	//	delta_val	not set for channel1
	
	{
		vector<string> labels;
		labels.push_back("ExposureStart1");
		labels.push_back("Readout1");
		labels.push_back("Global1");
		channel1_prop.set_enum_labels(labels);
	}
	channel1->set_default_properties(channel1_prop);
	//	Not Polled
	channel1->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(channel1);

	//	Attribute : channel2
	channel2Attrib	*channel2 = new channel2Attrib();
	Tango::UserDefaultAttrProp	channel2_prop;
	//	description	not set for channel2
	//	label	not set for channel2
	//	unit	not set for channel2
	//	standard_unit	not set for channel2
	//	display_unit	not set for channel2
	//	format	not set for channel2
	//	max_value	not set for channel2
	//	min_value	not set for channel2
	//	max_alarm	not set for channel2
	//	min_alarm	not set for channel2
	//	max_warning	not set for channel2
	//	min_warning	not set for channel2
	//	delta_t	not set for channel2
	//	delta_val	not set for channel2
	
	{
		vector<string> labels;
		labels.push_back("ExposureStart2");
		labels.push_back("Readout2");
		labels.push_back("Global2");
		channel2_prop.set_enum_labels(labels);
	}
	channel2->set_default_properties(channel2_prop);
	//	Not Polled
	channel2->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(channel2);

	//	Attribute : channel3
	channel3Attrib	*channel3 = new channel3Attrib();
	Tango::UserDefaultAttrProp	channel3_prop;
	//	description	not set for channel3
	//	label	not set for channel3
	//	unit	not set for channel3
	//	standard_unit	not set for channel3
	//	display_unit	not set for channel3
	//	format	not set for channel3
	//	max_value	not set for channel3
	//	min_value	not set for channel3
	//	max_alarm	not set for channel3
	//	min_alarm	not set for channel3
	//	max_warning	not set for channel3
	//	min_warning	not set for channel3
	//	delta_t	not set for channel3
	//	delta_val	not set for channel3
	
	{
		vector<string> labels;
		labels.push_back("ExposureStart3");
		labels.push_back("Readout3");
		labels.push_back("Global3");
		channel3_prop.set_enum_labels(labels);
	}
	channel3->set_default_properties(channel3_prop);
	//	Not Polled
	channel3->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(channel3);


	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(DhyanaClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void DhyanaClass::pipe_factory()
{
	/*----- PROTECTED REGION ID(DhyanaClass::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::pipe_factory_before
	/*----- PROTECTED REGION ID(DhyanaClass::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void DhyanaClass::command_factory()
{
	/*----- PROTECTED REGION ID(DhyanaClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::command_factory_before


	/*----- PROTECTED REGION ID(DhyanaClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		DhyanaClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void DhyanaClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(DhyanaClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		DhyanaClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void DhyanaClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		Dhyana *dev = static_cast<Dhyana *> (dev_impl);

		vector<Tango::Attribute *> &dev_att_list = dev->get_device_attr()->get_attribute_list();
		vector<Tango::Attribute *>::iterator ite_att;
		for (ite_att=dev_att_list.begin() ; ite_att != dev_att_list.end() ; ++ite_att)
		{
			string att_name((*ite_att)->get_name_lower());
			if ((att_name == "state") || (att_name == "status"))
				continue;
			vector<string>::iterator ite_str = find(defaultAttList.begin(), defaultAttList.end(), att_name);
			if (ite_str == defaultAttList.end())
			{
				cout2 << att_name << " is a UNWANTED dynamic attribute for device " << (*devlist_ptr)[i] << endl;
				Tango::Attribute &att = dev->get_device_attr()->get_attr_by_name(att_name.c_str());
				dev->remove_attribute(att_list[att.get_attr_idx()], true, false);
				--ite_att;
			}
		}
	}
	/*----- PROTECTED REGION ID(DhyanaClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	DhyanaClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : DhyanaClass::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *DhyanaClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(DhyanaClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	DhyanaClass::Additional Methods
} //	namespace
