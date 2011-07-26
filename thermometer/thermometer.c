/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2011 GSyC/LibreSoft, Universidad Rey Juan Carlos.
 *  Authors:
 *  Santiago Carot Nemesio <sancane at gmail.com>
 *  Jorge Fernandez Gonzalez <jorge.fernandez.gonzalez at gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include <gdbus.h>

#include "adapter.h"
#include "device.h"
#include "thermometer.h"

int thermometer_register(DBusConnection *connection, struct btd_device *device)
{
	/* TODO: Register Health Thermometer Interface */
	return 0;
}

void thermometer_unregister(struct btd_device *device)
{
	/* TODO: Unregister Health Thermometer Interface */
}
