//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any macOS
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include "SimpleSFML3AppWindow.h"
//#include "DefaultSFMLAppWindow.h"
int main()
{
//   return DefaultSFMLAppWindow();
    return simpleSFML3AppWindow();
}
