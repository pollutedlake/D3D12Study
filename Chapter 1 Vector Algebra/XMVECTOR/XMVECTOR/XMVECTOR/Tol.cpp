//#include <DirectXPackedVector.h>
//#include <iostream>
//using namespace std;
//using namespace DirectX;
//using namespace DirectX::PackedVector;
//
//int main()
//{
//	cout.precision(8);
//
//	if (!XMVerifyCPUSupport())
//	{
//		cout << "directX math not supported" << endl;
//		return 0;
//	}
//
//	XMVECTOR u = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);
//	XMVECTOR n = XMVector3Normalize(u);
//
//	float LU = XMVectorGetX(XMVector3Length(n));
//
//	cout << LU << endl;
//	if (LU == 1.0f)
//	{
//		cout << "Length 1" << endl;
//	}
//	else
//	{
//		cout << "Length not 1" << endl;
//	}
//
//	float powLU = powf(LU, 1.0e6f);
//	cout << "LU^(10^6) = " << powLU << endl;
//	return 0;
//}