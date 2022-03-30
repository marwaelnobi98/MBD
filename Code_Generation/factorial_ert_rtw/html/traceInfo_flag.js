function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["factorial.c:44c25"]=1;
    this.traceFlag["factorial.c:49c30"]=1;
    this.traceFlag["factorial.c:49c45"]=1;
    this.traceFlag["factorial.c:54c55"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["factorial.c:40"]=1;
    this.lineTraceFlag["factorial.c:43"]=1;
    this.lineTraceFlag["factorial.c:44"]=1;
    this.lineTraceFlag["factorial.c:45"]=1;
    this.lineTraceFlag["factorial.c:49"]=1;
    this.lineTraceFlag["factorial.c:54"]=1;
    this.lineTraceFlag["factorial.c:59"]=1;
    this.lineTraceFlag["factorial.h:36"]=1;
    this.lineTraceFlag["factorial.h:41"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
