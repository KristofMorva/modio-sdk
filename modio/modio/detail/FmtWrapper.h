/*
 *  Copyright (C) 2021 mod.io Pty Ltd. <https://mod.io>
 *
 *  This file is part of the mod.io SDK.
 *
 *  Distributed under the MIT License. (See accompanying file LICENSE or
 *   view online at <https://github.com/modio/modio-sdk/blob/main/LICENSE>)
 *
 */

#pragma once


#ifndef MODIO_DISABLE_LINK_FMT
	#pragma push_macro("FMT_HEADER_ONLY")
	#ifndef FMT_HEADER_ONLY
		#define FMT_HEADER_ONLY
	#endif
#endif

#ifdef MODIO_PLATFORM_UNREAL

	#include MODIO_UNREAL_PLATFORM_PREAMBLE

	#pragma push_macro("check")
	#undef check

	#pragma warning(push)
	#pragma warning(disable : 4583)
	#pragma warning(disable : 4582)
	#pragma warning(disable : 4265)
	#include "fmt/chrono.h"
	#include "fmt/format.h"
	#include "fmt/printf.h"
	#pragma warning(pop)

	#pragma pop_macro("check")

	#include MODIO_UNREAL_PLATFORM_EPILOGUE

#else
	#include "fmt/chrono.h"
	#include "fmt/format.h"
	#include "fmt/printf.h"
#endif

#ifndef MODIO_DISABLE_LINK_FMT
	#pragma pop_macro("FMT_HEADER_ONLY")
#endif