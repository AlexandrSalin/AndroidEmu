//============================================================================
//
//   SSSS    tt          lll  lll       
//  SS  SS   tt           ll   ll        
//  SS     tttttt  eeee   ll   ll   aaaa 
//   SSSS    tt   ee  ee  ll   ll      aa
//      SS   tt   eeeeee  ll   ll   aaaaa  --  "An Atari 2600 VCS Emulator"
//  SS  SS   tt   ee      ll   ll  aa  aa
//   SSSS     ttt  eeeee llll llll  aaaaa
//
// Copyright (c) 1995-2010 by Bradford W. Mott, Stephen Anthony
// and the Stella Team
//
// See the file "License.txt" for information on usage and redistribution of
// this file, and for a DISCLAIMER OF ALL WARRANTIES.
//
// $Id: Launcher.hxx 2075 2010-07-22 15:41:46Z stephena $
//============================================================================

#ifndef LAUNCHER_HXX
#define LAUNCHER_HXX

class Properties;
class OSystem;

#include "DialogContainer.hxx"
#include "FrameBuffer.hxx"

/**
  The base dialog for the ROM launcher in Stella.

  @author  Stephen Anthony
  @version $Id: Launcher.hxx 2075 2010-07-22 15:41:46Z stephena $
*/
class Launcher : public DialogContainer
{
  public:
    /**
      Create a new menu stack
    */
    Launcher(OSystem* osystem);

    /**
      Destructor
    */
    virtual ~Launcher();

    /**
      Initialize the video subsystem wrt this class.
    */
    FBInitStatus initializeVideo();

    /**
      Wrapper for LauncherDialog::selectedRomMD5() method.
    */
    string selectedRomMD5();

  private:
    // The width and height of this dialog
    uInt32 myWidth;
    uInt32 myHeight;
};

#endif
