INCLUDE_THIS_COMPONENT := y


#DEFINES =

#CFLAGS =

#ASMFLAGS =






SRC = AndrewPlayer.cpp
SRC += DebugWindow.cpp
SRC += DynamicGraph.cpp
SRC += Dynamics.cpp
SRC += Equalizer.cpp
SRC += GuiMain.cpp
SRC += MainWindow.cpp
SRC += MyImages.cpp
SRC += MyUtils.cpp
SRC += Spatial.cpp
SRC += CircleItem.cpp
SRC += EqGraph.cpp

#SPEED_CRITICAL_FILES =

VPATH = src


include $(COMMON_CC)
