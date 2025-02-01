#include "utils/utils.hpp"
#include "foo.hpp"
#include "just_foo.hpp"

//#define NDEBUG

int main( int argc, const char* argv[] ) {
	if ( argc > 1 ) {
		su::arg_function( argc, argv );
	}

	auto start = su::timer_start();
#ifndef NDEBUG
	std::cout << "The September 21st Incident of Gigi Murin. (the start message*)\n";
#endif
	std::string log_path = "log.txt";
	std::string custom_log_text = "the custom text.";
	std::string error_text = "the program has stopped, unknown error.";
	std::chrono::duration<float> program_time;

	try {
		just_foo();
		foo();

		//throw std::runtime_error( "the error." );

		program_time = su::timer_end( start );
		su::custom_log_save( log_path, custom_log_text, program_time );

	} catch( std::exception& err ) {
#ifndef NDEBUG
		std::cout << "std::exception: " << err.what() << "\n";
#endif
		program_time = su::timer_end( start );
		error_text = "the program has stopped, std::exception: " + ( std::string )err.what();
		su::error_log_save( log_path, error_text, program_time );
		exit( -1 );
	} catch( ... ) {
#ifndef NDEBUG
		std::cout << "unknown exception.\n";
#endif
		program_time = su::timer_end( start );
		su::error_log_save( log_path, error_text, program_time );
		exit( -1 );
	}

	return 0;
}
