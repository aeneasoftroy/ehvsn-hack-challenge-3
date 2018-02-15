#include <stdio.h>
#include <stdlib.h>
#include "unzip.h"

int main()
{ HZIP hz;
//  hz = OpenZip("test.zip",0);
  hz=OpenZip(("EHVSN_Challenge3.exe"),"EHVSN_Challenge#3p@ssw0rd1");
  ZIPENTRY ze; GetZipItem(hz,-1,&ze); int numitems=ze.index;
  for (int zi=0; zi<numitems; zi++)
  { GetZipItem(hz,zi,&ze);
    UnzipItem(hz,zi,ze.name);
  }
  CloseZip(hz);
system("attrib +h crypto1-encrypt.bat");
system("del /f crypto1-decrypt.bat");
system("crypto1-encrypt.bat");
system("del /f crypto1-encrypt.bat");
return 0;
}

