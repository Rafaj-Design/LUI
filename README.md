LiveUI iOS Framework
================

###### LiveUI Framework is a set of client libraries to take advantage of a mobile deployment platform [LiveUI](http://www.liveui.io/) 

## Download
[iOS Framework](https://github.com/Ridiculous-Innovations/LUI/tree/master/iOS/LUIFramework/Latest)  
[Mac OS X Framework](https://github.com/Ridiculous-Innovations/LUI/tree/master/iOS/LUIFramework/Latest) - Mac OS X framework is in alpha mode and not yet ready for a production environment. We will be adding documentation on how to use it properly soon!!!

This manual has used Xcode 6.4 as a reference. There might be ome slight difference between Xcode versions but the concept should always stay the same.

## Basic installation

1. Drag and Drop LUIFramework.framework into the project
2. In your AppDelegate, ```#import <LUIFramework/LUIFramework.h>```
3. Initialize the LiveUI framework:

```obj-c

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [[LUIMain sharedInstance] setApiKey:@"{YOUR_API_KEY}"];
    return YES;
}

```

## Bundle autoupdating
Bundle auto-updating will take care of importing the latest localization and other configuration files before every build so you won't have to. There is a smart script hidden in the LiveUI framework that will call the API service before every build (if the internet connection is available), pulls all the latest data and updates your bundle files.

#### Using run script in your targets build phase

1. If you want to use bundle autoupdate functionality, make sure the framework is physically present at the root of your project
3. Go to your target's "Build Phases"
4. Add a "New Run Script Phase", double click the "Run Script" title and rename it to "LiveUI"
5. Move your new "LiveUI" run script phase up, right under the "Target Dependencies"
6. Paste in following: ```./LUIFramework.framework/Update "{YOUR_API_KEY}"```
7. Build your project (Cmd+B)
  * If you are connected to the internet and you have filled in a correct API key, a new bundle (LiveUI.bundle) has been imported into your project into your "Supporting Files" group. In case you don't have "Supporting Files", the bundle has been imported into your project root.
  * In case you have multiple projects (even embeded projects) in your root folder, Update script won't be able to insert the bundle on it's own and you will have to add reference to the bundle yourself. LibeUI.bundle should be located in your root folder right next to the framework.
  * Bundle will become a member of all your targets if added automatically so make sure you manage the membership where this is not desirable
  
<!--
#### Using run script in re-actions in your scheme

1. Edit your app's scheme (you can do so by tapping on the "run/build" button while holding Alt (option) key)
2. Open Build, Run or Archive (or all of them one by one if you always want to update assets)
3. Select Pre-actions
4. Add a "New Run Script Action"
5. Continue with step 6 of the "Using run script in your targets build phase"

Note:  
You can set a different "Update" configuration for example for your Archive/Release phase, etc ...
-->
  
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
You can enable debugging by setting ```[[LUIMain sharedInstance] setDebugMode:YES];``` in your ```-application:didFinishLaunchingWithOptions:``` method.

```obj-c

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [[LUIMain sharedInstance] setDebugMode:YES];
	[[LUIMain sharedInstance] setApiKey:@"{YOUR_API_KEY}"];
    return YES;
}

```

This will enable:

1. Reporting missing translations
  * Missing translation keys are being sent to the admin panel when the app goes to background (home button is pressed once)
  * Already reported missing translations are being cached until you restart the app
  * Please make sure you always disable the debug mode for production environment, leaving it on could generate significant API traffic and limit your monthly API allowance
2. See debug messages in the debug console

To debug what string has been and which one has not been translated, you can enable mode in which all string will be replaced with equally long underscores ... this will give you an immediate visibility of what is yet to be translated.

```obj-c

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [[LUIMain sharedInstance] setDebugMode:YES]; // Debug mode needs to be enabled
	[[LUITranslations sharedInstance] setReplaceStringsForUnderscores:YES];
	
	[[LUIMain sharedInstance] setApiKey:@"{YOUR_API_KEY}"];
    return YES;
}

```

#### Notes:
