# Microsoft Developer Studio Project File - Name="uzip" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 5.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=uzip - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "uzip.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "uzip.mak" CFG="uzip - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "uzip - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "uzip - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe

!IF  "$(CFG)" == "uzip - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "." /I "./win32" /I ".." /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "DLL" /YX /FD /c
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ELSEIF  "$(CFG)" == "uzip - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /Z7 /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /MDd /W3 /GX /Z7 /Od /I "." /I "./win32" /I ".." /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "DLL" /YX /FD /c
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ENDIF 

# Begin Target

# Name "uzip - Win32 Release"
# Name "uzip - Win32 Debug"
# Begin Source File

SOURCE=.\api.c
# End Source File
# Begin Source File

SOURCE=.\crc32.c
# End Source File
# Begin Source File

SOURCE=.\crctab.c
# End Source File
# Begin Source File

SOURCE=.\crypt.c
# End Source File
# Begin Source File

SOURCE=.\envargs.c
# End Source File
# Begin Source File

SOURCE=.\explode.c
# End Source File
# Begin Source File

SOURCE=.\extract.c
# End Source File
# Begin Source File

SOURCE=.\fileio.c
# End Source File
# Begin Source File

SOURCE=.\globals.c
# End Source File
# Begin Source File

SOURCE=.\inflate.c
# End Source File
# Begin Source File

SOURCE=.\list.c
# End Source File
# Begin Source File

SOURCE=.\match.c
# End Source File
# Begin Source File

SOURCE=.\win32\nt.c
# End Source File
# Begin Source File

SOURCE=.\process.c
# End Source File
# Begin Source File

SOURCE=.\ttyio.c
# End Source File
# Begin Source File

SOURCE=.\unreduce.c
# End Source File
# Begin Source File

SOURCE=.\unzip.c
# End Source File
# Begin Source File

SOURCE=.\win32\win32.c
# End Source File
# Begin Source File

SOURCE=.\zipinfo.c
# End Source File
# End Target
# End Project
