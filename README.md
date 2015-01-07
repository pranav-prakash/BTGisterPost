## BTGisterPost (modded) for XCode 5.\*  

Credits to original developer LogikBlitz.

His version of the plugin made for Xcode 5 did not seem to work correctly (posted all gists anonymously and occasionally crashed, for me at least) so I converted his original Xcode4 version of the project to use ARC and added the necessary DVTCompatibility UUIDs for Xcode 5. It seems to work fine on my machine. Results may vary.

I have not tested on Xcode 6 but assuming there haven't been too many changes it should work fine there also. Add the necessary DVTCompatibilityUUIDs to the info.plist file (run "defaults read /Applications/Xcode.app/Contents/Info DVTPlugInCompatibilityUUID" to find it).

## What is this (edit from original Readme file)\*  

A small plug-in for Xcode 5.\* that allows for posting of Gist's directly from Xcode.

### Getting started

I have attached a plugin binary in the releases page and that is probably the easiest version to get it. 

Alternatively, you can also build the plug-in directly from the source:
* Clone this repository.
* Open the project in Xcode 5+
* Build the solution -- the plug-in will automatically be installed to `~/Library/Application\ Support/Developer/Shared/Xcode/Plug-ins/`
*   Hopefully you get no errors during build
* Restart Xcode for the plug-in to be activated.

#### How to use the plug-in
In Xcode the plug-in will add a new menu-point in the `edit` menu: `Post Gist To Github`.
Alternatively you can also use the shortcut `⌥ + c` i.e. `(option + c)`
to trigger the plug-in.  
It will use the currently selected text to create a gist.  
If no text is selected all text in the current open document will be converted into a gist.

##### GitHub user credentials.
To post a gist the plug-in requires a **username*** and **password** to a valid GitHub account. Your information is not in any way used for anything else but creating Gist's. If you have any concerns feel free to check the source.

### Uninstall
To uninstall the plug-in simply delete it from the folder where it resides:
`~/Library/Application\ Support/Developer/Shared/Xcode/Plug-ins/BTGisterPost.xcplugin`  

### Dependencies
The plug-in uses a modified version of [UAGithubEngine](https://github.com/owainhunt/uagithubengine) for GitHub communication. It is included within the source files.

### Contributions
If you would like to contribute to the plug-in, simply fork the project and submit a pull request. See [GitHub help](https://help.github.com/articles/fork-a-repo)

### License
The MIT License (MIT)

Copyright (c) 2013 Thomas Blitz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.


