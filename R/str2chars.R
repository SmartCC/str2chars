str2chars<-function(str){
  n<-nchar(str)
  #res<-.Call("cstr2chars",str,n)
  #res
  sapply(1:nchar(str),function(i) substr(str,i,i))
}