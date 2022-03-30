function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Task_6_factorialStateFlow"};
	this.sidHashMap["Task_6_factorialStateFlow"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Task_6_factorialStateFlow:1"};
	this.sidHashMap["Task_6_factorialStateFlow:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Task_6_factorialStateFlow:2"};
	this.sidHashMap["Task_6_factorialStateFlow:2"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Task_6_factorialStateFlow:1"};
	this.sidHashMap["Task_6_factorialStateFlow:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Task_6_factorialStateFlow:3"};
	this.sidHashMap["Task_6_factorialStateFlow:3"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "Task_6_factorialStateFlow:1:6"};
	this.sidHashMap["Task_6_factorialStateFlow:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "Task_6_factorialStateFlow:1:7"};
	this.sidHashMap["Task_6_factorialStateFlow:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "Task_6_factorialStateFlow:1:8"};
	this.sidHashMap["Task_6_factorialStateFlow:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "Task_6_factorialStateFlow:1:9"};
	this.sidHashMap["Task_6_factorialStateFlow:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "Task_6_factorialStateFlow:1:10"};
	this.sidHashMap["Task_6_factorialStateFlow:1:10"] = {rtwname: "<S1>:10"};
	this.rtwnameHashMap["<S1>:11"] = {sid: "Task_6_factorialStateFlow:1:11"};
	this.sidHashMap["Task_6_factorialStateFlow:1:11"] = {rtwname: "<S1>:11"};
	this.rtwnameHashMap["<S1>:12"] = {sid: "Task_6_factorialStateFlow:1:12"};
	this.sidHashMap["Task_6_factorialStateFlow:1:12"] = {rtwname: "<S1>:12"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
