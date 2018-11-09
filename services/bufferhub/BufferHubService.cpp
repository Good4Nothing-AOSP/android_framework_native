/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <bufferhub/BufferHubService.h>

namespace android {
namespace frameworks {
namespace bufferhub {
namespace V1_0 {
namespace implementation {

using hardware::Void;

Return<void> BufferHubService::allocateBuffer(const HardwareBufferDescription& /*description*/,
                                              const uint32_t /*userMetadataSize*/,
                                              allocateBuffer_cb _hidl_cb) {
    // TODO(b/118614333): implement buffer allocation
    _hidl_cb(/*bufferClient=*/nullptr, /*status=*/BufferHubStatus::NO_ERROR);
    return Void();
}

Return<void> BufferHubService::importBuffer(const hidl_handle& /*nativeHandle*/,
                                            importBuffer_cb _hidl_cb) {
    // TODO(b/118614157): implement buffer import
    _hidl_cb(/*bufferClient=*/nullptr, /*status=*/BufferHubStatus::NO_ERROR);
    return Void();
}

} // namespace implementation
} // namespace V1_0
} // namespace bufferhub
} // namespace frameworks
} // namespace android
