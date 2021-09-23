/*----- PROTECTED REGION ID(SpectralInstrumentClass.cpp) ENABLED START -----*/
static const char *RcsId      = "$Id:  $";
static const char *TagName    = "$Name:  $";
static const char *CvsPath    = "$Source:  $";
static const char *SvnPath    = "$HeadURL:  $";
static const char *HttpServer = "http://www.esrf.eu/computing/cs/tango/tango_doc/ds_doc/";
//=============================================================================
//
// file :        SpectralInstrumentClass.cpp
//
// description : C++ source for the SpectralInstrumentClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the Spectral Instrument once per process.
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


#include <SpectralInstrumentClass.h>

/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass.cpp

//-------------------------------------------------------------------
/**
 *	Create SpectralInstrumentClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_SpectralInstrument_class(const char *name) {
		return SpectralInstrument_ns::SpectralInstrumentClass::init(name);
	}
}

namespace SpectralInstrument_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
SpectralInstrumentClass *SpectralInstrumentClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		SpectralInstrumentClass::SpectralInstrumentClass(string &s)
 * description : 	constructor for the SpectralInstrumentClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
SpectralInstrumentClass::SpectralInstrumentClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering SpectralInstrumentClass constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(SpectralInstrumentClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::constructor

	cout2 << "Leaving SpectralInstrumentClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		SpectralInstrumentClass::~SpectralInstrumentClass()
 * description : 	destructor for the SpectralInstrumentClass
 */
