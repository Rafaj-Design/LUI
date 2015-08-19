LiveUI iOS Framework
================

#### LiveUI Framework is a set of client libraries to take advantage of a mobile deployment platform [LiveUI](http://www.liveui.io/) 

Download iOS framework from here: [iOS Framework](https://github.com/Ridiculous-Innovations/LUI/tree/master/iOS/LUIFramework/Latest)  
Download Mac OS X framework from here: [iOS Framework](https://github.com/Ridiculous-Innovations/LUI/tree/master/iOS/LUIFramework/Latest)  
!!! Mac OS X framework is in alpha mode and not yet ready for a production environment. We will be adding documentation on how to use it properly soon


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

## Using translations
You can use ```LUILocalizedString(key, comment)``` or ```LUITranslate(key)``` to return a localized string.

If you have .pch file in place in an existing project which is already localized in a standard way using ```NSLocalizedString(key, comment)``` you can import 

## Bundle autoupdating (using run script)
1. If you want to use bundle autoupdate functionality, make sure the framework is physically present at the root of your project
3. Go to your target's "Build Phases"
4. Add a "New Run Script Phase"
5. Paste in following: ```./LUIFramework.framework/Update "XXXXX-XXXX-YOUR-API-KEY-XXXXX-XXXX"```
6. Build your project (Cmd+B)

#### Notes:
1. If you are connected to the internet and you have filled in a correct API key, a new bundle (LiveUI.bundle) has been imported into your project into your "Supporting Files" group. In case you don't have "Supporting Files", the bundle has been imported into your project root.
2. In case you have multiple projects (even embeded projects) in your root folder, Update script won't be able to insert the bundle on it's own and you will have to add reference to the bundle yourself. LibeUI.bundle should be located in your root folder right next to the framework.
3. Bundle will become member of all your targets if added automatically so make sure you manage the membership where this is not desirable