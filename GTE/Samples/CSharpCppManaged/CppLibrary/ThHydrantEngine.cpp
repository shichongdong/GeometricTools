#include "ThHydrantEngine.h"
#include "ThOGRUtils.h"
#include "ogr_geometry.h"
#include "GeoJSON.h"
#include "connected_components.h"

using namespace gte;
using namespace THOGR;

void 
ThHydrantEngine::Validate(const std::string& geojson, const ThProtectionContext& context, std::vector<std::string>& result)
{
	// ��������
	parseout data;
	parse_geojson(geojson, data);

	// �������
	params parameters;
	parameters.para[0] = context.hydrant_hose_length;
	parameters.para[1] = context.hydrant_hose_length;
	parameters.para[2] = context.hydrant_clearance_radius;

	// ���㱣������
	blueprint bp(data, parameters);

	// �����������
	for (auto i = 0; i < bp.fh_num; ++i)
	{
		result.push_back(out2str(bp.output(i), 25));
	}
}