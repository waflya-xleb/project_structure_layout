#pragma once
#ifndef _UTILS_HPP_
#define _UTILS_HPP_

#include "integrated_cxx_libs.hpp"

namespace su {
	void arg_function( int argc, const char* argv[] );

	void custom_log_save( std::string& path, std::string& text, std::chrono::duration<float> program_time );

	void log_save( std::string& path, std::chrono::duration<float> program_time );

	void error_log_save( std::string& path, std::string& error_text, std::chrono::duration<float> program_time );

	std::chrono::time_point<std::chrono::high_resolution_clock> timer_start();

	std::chrono::duration<float> timer_end( std::chrono::time_point<std::chrono::high_resolution_clock>& start );
}// namespace su ( special utils )

#endif
