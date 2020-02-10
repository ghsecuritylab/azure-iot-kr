/* mbed Microcontroller Library
 * Copyright (c) 2018 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if MBED_CONF_NSAPI_PRESENT

#include "cellular/onboard_modem_api.h"
#include "UARTSerial.h"
#include "ONBOARD_TELIT_HE910.h"
#include "ThisThread.h"
#include "CellularLog.h"

using namespace mbed;

ONBOARD_TELIT_HE910::ONBOARD_TELIT_HE910(FileHandle *fh) : TELIT_HE910(fh)
{
}

nsapi_error_t ONBOARD_TELIT_HE910::hard_power_on()
{
    ::onboard_modem_init();
    return NSAPI_ERROR_OK;
}

nsapi_error_t ONBOARD_TELIT_HE910::hard_power_off()
{
    ::onboard_modem_deinit();
    return NSAPI_ERROR_OK;
}

nsapi_error_t ONBOARD_TELIT_HE910::soft_power_on()
{
    ::onboard_modem_power_up();
    // From Telit_xE910 Global form factor App note: It is mandatory to avoid sending data to the serial ports during the first 200ms of the module start-up.
    rtos::ThisThread::sleep_for(200);
    return NSAPI_ERROR_OK;
}

nsapi_error_t ONBOARD_TELIT_HE910::soft_power_off()
{
    ::onboard_modem_power_down();
    return NSAPI_ERROR_OK;
}

CellularDevice *CellularDevice::get_target_default_instance()
{
    static UARTSerial serial(MDMTXD, MDMRXD, 115200);
#if DEVICE_SERIAL_FC
    if (MDMRTS != NC && MDMCTS != NC) {
        tr_debug("Modem flow control: RTS %d CTS %d", MDMRTS, MDMCTS);
        serial.set_flow_control(SerialBase::RTSCTS, MDMRTS, MDMCTS);
    }
#endif
    static ONBOARD_TELIT_HE910 device(&serial);
    return &device;
}

#endif // MBED_CONF_NSAPI_PRESENT
