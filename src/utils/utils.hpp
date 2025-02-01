#pragma once
#ifndef _UTILS_HPP_
#define _UTILS_HPP_

#include "includes.hpp"

namespace su {
	void arg_foo( int argc, const char* argv[] );

	void custom_log_save( std::string& path, std::string& text);

	void log_save( std::string& path );

	std::chrono::time_point<std::chrono::high_resolution_clock> timer_start();

	std::chrono::duration<float> timer_end( std::chrono::time_point<std::chrono::high_resolution_clock>& start );
}// namespace su ( special utils )

#endif
