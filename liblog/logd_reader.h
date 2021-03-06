/*
 * Copyright (C) 2016 The Android Open Source Project
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

#ifndef _LIBLOG_LOGD_READER_H__
#define _LIBLOG_LOGD_READER_H__

#include <unistd.h>

#include "log_portability.h"

__BEGIN_DECLS

LIBLOG_HIDDEN ssize_t __send_log_msg(char *buf, size_t buf_size);

__END_DECLS

#endif /* _LIBLOG_LOGD_READER_H__ */
