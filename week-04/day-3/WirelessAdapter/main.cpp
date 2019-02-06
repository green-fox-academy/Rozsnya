#include <iostream>
#include "WirelessAdapter.h"
#include "NetworkDevice.h"
#include "USBDevice.h"
#include "Device.h"



int main( int argc, char* args[] )
{
    WirelessAdapter adapter("da4c32fb21", USBType::USB_TYPE_2, 100);
    adapter.info();
}