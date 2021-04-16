# Agora RTC Tool (Windows)

*[中文](README.zh.md)*

Agora RTC Tool for OBS Studio.

## Possible use cases

Using it for video chat in real time. This plugin is depended agora sdk.

This pulugin just publishes a selected camera video. 

You can get details about agora sdk from [agora.io](https://www.agora.io/en)

**Running the tool:**

* Register an agora account, you can get an APPID.

* To startup Agora RTC Tool, open the "Agora RTC Tool" dialog under OBS' "Tools" menu.

* Initialize agora settings including fill appid, channel name and uid, before running the tool first time. 

* Then you can start to publish stream to Agora SDK.

* If you want to publish stream to rtmp server after start agora streaming, you need to stop obs studio to publish stream to the same url.

* If agora sdk and obs studio use the same camera, the tool will make obs studio to stop using it.  Enable obs studio to use camera after stop agora streaming.


## Download Release Setup

You can install release setup directly corresponding to OBS Stduio version.

## Compiling Agora RTC Tool

### Prerequisites

You'll need [Qt 5.10.1](https://cdn-fastly.obsproject.com/downloads/Qt_5.10.1.7z),
[CMake](https://cmake.org/download/) and a working [OBS Studio development environment](https://obsproject.com/wiki/install-instructions) installed on your
computer.

### Windows

In cmake-gui, you'll have to set the following variables :

* QTDIR (path) : location of the Qt environment suited for your compiler and architecture
* LIBOBS_INCLUDE_DIR (path) : location of the libobs subfolder in the source code of OBS Studio
* LIBOBS_LIB (filepath) : location of the libobs project
* OBS_FRONTEND_LIB (filepath) : location of the obs-frontend-api project 

For example, if the build directory is located in obs-studio src directory, named build64.

* LIBOBS\_INCLUDE\_DIR is obs-studio/libobs
* LIBOBS\_LIB is obs-studio/build64/libobs, 
* OBS\_FRONTEND\_LIB is obs-studio/build64/UI/obs-frontend-api. 

After configure camke, you get an variable LibObs_DIR, make sure its value is obs-studio/build64/libobs.

## Run RTC Tool

1 Startup obs

2 Select "Agora Rtc Tool" in Tool menu.Then pop up a dialog.

3 Click settings, then setup basic information

4 You can also download and fill a configure file, then load the configure file.
[AgoraObs.zip](https://github.com/AgoraIO/OBS/releases/download/3.3.0/AgoraObs.zip)

5 Configure file include:

* appid
* token
* channel name
* uid
* rtmp url












