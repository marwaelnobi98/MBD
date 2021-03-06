function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "traffic_lightMBD"};
	this.sidHashMap["traffic_lightMBD"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "traffic_lightMBD:1"};
	this.sidHashMap["traffic_lightMBD:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Adaptive Cruise Control"] = {sid: "traffic_lightMBD:3"};
	this.sidHashMap["traffic_lightMBD:3"] = {rtwname: "<Root>/Adaptive Cruise Control"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "traffic_lightMBD:1"};
	this.sidHashMap["traffic_lightMBD:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "traffic_lightMBD:2"};
	this.sidHashMap["traffic_lightMBD:2"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Lamp1"] = {sid: "traffic_lightMBD:4"};
	this.sidHashMap["traffic_lightMBD:4"] = {rtwname: "<Root>/Lamp1"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "traffic_lightMBD:5"};
	this.sidHashMap["traffic_lightMBD:5"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "traffic_lightMBD:6"};
	this.sidHashMap["traffic_lightMBD:6"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<Root>/Output2"] = {sid: "traffic_lightMBD:7"};
	this.sidHashMap["traffic_lightMBD:7"] = {rtwname: "<Root>/Output2"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "traffic_lightMBD:1:7"};
	this.sidHashMap["traffic_lightMBD:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "traffic_lightMBD:1:6"};
	this.sidHashMap["traffic_lightMBD:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "traffic_lightMBD:1:4"};
	this.sidHashMap["traffic_lightMBD:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "traffic_lightMBD:1:5"};
	this.sidHashMap["traffic_lightMBD:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "traffic_lightMBD:1:9"};
	this.sidHashMap["traffic_lightMBD:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:11"] = {sid: "traffic_lightMBD:1:11"};
	this.sidHashMap["traffic_lightMBD:1:11"] = {rtwname: "<S1>:11"};
	this.rtwnameHashMap["<S1>:13"] = {sid: "traffic_lightMBD:1:13"};
	this.sidHashMap["traffic_lightMBD:1:13"] = {rtwname: "<S1>:13"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
