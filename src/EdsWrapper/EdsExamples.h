#pragma once

#include "EdsWrapper.h"
#include "ofFileUtils.h"

/*
	This collection of functions is mostly based on examples in the appendix of the
	EDSDK API documentation. The Eds::Exception style is used instead of EdsError,
	and error reporting is done using OF logging. All functions use camel-case in
	accordance with the normal Eds functions.
*/

namespace Eds {
	void GetVolume(EdsCameraRef camera, EdsVolumeRef volume);
	void GetDCIMFolder(EdsVolumeRef volume, EdsDirectoryItemRef directoryItem);
	void DownloadImage(EdsDirectoryItemRef directoryItem, ofBuffer& imageBuffer, bool deleteAfterDownload = true);
	void StartLiveview(EdsCameraRef camera);
	bool DownloadEvfData(EdsCameraRef camera, ofBuffer& imageBuffer);
	void EndLiveview(EdsCameraRef camera);
	void CopyStream(EdsStreamRef stream, ofBuffer& buffer);
	void SafeRelease(EdsBaseRef& inRef);
}