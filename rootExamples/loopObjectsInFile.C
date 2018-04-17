/**
 * Example of how to loop all objects in a given file, 
 * i.e. to plot all histograms in a file, etc.
 */

void loopObjectsInFile(){

  /** file passed from command line */
  if (!_file0->IsOpen()) {
    printf("<E> Cannot open input file") ;
    exit(1) ;
  }

  TList* list = _file0->GetListOfKeys() ;
  if (!list) { printf("<E> No keys found in file\n") ; exit(1) ; }
  TObject* obj ;

  for (int i = 0; i < list->GetSize(); i++){
  
    TKey* key = (TKey*)list->At(i) ;
    obj = key->ReadObj();
    
    /** get objects from file */
    if (    (strcmp(obj->IsA()->GetName(),"TProfile")!=0)
        && (!obj->InheritsFrom("TH2"))
        && (!obj->InheritsFrom("TH1")) 
       ) {
      printf("<W> Object %s is not 1D or 2D histogram : "
          "will not be converted\n",obj->GetName()) ;
      continue;
    }
    printf("Histo name:%s title:%s\n",obj->GetName(),obj->GetTitle());

    TH1D* h = (TH1D*)_file0->Get(obj->GetName());

    /** Do whatever with object */

  }
}
