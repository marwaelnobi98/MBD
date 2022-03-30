function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "factorial"};
	this.sidHashMap["factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "factorial:2"};
	this.sidHashMap["factorial:2"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "factorial:1"};
	this.sidHashMap["factorial:1"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/For Iterator Subsystem"] = {sid: "factorial:2"};
	this.sidHashMap["factorial:2"] = {rtwname: "<Root>/For Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "factorial:6"};
	this.sidHashMap["factorial:6"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>/Input"] = {sid: "factorial:3"};
	this.sidHashMap["factorial:3"] = {rtwname: "<S1>/Input"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "factorial:4"};
	this.sidHashMap["factorial:4"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "factorial:18"};
	this.sidHashMap["factorial:18"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "factorial:19"};
	this.sidHashMap["factorial:19"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Output"] = {sid: "factorial:5"};
	this.sidHashMap["factorial:5"] = {rtwname: "<S1>/Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
