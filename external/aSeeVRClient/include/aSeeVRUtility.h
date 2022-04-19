/*******************************************************************************/
/*
Copyright (C) 2016 - 2020, Beijing 7invensun Technology Co.Ltd.All rights reserved.
Permission is hereby granted, free of charge, to any person or organization obtaining
a copy of the software and accompanying documentation covered by this license(the "Software")
to use, reproduce, display, distribute, execute, and transmit the Software, and to prepare
derivative works of the Software, and to permit third - parties to whom the Software
is furnished to do so, all subject to the following :
The copyright notices in the Software and this entire statement, including the above
license grant, this restriction and the following disclaimer, must be included in all
copies of the Software, in whole or in part, and all derivative works of the Software,
unless such copies or derivative works are solely in the form of machine - executable
object code generated by a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE, TITLE AND NON - INFRINGEMENT.IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR ANYONE
DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

@author 7invensun
*/
#ifndef _INCLUDE_7INVENSUN_ASEEVR_UTILITY_API_H_
#define _INCLUDE_7INVENSUN_ASEEVR_UTILITY_API_H_

#include "aSeeVRTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

    /** Used to obtain the value data of a specified data member of type: aSeeVRPoint2D in eye data structure aSeeVREyeData.
    * @param data  Eye data.
    * @param eye  Eye type (Refer to the definition of enumeration type: aSeeVREye).
    * @param type  Data member mark (Refer to the definition of enumeration type: aSeeVREyeDataItemType).
    * @param point  Two dimensional coordinates.
    * @return  Refer to the definition of aSeeVRReturnCode.
    */
	_7INVENSUN_API aSeeVRReturnCode _7INVENSUN_CALL aSeeVR_get_point2d(const aSeeVREyeData* data, aSeeVREye eye, aSeeVREyeDataItemType type, aSeeVRPoint2D* point);

    /** Used to obtain the value data of a specified data member of type: aSeeVRPoint3D in eye data structure aSeeVREyeData.

    * @param data  Eye data.
    * @param eye  Eye type (Refer to the definition of enumeration type: aSeeVREye).
    * @param type  Data member mark (Refer to the definition of enumeration type: aSeeVREyeDataItemType).
    * @param point Three dimensional coordinates.
    * @return  Refer to the definition of aSeeVRReturnCode.
    */
	_7INVENSUN_API aSeeVRReturnCode _7INVENSUN_CALL aSeeVR_get_point3d(const aSeeVREyeData* data, aSeeVREye eye, aSeeVREyeDataItemType type, aSeeVRPoint3D* point);

    /** Used to obtain the value data of a specified data member of type: float in eye data structure aSeeVREyeData.

    * @param data  Eye data.
    * @param eye  Eye type (Refer to the definition of enumeration type: aSeeVREye).
    * @param type  Data member mark (Refer to the definition of enumeration type: aSeeVREyeDataItemType).
    * @param item  Floating number.
    * @return  Refer to the definition of aSeeVRReturnCode.
    */
	_7INVENSUN_API aSeeVRReturnCode _7INVENSUN_CALL aSeeVR_get_float(const aSeeVREyeData* data, aSeeVREye eye, aSeeVREyeDataItemType type, float* item);

    /** Used to obtain the value data of a specified data member of type: int32_t in eye data structure aSeeVREyeData.
    * @param data  Eye data.
    * @param eye  Eye type (Refer to the definition of enumeration type: aSeeVREye).
    * @param type  Data member mark (Refer to the definition of enumeration type: aSeeVREyeDataItemType).
    * @param item  32-bit unsigned integer number.
    * @return  Refer to the definition of aSeeVRReturnCode.
    */
	_7INVENSUN_API aSeeVRReturnCode _7INVENSUN_CALL aSeeVR_get_int32(const aSeeVREyeData* data, aSeeVREye eye, aSeeVREyeDataItemType type, int32_t* item);

    /** Used to obtain the value data of a specified data member of type: int64_t in eye data structure aSeeVREyeData.
    * @param data  Eye data.
    * @param eye  Eye type (Refer to the definition of enumeration type: aSeeVREye).
    * @param type  Data member mark (Refer to the definition of enumeration type: aSeeVREyeDataItemType).
    * @param item  64-bit unsigned integer number.
    * @return  Refer to the definition of aSeeVRReturnCode.
    */
	_7INVENSUN_API aSeeVRReturnCode _7INVENSUN_CALL aSeeVR_get_int64(const aSeeVREyeData* data, aSeeVREye eye, aSeeVREyeDataItemType type, int64_t* item);

    /** Used to obtain the value data of a specified data member of type: uint32_t in eye data structure aSeeVREyeData.
    * @param data  Eye data.
    * @param eye  Eye type (Refer to the definition of enumeration type: aSeeVREye).
    * @param type  Data member mark (Refer to the definition of enumeration type: aSeeVREyeDataItemType).
    * @param item  32-bit unsigned integer number.
    * @return  Refer to the definition of aSeeVRReturnCode.
    */
	_7INVENSUN_API aSeeVRReturnCode _7INVENSUN_CALL aSeeVR_get_uint32(const aSeeVREyeData* data, aSeeVREye eye, aSeeVREyeDataItemType type, uint32_t* item);

    /** Used to obtain the value data of a specified data member of type: uint64_t in eye data structure aSeeVREyeData.
    * @param data  Eye data.
    * @param eye  Eye type (Refer to the definition of enumeration type: aSeeVREye).
    * @param type  Data member mark (Refer to the definition of enumeration type: aSeeVREyeDataItemType).
    * @param item  64-bit unsigned integer number.
    * @return  Refer to the definition of aSeeVRReturnCode.
    */
	_7INVENSUN_API aSeeVRReturnCode _7INVENSUN_CALL aSeeVR_get_uint64(const aSeeVREyeData* data, aSeeVREye eye, aSeeVREyeDataItemType type, uint64_t* item);

#ifdef __cplusplus
}
#endif

#endif//_INCLUDE_7INVENSUN_ASEEVR_UTILITY_API_H_