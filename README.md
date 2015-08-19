LiveUI iOS & Mac OS X Frameworks
================


## Basic installation

1. Drag and Drop LUIFramework.framework into the project
2. 

## Bundle autoupdating (using run script)
1. If you want to use bundle autoupdate functionality, make sure the framework is physically present at the root of your project
3. Go to your target's "Build Phases"
4. Add a "New Run Script Phase"
5. Paste in following: ./LUIFramework.framework/Update "XXXXX-XXXX-YOUR-API-KEY-XXXXX-XXXX"
6. Build

#### Notes:
If you are connected to the internet and you have filled in a correct API key, a new bundle (LiveUI.bundle) has been imported into your project into your "Supporting Files" group. In case you don't have "Supporting Files", the bundle has been imported into your project root.

In case you have multiple projects (even embeded projects) in your root folder, Update script won't be able to insert the bundle on it's own and you will have to add reference to the bundle yourself. LibeUI.bundle should be located in your root folder right next to the framework.