//--------------------------------------------------------
SpectralInstrumentClass::~SpectralInstrumentClass()
{
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		SpectralInstrumentClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
SpectralInstrumentClass *SpectralInstrumentClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new SpectralInstrumentClass(s);
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
 * method : 		SpectralInstrumentClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
SpectralInstrumentClass *SpectralInstrumentClass::instance()
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
 *	Method      : SpectralInstrumentClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum SpectralInstrumentClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : SpectralInstrumentClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum SpectralInstrumentClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : SpectralInstrumentClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum SpectralInstrumentClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : SpectralInstrumentClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void SpectralInstrumentClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "ConnectionAddress";
	prop_desc = "Only an expert User could change this property.<br>\nServer name or IP address of the SI Image SGL II software.<BR>";
	prop_def  = "127.0.0.1";
	vect_data.clear();
	vect_data.push_back("127.0.0.1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "ConnectionPort";
	prop_desc = "Only an expert User could change this property.<br>\nTCP/IP port of the SI Image SGL II software.<BR>";
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
	prop_name = "ImagePacketPixelsNb";
	prop_desc = "Only an expert User could change this property.<br>\nNumber of pixels sent into a image part TCP/IP packet.<BR>";
	prop_def  = "512";
	vect_data.clear();
	vect_data.push_back("512");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "ImagePacketDelayMicroSec";
	prop_desc = "Only an expert User could change this property.<br>\nDelay between the sending of two image part TCP/IP packets (in micro-seconds).<BR>";
	prop_def  = "300";
	vect_data.clear();
	vect_data.push_back("300");
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
 *	Method      : SpectralInstrumentClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void SpectralInstrumentClass::write_class_property()
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
	string	str_title("Spectral Instrument detector TANGO specific device.");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("Device for detectors from Spectral Instruments. ");
	description << str_desc;
	data.push_back(description);

	//	put cvs or svn location
	string	filename("SpectralInstrument");
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
 *	Method      : SpectralInstrumentClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void SpectralInstrumentClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new SpectralInstrument(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		SpectralInstrument *dev = static_cast<SpectralInstrument *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(SpectralInstrumentClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : SpectralInstrumentClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void SpectralInstrumentClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::attribute_factory_before
	//	Attribute : cooling
	coolingAttrib	*cooling = new coolingAttrib();
	Tango::UserDefaultAttrProp	cooling_prop;
	cooling_prop.set_description("Turns the CCD cooling On/Off");
	//	label	not set for cooling
	//	unit	not set for cooling
	//	standard_unit	not set for cooling
	//	display_unit	not set for cooling
	//	format	not set for cooling
	//	max_value	not set for cooling
	//	min_value	not set for cooling
	//	max_alarm	not set for cooling
	//	min_alarm	not set for cooling
	//	max_warning	not set for cooling
	//	min_warning	not set for cooling
	//	delta_t	not set for cooling
	//	delta_val	not set for cooling
	
	cooling->set_default_properties(cooling_prop);
	//	Not Polled
	cooling->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(cooling);

	//	Attribute : ccdTemperature
	ccdTemperatureAttrib	*ccdtemperature = new ccdTemperatureAttrib();
	Tango::UserDefaultAttrProp	ccdtemperature_prop;
	ccdtemperature_prop.set_description("Camera temperature status (??C)");
	//	label	not set for ccdTemperature
	ccdtemperature_prop.set_unit("??C");
	//	standard_unit	not set for ccdTemperature
	//	display_unit	not set for ccdTemperature
	//	format	not set for ccdTemperature
	//	max_value	not set for ccdTemperature
	//	min_value	not set for ccdTemperature
	//	max_alarm	not set for ccdTemperature
	//	min_alarm	not set for ccdTemperature
	//	max_warning	not set for ccdTemperature
	//	min_warning	not set for ccdTemperature
	//	delta_t	not set for ccdTemperature
	//	delta_val	not set for ccdTemperature
	
	ccdtemperature->set_default_properties(ccdtemperature_prop);
	//	Not Polled
	ccdtemperature->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(ccdtemperature);

	//	Attribute : readoutSpeed
	readoutSpeedAttrib	*readoutspeed = new readoutSpeedAttrib();
	Tango::UserDefaultAttrProp	readoutspeed_prop;
	readoutspeed_prop.set_description("Readout Speed control is a convenient way to set the DSI Sample Time which is the parameter that controls the readout speed (1MHz, 690KHz)");
	//	label	not set for readoutSpeed
	//	unit	not set for readoutSpeed
	//	standard_unit	not set for readoutSpeed
	//	display_unit	not set for readoutSpeed
	//	format	not set for readoutSpeed
	//	max_value	not set for readoutSpeed
	//	min_value	not set for readoutSpeed
	//	max_alarm	not set for readoutSpeed
	//	min_alarm	not set for readoutSpeed
	//	max_warning	not set for readoutSpeed
	//	min_warning	not set for readoutSpeed
	//	delta_t	not set for readoutSpeed
	//	delta_val	not set for readoutSpeed
	
	{
		vector<string> labels;
		labels.push_back("1MHz");
		labels.push_back("690KHz");
		readoutspeed_prop.set_enum_labels(labels);
	}
	readoutspeed->set_default_properties(readoutspeed_prop);
	//	Not Polled
	readoutspeed->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(readoutspeed);

	//	Attribute : acqType
	acqTypeAttrib	*acqtype = new acqTypeAttrib();
	Tango::UserDefaultAttrProp	acqtype_prop;
	//	description	not set for acqType
	//	label	not set for acqType
	//	unit	not set for acqType
	//	standard_unit	not set for acqType
	//	display_unit	not set for acqType
	//	format	not set for acqType
	//	max_value	not set for acqType
	//	min_value	not set for acqType
	//	max_alarm	not set for acqType
	//	min_alarm	not set for acqType
	//	max_warning	not set for acqType
	//	min_warning	not set for acqType
	//	delta_t	not set for acqType
	//	delta_val	not set for acqType
	
	{
		vector<string> labels;
		labels.push_back("Light");
		labels.push_back("Dark");
		labels.push_back("Triggered");
		acqtype_prop.set_enum_labels(labels);
	}
	acqtype->set_default_properties(acqtype_prop);
	//	Not Polled
	acqtype->set_disp_level(Tango::OPERATOR);
	acqtype->set_memorized();
	acqtype->set_memorized_init(true);
	att_list.push_back(acqtype);


	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : SpectralInstrumentClass::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void SpectralInstrumentClass::pipe_factory()
{
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::pipe_factory_before
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : SpectralInstrumentClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void SpectralInstrumentClass::command_factory()
{
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::command_factory_before


	/*----- PROTECTED REGION ID(SpectralInstrumentClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		SpectralInstrumentClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void SpectralInstrumentClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(SpectralInstrumentClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		SpectralInstrumentClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void SpectralInstrumentClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		SpectralInstrument *dev = static_cast<SpectralInstrument *> (dev_impl);

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
	/*----- PROTECTED REGION ID(SpectralInstrumentClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : SpectralInstrumentClass::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *SpectralInstrumentClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(SpectralInstrumentClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	SpectralInstrumentClass::Additional Methods
} //	namespace
