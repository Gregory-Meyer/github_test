#ifndef LIB_HPP
#define LIB_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

namespace lib {
	template <typename CharT, typename Traits>
	auto print(std::basic_ostream<CharT, Traits> &os) ->
		std::basic_ostream<CharT, Traits>&
	{
		static const std::string HELLO("Hello, world!");

		std::basic_string<CharT, Traits> hello_wide;

		std::transform(
			HELLO.cbegin(),
			HELLO.cend(),
			std::back_inserter(hello_wide),
			[&] (char c) { return os.widen(c); }
		);

		return os << hello_wide;
	}
}

#endif