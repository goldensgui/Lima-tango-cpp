static const char *ClassId    = "$Id:  $";
static const char *TagName    = "$Name:  $";
static const char *CvsPath    = "$Source:  $";
static const char *SvnPath    = "$HeadURL: $";
static const char *HttpServer = "http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/";
//+=============================================================================
//
// file :        LimaDetectorClass.cpp
//
// description : C++ source for the LimaDetectorClass. A singleton
//               class derived from DeviceClass. It implements the
//               command list and all properties and methods required
//               by the LimaDetector once per process.
//
// project :     TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
//
// $Log:  $
//
// copyleft :   European Synchrotron Radiation Facility
//              BP 220, Grenoble 38043
//              FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================


#include <tango.h>

#include <LimaDetector.h>
#include <LimaDetectorClass.h>


//+----------------------------------------------------------------------------
/**
 *	Create LimaDetectorClass singleton and return it in a C function for Python usage
 */
//+----------------------------------------------------------------------------
extern "C" {
#ifdef WIN32

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_LimaDetector_class(const char *name) {
		return LimaDetector_ns::LimaDetectorClass::init(name);
	}
}


namespace LimaDetector_ns
{
//+----------------------------------------------------------------------------
//
// method : 		StartCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *StartCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "StartCmd::execute(): arrived" << endl;

	((static_cast<LimaDetector *>(device))->start());
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		SetROICmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *SetROICmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "SetROICmd::execute(): arrived" << endl;

	const Tango::DevVarLongArray	*argin;
	extract(in_any, argin);

	((static_cast<LimaDetector *>(device))->set_roi(argin));
	return new CORBA::Any();
}



//+----------------------------------------------------------------------------
//
// method : 		StopCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *StopCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "StopCmd::execute(): arrived" << endl;

	((static_cast<LimaDetector *>(device))->stop());
	return new CORBA::Any();
}

//+----------------------------------------------------------------------------
//
// method : 		SnapCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *SnapCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "SnapCmd::execute(): arrived" << endl;

	((static_cast<LimaDetector *>(device))->snap());
	return new CORBA::Any();
}



//+----------------------------------------------------------------------------
//
// method : 		DeleteRemainingFilesCmd::execute()
// 
// description : 	method to trigger the execution of the command.
//                PLEASE DO NOT MODIFY this method core without pogo   
//
// in : - device : The device on which the command must be executed
//		- in_any : The command input data
//
// returns : The command output data (packed in the Any object)
//
//-----------------------------------------------------------------------------
CORBA::Any *DeleteRemainingFilesCmd::execute(Tango::DeviceImpl *device,const CORBA::Any &in_any)
{

	cout2 << "DeleteRemainingFilesCmd::execute(): arrived" << endl;

	((static_cast<LimaDetector *>(device))->delete_remaining_files());
	return new CORBA::Any();
}


//
//----------------------------------------------------------------
//	Initialize pointer for singleton pattern
//----------------------------------------------------------------
//
LimaDetectorClass *LimaDetectorClass::_instance = NULL;

//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::LimaDetectorClass(string &s)
// 
// description : 	constructor for the LimaDetectorClass
//
// in : - s : The class name
//
//-----------------------------------------------------------------------------
LimaDetectorClass::LimaDetectorClass(string &s):DeviceClass(s)
{

	cout2 << "Entering LimaDetectorClass constructor" << endl;
	set_default_property();
	get_class_property();
	write_class_property();
	
	cout2 << "Leaving LimaDetectorClass constructor" << endl;

}
//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::~LimaDetectorClass()
// 
// description : 	destructor for the LimaDetectorClass
//
//-----------------------------------------------------------------------------
LimaDetectorClass::~LimaDetectorClass()
{
	_instance = NULL;
}

//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::instance
// 
// description : 	Create the object if not already done. Otherwise, just
//			return a pointer to the object
//
// in : - name : The class name
//
//-----------------------------------------------------------------------------
LimaDetectorClass *LimaDetectorClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new LimaDetectorClass(s);
		}
		catch (bad_alloc)
		{
			throw;
		}		
	}		
	return _instance;
}

LimaDetectorClass *LimaDetectorClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}

//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::command_factory
// 
// description : 	Create the command object(s) and store them in the 
//			command list
//
//-----------------------------------------------------------------------------
void LimaDetectorClass::command_factory()
{
	command_list.push_back(new DeleteRemainingFilesCmd("DeleteRemainingFiles",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));
	command_list.push_back(new SnapCmd("Snap",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));
	command_list.push_back(new StartCmd("Start",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));
	command_list.push_back(new StopCmd("Stop",
		Tango::DEV_VOID, Tango::DEV_VOID,
		"",
		"",
		Tango::OPERATOR));
	command_list.push_back(new SetROICmd("SetROI",
		Tango::DEVVAR_LONGARRAY, Tango::DEV_VOID,
		"[origin_x, origin_y, width, height]",
		"",
		Tango::OPERATOR));

	//	add polling if any
	for (unsigned int i=0 ; i<command_list.size(); i++)
	{
	}
}

