chars<-function(str){
  cs<-list(cs=str2chars(str))
  class(cs)<-"chars"
  cs
}


"[.chars"<-function(x,i){
}