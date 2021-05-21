#include "ThMPolygonRepairerMgd.h"
#include "ThWashInteropUtils.h"

namespace CLI
{
	String^ ThMPolygonRepairerMgd::MakeValid(String^ wkt)
	{
		std::string inputWKT;
		MarshalString(wkt, inputWKT);
		std::string outputWKT = mInstance->MakeValid(inputWKT);
		return MarshalNativeString(outputWKT);
	}

	cli::array<Byte>^ ThMPolygonRepairerMgd::MakeValid(cli::array<Byte>^ wkb)
	{
		std::vector<unsigned char> inputWKB;
		MarshalBindaryBuffer(wkb, inputWKB);
		std::vector<unsigned char> outputWKB = mInstance->MakeValid(inputWKB);
		return MarshalNativeBindaryBuffer(outputWKB);
	}
}
