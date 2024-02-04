#include<Windows.h>			// for XMVerifyCPUSupport
#include<DirectXMath.h>
#include<DirectXPackedVector.h>
#include<iostream>
using namespace std;
using namespace DirectX;
using namespace DirectX::PackedVector;

// XMVECTOR 객체를 출력하기 위해 << 연산자 오버로딩
ostream& XM_CALLCONV operator<<(ostream& os, FXMVECTOR v)
{
	XMFLOAT3 dest;
	XMStoreFloat3(&dest, v);
	os << "(" << dest.x << ", " << dest.y << ", " << dest.z << ")";
	return os;
}

int main()
{
	cout.setf(ios_base::boolalpha);		// bool 변수 true / false로 출력하기 위한 세팅
	
	// SSE2 지원 체크
	if (!XMVerifyCPUSupport())
	{
		cout << "directX math not supported" << endl;
		return 0;
	}

	XMVECTOR p = XMVectorZero();
	XMVECTOR q = XMVectorSplatOne();
	XMVECTOR u = XMVectorSet(1.0f, 2.0f, 3.0f, 0.0f);
	XMVECTOR v = XMVectorReplicate(-2.0f);
	XMVECTOR w = XMVectorSplatZ(u);

	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "u = " << u << endl;
	cout << "v = " << v << endl;
	cout << "w = " << w << endl;

	return 0;
}