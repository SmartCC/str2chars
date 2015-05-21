str2chars<-function(str){
  n<-nchar(str)
  res<-.Call("cstr2chars",str,n)
  res
}