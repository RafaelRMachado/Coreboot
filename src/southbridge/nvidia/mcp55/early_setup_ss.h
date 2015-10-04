/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2004 Tyan Computer
 * Written by Yinghai Lu <yhlu@tyan.com> for Tyan Computer.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc.
 */

static const unsigned int pcie_ss_tbl[] = {
	0x0C504103f,
	0x0C504103f,
	0x0C504103f,
	0x0C5042040,
	0x0C5042040,
	0x0C5042040,
	0x0C5043041,
	0x0C5043041,
	0x0C5043041,
	0x0C5043041,
	0x0C5044042,
	0x0C5044042,
	0x0C5044042,
	0x0C5045043,
	0x0C5045043,
	0x0C5045043,
	0x0C5045043,
	0x0C5045043,
	0x0C5046044,
	0x0C5046044,
	0x0C5046044,
	0x0C5046044,
	0x0C5047045,
	0x0C5047045,
	0x0C5047045,
	0x0C5047045,
	0x0C5047045,
	0x0C5048046,
	0x0C5048046,
	0x0C5048046,
	0x0C5048046,
	0x0C5049047,
	0x0C5049047,
	0x0C5049047,
	0x0C504a048,
	0x0C504a048,
	0x0C504b049,
	0x0C504b049,
	0x0C504a048,
	0x0C504a048,
	0x0C5049047,
	0x0C5049047,
	0x0C5048046,
	0x0C5048046,
	0x0C5048046,
	0x0C5047045,
	0x0C5047045,
	0x0C5047045,
	0x0C5047045,
	0x0C5047045,
	0x0C5046044,
	0x0C5046044,
	0x0C5046044,
	0x0C5046044,
	0x0C5045043,
	0x0C5045043,
	0x0C5045043,
	0x0C5044042,
	0x0C5044042,
	0x0C5044042,
	0x0C5043041,
	0x0C5043041,
	0x0C5042040,
	0x0C5042040,
};

static const unsigned int sata_ss_tbl[] = {
	0x0c9044042,
	0x0c9044042,
	0x0c9044042,
	0x0c9045043,
	0x0c9045043,
	0x0c9045043,
	0x0c9045043,
	0x0c9045043,
	0x0c9046044,
	0x0c9046044,
	0x0c9046044,
	0x0c9046044,
	0x0c9047045,
	0x0c9047045,
	0x0c9047045,
	0x0c9047045,
	0x0c9047045,
	0x0c9048046,
	0x0c9048046,
	0x0c9048046,
	0x0c9048046,
	0x0c9049047,
	0x0c9049047,
	0x0c9049047,
	0x0c9049047,
	0x0c904a048,
	0x0c904a048,
	0x0c904a048,
	0x0c904a048,
	0x0c904b049,
	0x0c904b049,
	0x0c904b049,
	0x0c904b049,
	0x0c904b049,
	0x0c904b049,
	0x0c904a048,
	0x0c904a048,
	0x0c904a048,
	0x0c904a048,
	0x0c9049047,
	0x0c9049047,
	0x0c9049047,
	0x0c9049047,
	0x0c9048046,
	0x0c9048046,
	0x0c9048046,
	0x0c9048046,
	0x0c9047045,
	0x0c9047045,
	0x0c9047045,
	0x0c9047045,
	0x0c9047045,
	0x0c9046044,
	0x0c9046044,
	0x0c9046044,
	0x0c9046044,
	0x0c9045043,
	0x0c9045043,
	0x0c9045043,
	0x0c9045043,
	0x0c9045043,
	0x0c9044042,
	0x0c9044042,
	0x0c9044042,
};

static const unsigned int cpu_ss_tbl[] = {
	0x0C5038036,
	0x0C5038036,
	0x0C5038036,
	0x0C5037035,
	0x0C5037035,
	0x0C5037035,
	0x0C5037035,
	0x0C5036034,
	0x0C5036034,
	0x0C5036034,
	0x0C5036034,
	0x0C5036034,
	0x0C5035033,
	0x0C5035033,
	0x0C5035033,
	0x0C5035033,
	0x0C5035033,
	0x0C5035033,
	0x0C5034032,
	0x0C5034032,
	0x0C5034032,
	0x0C5034032,
	0x0C5034032,
	0x0C5034032,
	0x0C5035033,
	0x0C5035033,
	0x0C5035033,
	0x0C5035033,
	0x0C5035033,
	0x0C5036034,
	0x0C5036034,
	0x0C5036034,
	0x0C5036034,
	0x0C5036034,
	0x0C5037035,
	0x0C5037035,
	0x0C5037035,
	0x0C5037035,
	0x0C5038036,
	0x0C5038036,
	0x0C5038036,
	0x0C5038036,
	0x0C5039037,
	0x0C5039037,
	0x0C5039037,
	0x0C5039037,
	0x0C503a038,
	0x0C503a038,
	0x0C503a038,
	0x0C503a038,
	0x0C503b039,
	0x0C503b039,
	0x0C503b039,
	0x0C503b039,
	0x0C503b039,
	0x0C503a038,
	0x0C503a038,
	0x0C503a038,
	0x0C503a038,
	0x0C503a038,
	0x0C5039037,
	0x0C5039037,
	0x0C5039037,
	0x0C5039037,
};
