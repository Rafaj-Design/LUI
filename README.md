LiveUI iOS Framework
================

###### LiveUI Framework is a set of client libraries to take advantage of a mobile deployment platform [LiveUI](http://www.liveui.io/) 

## Download
[iOS Framework](https://github.com/Ridiculous-Innovations/LUI/tree/master/iOS/LUIFramework/Latest)  
[Mac OS X Framework](https://github.com/Ridiculous-Innovations/LUI/tree/master/iOS/LUIFramework/Latest) - Mac OS X framework is in alpha mode and not yet ready for a production environment. We will be adding documentation on how to use it properly soon!!!


## Basic installation

1. Drag and Drop LUIFramework.framework into the project
2. In your AppDelegate, ```#import <LUIFramework/LUIFramework.h>```
3. Initialize the LiveUI framework:

```obj-c


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [[LUIMain sharedInstance] setApiKey:@"XXXXX-XXXX-YOUR-API-KEY-XXXXX-XXXX"];
    return YES;
}


```

## Bundle autoupdating (using run script)
1. If you want to use bundle autoupdate functionality, make sure the framework is physically present at the root of your project
3. Go to your target's "Build Phases"
4. Add a "New Run Script Phase", double click the "Run Script" title and rename it to "LiveUI"
5. Move your new "LiveUI" run script phase up, right under the "Target Dependencies"
6. Paste in following: ```./LUIFramework.framework/Update "XXXXX-XXXX-YOUR-API-KEY-XXXXX-XXXX"```
7. Build your project (Cmd+B)
  * If you are connected to the internet and you have filled in a correct API key, a new bundle (LiveUI.bundle) has been imported into your project into your "Supporting Files" group. In case you don't have "Supporting Files", the bundle has been imported into your project root.
  * In case you have multiple projects (even embeded projects) in your root folder, Update script won't be able to insert the bundle on it's own and you will have to add reference to the bundle yourself. LibeUI.bundle should be located in your root folder right next to the framework.
  * Bundle will become a member of all your targets if added automatically so make sure you manage the membership where this is not desirable
  
Format of the Update script is following  ```./LUIFramework.framework/Update "{API_KEY}" {BUILD} {IMPORT_INTO_PROJECT}``` where:
  * {API_KEY} - Your API key, this is available in LiveUI admin panel in your application settings
  * {BUILD} - This is your build version, this can be `live`, `staging` or you can pass through a specific version number which you can find in your admin panel under "Version management"
  * {IMPORT_INTO_PROJECT} - Can be `true` or `false` and determines if the Update script will try to import LiveUI.bundle into your project in case it will be missing from it. Default value is `true`

## Using Translations
You can use ```LUILocalizedString(key, comment)``` or ```LUITranslate(key)``` to return a localized string.

If you have .pch file in place in an existing project which is already localized in a standard way using ```NSLocalizedString(key, comment)``` you can ```#import <LUIFramework/NSLocalizedStringOverride.h>``` which will override all existing ```NSLocalizedString(key, comment)``` methods with LiveUI ones

Please take a look at the LUITranslations.h header file for further documentation.

## Using Visuals
You can use ```LUIImage(key)``` to return an image or ```LUIColor(key)``` to return a color.

Please take a look at the LUIVisuals.h header file for further documentation.

## Debugging
You can enable debugging by setting ```[[LUIMain sharedInstance] setDebugMode:YES];``` in your ```-application:didFinishLaunchingWithOptions:``` method. This will enable:
1. Reporting missing translations
  * Missing translation keys are being sent to the admin panel when the app goes to background (home button is pressed once)
  * Already reported missing translations are being cached until you restart the app
  * Please make sure you always disable the debug mode for production environment, leaving it on could generate significant API traffic and limit your monthly API allowance
2. See debug messages in the debug console

#### Notes:
