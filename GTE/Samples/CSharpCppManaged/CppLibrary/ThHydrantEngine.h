#pragma once
#include "stdafx.h"

namespace gte
{
	struct THMODULE_EXPORT ThProtectionContext
	{
		// ����˨ˮ�����뾶
		double hydrant_hose_length;
		// ����˨ˮ���뾶
		double hydrant_clearance_radius;
	};

	class THMODULE_EXPORT ThHydrantEngine
	{
	public:
		void Validate(const std::string& geojson, const ThProtectionContext& context, std::vector<std::string>& result);
	};
}

