#ifndef __CollectorCommandsh__
#define __CollectorCommandsh__

#include <yarp/os/Property.h>

#include <yarp/FoBDeviceDriver.h>
#include <yarp/CyberGloveDeviceDriver.h>
#include <yarp/E504DeviceDriver.h>
#include <yarp/JoyPresDeviceDriver.h>

using namespace yarp::os;

// properties of the collector

typedef class _mirrorCollectorProperty : public Property {
public:
	_mirrorCollectorProperty() {
		fromString("\
			(appName				mirrorCollector)\
			(dataNetName			default)\
			(streamFreq				25.0)\
            (propertyFileName       c:\\\\work\\\\platform\\\\mirror\\\\mirrorCollector\\\\mirrorCollector.conf)\
			(useGazeTracker			1)\
			(GTComPort				1)\
			(GTBaudRate				57600)\
			(useTracker0			1)\
			(tracker0ComPort		2)\
			(tracker0BaudRate		115200)\
			(tracker0MeasRate		103.3)\
			(tracker0TransOpMode	2)\
			(tracker0Timeout		160)\
			(useDataGlove			1)\
			(gloveComPort			3)\
			(gloveBaudRate			115200)\
			(useTracker1			0)\
		    (tracker1ComPort		4)\
			(tracker1BaudRate		115200)\
			(tracker1MeasRate		103.3)\
			(tracker1TransOpMode	2)\
			(tracker1Timeout		160)\
			(usePresSens			1)\
			(nPresSens				2)\
	    ");
    };
} mirrorCollectorProperty;

// commands exchanged with the client applications
typedef enum {
        CCmdFailed         = 0,
        CCmdSucceeded      = 1,
        CCmdWakeUp         = 2,
        CCmdShutDown       = 3,
        CCmdGetData        = 4,
        CCmdStartStreaming = 5,
        CCmdStopStreaming  = 6,
} collectorCommand;

// numerical data sent over the network
typedef struct _collectorNumericalData {
    
	_collectorNumericalData() { clean(); };

    void clean() {
        tracker0Data.clean();
        tracker1Data.clean();
        GTData.clean();
        gloveData.clean();
        pressureData.clean();
    };
    
	FoBData			tracker0Data;
    FoBData			tracker1Data;
    E504Data		GTData;
    CyberGloveData	gloveData;
    JoyPresData		pressureData;

} collectorNumericalData;

#endif