//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::get_class_property
// 
// description : 	Get the class property for specified name.
//
// in :		string	name : The property name
//
//+----------------------------------------------------------------------------
Tango::DbDatum LimaDetectorClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::get_default_device_property()
// 
// description : 	Return the default value for device property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum LimaDetectorClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::get_default_class_property()
// 
// description : 	Return the default value for class property.
//
//-----------------------------------------------------------------------------
Tango::DbDatum LimaDetectorClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}
//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::device_factory
// 
// description : 	Create the device object(s) and store them in the 
//			device list
//
// in :		Tango::DevVarStringArray *devlist_ptr : The device name list
//
//-----------------------------------------------------------------------------
void LimaDetectorClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{

	//	Create all devices.(Automatic code generation)
	//-------------------------------------------------------------
	for (unsigned long i=0 ; i < devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
						
		// Create devices and add it into the device list
		//----------------------------------------------------
		device_list.push_back(new LimaDetector(this, (*devlist_ptr)[i]));							 

		// Export device to the outside world
		// Check before if database used.
		//---------------------------------------------
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(device_list.back());
		else
			export_device(device_list.back(), (*devlist_ptr)[i]);
	}
	//	End of Automatic code generation
	//-------------------------------------------------------------

}
//+----------------------------------------------------------------------------
//	Method: LimaDetectorClass::attribute_factory(vector<Tango::Attr *> &att_list)
//-----------------------------------------------------------------------------
void LimaDetectorClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	//	Attribute : detectorDescription
	detectorDescriptionAttrib	*detector_description = new detectorDescriptionAttrib();
	Tango::UserDefaultAttrProp	detector_description_prop;
	detector_description_prop.set_description("Return a simple user text intented to identify the Detector.");
	detector_description->set_default_properties(detector_description_prop);
	att_list.push_back(detector_description);

	//	Attribute : detectorType
	detectorTypeAttrib	*detector_type = new detectorTypeAttrib();
	Tango::UserDefaultAttrProp	detector_type_prop;
	detector_type_prop.set_description("Return the type of used Detector.");
	detector_type->set_default_properties(detector_type_prop);
	att_list.push_back(detector_type);

	//	Attribute : detectorModel
	detectorModelAttrib	*detector_model = new detectorModelAttrib();
	Tango::UserDefaultAttrProp	detector_model_prop;
	detector_model_prop.set_description("Return the model of used Detector.");
	detector_model->set_default_properties(detector_model_prop);
	att_list.push_back(detector_model);

	//	Attribute : sensorWidth
	sensorWidthAttrib	*sensor_width = new sensorWidthAttrib();
	Tango::UserDefaultAttrProp	sensor_width_prop;
	sensor_width_prop.set_unit(" ");
	sensor_width_prop.set_standard_unit(" ");
	sensor_width_prop.set_display_unit(" ");
	sensor_width_prop.set_format("%6d");
	sensor_width_prop.set_description("Detector width in pixels.");
	sensor_width->set_default_properties(sensor_width_prop);
	att_list.push_back(sensor_width);

	//	Attribute : sensorHeight
	sensorHeightAttrib	*sensor_height = new sensorHeightAttrib();
	Tango::UserDefaultAttrProp	sensor_height_prop;
	sensor_height_prop.set_unit(" ");
	sensor_height_prop.set_standard_unit(" ");
	sensor_height_prop.set_display_unit(" ");
	sensor_height_prop.set_format("%6d");
	sensor_height_prop.set_description("Detector height in pixels.");
	sensor_height->set_default_properties(sensor_height_prop);
	att_list.push_back(sensor_height);

	//	Attribute : depth
	depthAttrib	*depth = new depthAttrib();
	Tango::UserDefaultAttrProp	depth_prop;
	depth_prop.set_unit(" ");
	depth_prop.set_standard_unit(" ");
	depth_prop.set_display_unit(" ");
	depth_prop.set_format("%6d");
	depth_prop.set_description("Pixel size in bits. (8, 16, 32)");
	depth->set_default_properties(depth_prop);
	att_list.push_back(depth);

	//	Attribute : triggerMode
	triggerModeAttrib	*trigger_mode = new triggerModeAttrib();
	Tango::UserDefaultAttrProp	trigger_mode_prop;
	trigger_mode_prop.set_unit(" ");
	trigger_mode_prop.set_description("Available Trigger Modes :<cr>\n- OFF<cr>\n- TIMED<cr>\n- WIDTH<cr>");
	trigger_mode->set_default_properties(trigger_mode_prop);
	trigger_mode->set_memorized();
	trigger_mode->set_memorized_init(true);
	att_list.push_back(trigger_mode);

	//	Attribute : acquisitionMode
	acquisitionModeAttrib	*acquisition_mode = new acquisitionModeAttrib();
	Tango::UserDefaultAttrProp	acquisition_mode_prop;
	acquisition_mode_prop.set_unit(" ");
	acquisition_mode_prop.set_description("Available Acquisition Modes :<cr>\n- SINGLE<cr>\n- ACCUMULATION<cr>\n");
	acquisition_mode->set_default_properties(acquisition_mode_prop);
	acquisition_mode->set_memorized();
	acquisition_mode->set_memorized_init(true);
	att_list.push_back(acquisition_mode);

	//	Attribute : exposureTime
	exposureTimeAttrib	*exposure_time = new exposureTimeAttrib();
	Tango::UserDefaultAttrProp	exposure_time_prop;
	exposure_time_prop.set_unit("ms");
	exposure_time_prop.set_standard_unit("ms");
	exposure_time_prop.set_display_unit("ms");
	exposure_time_prop.set_format("%7.2f");
	exposure_time_prop.set_description("Set/Get exposure time (in ms)");
	exposure_time->set_default_properties(exposure_time_prop);
	exposure_time->set_memorized();
	exposure_time->set_memorized_init(true);
	att_list.push_back(exposure_time);

	//	Attribute : exposureAccTime
	exposureAccTimeAttrib	*exposure_acc_time = new exposureAccTimeAttrib();
	Tango::UserDefaultAttrProp	exposure_acc_time_prop;
	exposure_acc_time_prop.set_unit("ms");
	exposure_acc_time_prop.set_standard_unit("ms");
	exposure_acc_time_prop.set_display_unit("ms");
	exposure_acc_time_prop.set_format("%7.2f");
	exposure_acc_time->set_default_properties(exposure_acc_time_prop);
	exposure_acc_time->set_memorized();
	exposure_acc_time->set_memorized_init(true);
	att_list.push_back(exposure_acc_time);

	//	Attribute : nbFrames
	nbFramesAttrib	*nb_frames = new nbFramesAttrib();
	Tango::UserDefaultAttrProp	nb_frames_prop;
	nb_frames_prop.set_unit(" ");
	nb_frames_prop.set_standard_unit(" ");
	nb_frames_prop.set_display_unit(" ");
	nb_frames_prop.set_format("%6d");
	nb_frames_prop.set_description("The number of frames to acquire.");
	nb_frames->set_default_properties(nb_frames_prop);
	nb_frames->set_memorized();
	nb_frames->set_memorized_init(true);
	att_list.push_back(nb_frames);

	//	Attribute : currentFrame
	currentFrameAttrib	*current_frame = new currentFrameAttrib();
	Tango::UserDefaultAttrProp	current_frame_prop;
	current_frame_prop.set_unit(" ");
	current_frame_prop.set_standard_unit(" ");
	current_frame_prop.set_display_unit(" ");
	current_frame_prop.set_format("%6d");
	current_frame_prop.set_description("Display the current frame number.");
	current_frame->set_default_properties(current_frame_prop);
	att_list.push_back(current_frame);

	//	Attribute : fileGeneration
	fileGenerationAttrib	*file_generation = new fileGenerationAttrib();
	Tango::UserDefaultAttrProp	file_generation_prop;
	file_generation_prop.set_description("Allow to save grabbed frames into a file on disk.<cr>\nAvailable formats for the file are:  EDF, RAW, NXS<cr>\nThe format is fixed in FileFormat property.<cr>");
	file_generation->set_default_properties(file_generation_prop);
	file_generation->set_disp_level(Tango::EXPERT);
	file_generation->set_memorized();
	file_generation->set_memorized_init(true);
	att_list.push_back(file_generation);

	//	End of Automatic code generation
	//-------------------------------------------------------------
}

