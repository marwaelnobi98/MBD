function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Calculator_MBD"};
	this.sidHashMap["Calculator_MBD"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Calculator_MBD:1"};
	this.sidHashMap["Calculator_MBD:1"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "Calculator_MBD:2"};
	this.sidHashMap["Calculator_MBD:2"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "Calculator_MBD:3"};
	this.sidHashMap["Calculator_MBD:3"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "Calculator_MBD:6"};
	this.sidHashMap["Calculator_MBD:6"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "Calculator_MBD:5"};
	this.sidHashMap["Calculator_MBD:5"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "Calculator_MBD:4"};
	this.sidHashMap["Calculator_MBD:4"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Calculator_MBD:7"};
	this.sidHashMap["Calculator_MBD:7"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "Calculator_MBD:8"};
	this.sidHashMap["Calculator_MBD:8"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<Root>/Output2"] = {sid: "Calculator_MBD:9"};
	this.sidHashMap["Calculator_MBD:9"] = {rtwname: "<Root>/Output2"};
	this.rtwnameHashMap["<Root>/Output3"] = {sid: "Calculator_MBD:10"};
	this.sidHashMap["Calculator_MBD:10"] = {rtwname: "<Root>/Output3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
