
class CfgLockBypass
{
	owner = 1; //Set to 0 to disable this build level and make them enter codes every time
	moderator = 1; //Set to 0 to disable this build level and make them enter codes every time
	buildRights = 1; //Set to 0 to disable this build level and make them enter codes every time
	doors = 1; //set to 0 to disable doors from being opened without a pin code
	storage = 1; //set to 0 to disable lockable storage from being opened without a pincode
};

//************
class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	
	ExileClient_object_lock_toggle = "customcode\client\ExileClient_object_lock_toggle.sqf";
	ExileServer_object_lock_network_lockToggle = "customcode\server\ExileServer_object_lock_network_lockToggle.sqf";
};