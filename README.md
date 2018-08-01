# qCMAT<br> (Coastal Management & Analysis Toolbox)
__Description__: <br>
CloudCompare Plug-in developed by Liam O'Hanlon and Arthur-Louis Heath for the Lancaster University LEC department.

## Table of Contents
1. [Features](#features)<br>
<!--2. [Installation](#installation)<br>-->
3. [Using qCMAT](#)<br>
<!--
 4. [Screenshots]()
-->


## Features
 Feature                        |  Description  | Status
--------------------------------|---------------|--------
__Volume Calculation__ | _Calculate volume of chosen point cloud._ | `Released`
__Surface Area Calculation__ | _Calculate surface area of point cloud._ | `Released`
__Shoreline Detection__              | _Have qCMAT detect the shoreline of a point cloud and overlay a plotline._ | `Released`
__Point Cloud Visualisation__   | _description_ | `Released`
__Cropping/Sub-cloud Creation__ | _description_ | `Released`

<!--

 No longer necessary due to newer compilation documentation,
 remove in the future.

## Installation
1. Download and install CMake (__Latest Release, Binary distribution, Installer__)
  <br>[Click Here](https://cmake.org/download)<br><br>
2. Download qCMAT packaged with CloudCompare
  <br>[<em>Click Here</em>](https://github.com/ohanlonl/qCMAT/archive/master.zip)<br><br>
3. Extract the qCMAT-master.zip archive <br><br>
4. Open CMake <br><br>
5. Click the __"Browse Source..."__ button next to the field that says __"Where is your source code"__ and select the root folder of the repository <br>(likely `C:/Users/<UserName>/<YourDownloadsFolder>/qCMAT-master/qCMAT-master`)<br><br>
6. Copy the path now present in the __"Where is your source code"__ field and paste it into the __"Where to build the binaries"__ field and add `/build`.<br><br>
7. Click __configure__ (This is where you will most likely face some issues, please refer to the [Troubleshooting section]().
-->

## Using qCMAT
1. Open CloudCompare. <br><br>
2. Click __File > Open__ and choose the BIN/ASCII file to import into CloudCompare. <br><br>
3. Hold either `shift` or `ctrl` and select at least two point clouds from the "DB Tree" sidebar on the left of the CloudCompare window.<br><br>
4. Click __Plugins > CMAT__ to launch the plugin.<br><br>
5. The main window of the plugin should now appear and from here you can make use of the multiple features detailed in the [features section](#features). Instructions on how to use each feature are detailed below.

### Using Volume Calculation
1. The maximum and minimum heights will be automatically detected for you, however if you wish you can change these by editing the fields __"Top"__ and __"Bottom"__ respectively.<br><br>
2. Next you will need to enter the __number of slices__ in the field labelled __"No. slices"__. This will set the total number of contours.<br><br>
3. Click __Calculate Volumes__ <br><br>
4. Click __Save Cloud__ to save and add the contoured point cloud to the CloudCompare DB Tree (sidebar)<br><br>
5. _(Optional)_ To view the specific details of the new cloud and its contours click __Display__.<br><br>
6. You should now have 2 new point clouds in the DB Tree but by default CloudCompare does not have colour enabled for these new point clouds. To remedy this, right click and __Toggle color__ for each of the new clouds.

### Using Surface Area Calculation
1. Click __Surface__ <br><br>
2. The calculated surface area should now be visible in a new window.<br><br>
3. _(Optional)_ Click __Save .csv__ to save the results as a CSV file if desired.<br>

### Using Shoreline Detection
1. Click __Shoreline__<br><br>
2. Enter water level, the metric used depends on the point cloud itself.<br><br>
<!-- TODO: in what metric? mm i believe used by CC-->
3. Use the slider to change the sensitivity. Depending on the density of your point cloud you will need to find the appropriate sensitivity and this will need to be determined through trial and error. Usually keeping it at halfway presents appropriate results.<br><br>
4. Click __Plot 3D__ and a new point cloud will appear in the DB Tree.<br><br>
5. By default CloudCompare does not have colour enabled for new point couds so you will need to right click on the new point cloud and click __Toggle color__.
<br><br>

<!--
## Documentation
+ [Compilation]()
+ [Contributing]()
+ [Code Documentation]()

## Screenshots
[]()
[]()
[]()
[]()
-->
