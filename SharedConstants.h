/*
 * This file is part of LiveWallpaper – LiveWallpaper App for macOS.
 * Copyright (C) 2026 Bios thusvill
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef SharedConstants_h
#define SharedConstants_h

static const double THUMBNAIL_WIDTH = 300.0;
static const double THUMBNAIL_HEIGHT = 168.0;

/// When YES (default), refresh the system desktop picture from the playing video
/// while the screen is locked so the lock/login screen can animate.
#define kLockScreenLiveWallpaperKey @"lockScreenLiveWallpaper"
/// Max frames per second pushed to the desktop picture while locked (8–24).
#define kLockScreenLiveFPSKey @"lockScreenLiveFPS"
static const double kLockScreenLiveDefaultFPS = 12.0;

#endif /* SharedConstants_h */
