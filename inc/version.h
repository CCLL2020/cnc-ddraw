#ifndef VERSION_H
#define VERSION_H

#define str(s) #s
#define ver_str(a,b,c,d) str(a) "." str(b) "." str(c) "." str(d)

#define VERSION_MAJOR    5
#define VERSION_MINOR    8
#define VERSION_BUILD    0
#define VERSION_REVISION 2

#define VERSION          VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD, VERSION_REVISION
#define VERSION_STRING   ver_str(VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD, VERSION_REVISION)


#endif
