#include "utils/utils.hpp"
#include "foo.hpp"
#include "just_foo.hpp"

int main( int argc, const char* argv[] ) {
	if ( argc > 1 ) {
		su::arg_foo( argc, argv );
	}

	auto start = su::timer_start();
	std::cout << "The September 21st Incident of Gigi Murin. (the start message*)\n";
	std::string log_path = "log.txt";
	std::string custom_log_text = "none";

	try {
		just_foo();
		foo();

		std::cout << su::timer_end( start ) << "\n";

		su::custom_log_save( log_path, custom_log_text );
	} catch( std::exception& e ) {
		std::cout << "std::exception: " << e.what() << "\n";
	} catch( ... ) {
		std::cout << "unknown exception.\n";
	}

	return 0;
}
