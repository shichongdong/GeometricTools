#pragma once

#include <vector>
#include <string>
#include <memory>

namespace gte
{
	class ThPolygonRepairer
	{
	public:
		std::string MakeValid(const std::string& wkt);
		std::vector<unsigned char> MakeValid(std::vector<unsigned char>& wkb);
	};
}