//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::get_class_property()
// 
// description : 	Read the class properties from database.
//
//-----------------------------------------------------------------------------
void LimaDetectorClass::get_class_property()
{
	//	Initialize your default values here (if not done with  POGO).
	//------------------------------------------------------------------

	//	Read class properties from database.(Automatic code generation)
	//------------------------------------------------------------------

	//	Call database and extract values
	//--------------------------------------------
	if (Tango::Util::instance()->_UseDb==true)
		get_db_class()->get_property(cl_prop);
	Tango::DbDatum	def_prop;
	int	i = -1;


	//	End of Automatic code generation
	//------------------------------------------------------------------

}

//+----------------------------------------------------------------------------
//
// method : 	LimaDetectorClass::set_default_property
// 
// description: Set default property (class and device) for wizard.
//              For each property, add to wizard property name and description
//              If default value has been set, add it to wizard property and
//              store it in a DbDatum.
//
//-----------------------------------------------------------------------------
void LimaDetectorClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;

	vector<string>	vect_data;
	//	Set Default Class Properties
	//	Set Default Device Properties
	prop_name = "DetectorDescription";
	prop_desc = "A simple user free text intented to identify the Detector.";
	prop_def  = "This is my Simulator";
	vect_data.clear();
	vect_data.push_back("This is my Simulator");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "DetectorIP";
	prop_desc = "Ip Address of the Detector if necessary, NA otherwise.";
	prop_def  = "0.0.0.0";
	vect_data.clear();
	vect_data.push_back("0.0.0.0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "DetectorPort";
	prop_desc = "Socket Port of the Detector if necessary, NA otherwise.";
	prop_def  = "-1";
	vect_data.clear();
	vect_data.push_back("-1");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "DetectorType";
	prop_desc = "Define the type of the connected Detector .<BR>\nAvailables types :<BR>\nBasler<BR>\nSimulator<BR>\nXpadPixelDetector<BR>\nPilatus<BR>\n\n";
	prop_def  = "Simulator";
	vect_data.clear();
	vect_data.push_back("Simulator");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "DetectorPixelFormat";
	prop_desc = "Define the pixel depth of the detecor (8, 16, 32).";
	prop_def  = "16";
	vect_data.clear();
	vect_data.push_back("16");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "FileFormat";
	prop_desc = "Define the format of image files :<BR>\n- EDF<BR>\n- NXS<BR>\n- RAW<BR>\n";
	prop_def  = "NXS";
	vect_data.clear();
	vect_data.push_back("NXS");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "FilePrefix";
	prop_desc = "Define the prefix used for the image files name.";
	prop_def  = "Image";
	vect_data.clear();
	vect_data.push_back("Image");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "FileIndexFormat";
	prop_desc = "Define the format of the index used for image files names.";
	prop_def  = "%06d";
	vect_data.clear();
	vect_data.push_back("%06d");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "FileNbFrames";
	prop_desc = "Define the number of frames per file.";
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

	prop_name = "FileTemporaryPath";
	prop_desc = "Define the root path for temporary generated files.";
	prop_def  = ".";
	vect_data.clear();
	vect_data.push_back(".");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "FileTargetPath";
	prop_desc = "Define the Path where Files will be generated, only when savingFile is checked.\n\n";
	prop_def  = "./data";
	vect_data.clear();
	vect_data.push_back("./data");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "DebugModules";
	prop_desc = "Define Lima Modules for which we need some traces in the console.<BR>\nAvailables values :<BR>\nNone<BR>\nHardware<BR>\nControl<BR>\nCommon<BR>\nCamera<BR>";
	prop_def  = "Hardware\nControl\nCommon\nCamera";
	vect_data.clear();
	vect_data.push_back("Hardware");
	vect_data.push_back("Control");
	vect_data.push_back("Common");
	vect_data.push_back("Camera");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);

	prop_name = "DebugLevels";
	prop_desc = "Define Lima verbose level of traces in the console.<BR>\nAvailables values :<BR>\nFatal<BR>\nError<BR>\nWarning<BR>\nTrace<BR>\nFunct<BR>\nParam<BR>\nReturn<BR>\nAlways<BR>";
	prop_def  = "Fatal\nError\nWarning";
	vect_data.clear();
	vect_data.push_back("Fatal");
	vect_data.push_back("Error");
	vect_data.push_back("Warning");
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
//+----------------------------------------------------------------------------
//
// method : 		LimaDetectorClass::write_class_property
// 
// description : 	Set class description as property in database
//
//-----------------------------------------------------------------------------
void LimaDetectorClass::write_class_property()
{
	//	First time, check if database used
	//--------------------------------------------
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("Generic device intented to manage Detector via Lima Framework");
	description << str_desc;
	data.push_back(description);
		
	//	put cvs or svn location
	string	filename(classname);
	filename += "Class.cpp";
	
	// Create a string with the class ID to
	// get the string into the binary
	string	class_id(ClassId);
	
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
	inheritance.push_back("Device_4Impl");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	//--------------------------------------------
	get_db_class()->put_property(data);
}

}	// namespace
