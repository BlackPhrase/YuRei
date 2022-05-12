#include <d3d9.h>

namespace urender
{

class crenderdeviced3d9
{
public:
	crenderdeviced3d9();
	~crenderdeviced3d9();
	
	void update();
	
	void clear();
	
	void begin_scene();
	void end_scene();
	
	void present();
private:
	void init();
	void shutdown();
private:
	IDirect3DDevice9 *mpDevice{nullptr};
};

crenderdeviced3d9 gRenderDevice;

backend::begin_frame()
{
	gRenderDevice.update();
	
	gRenderDevice.clear();
	
	gRenderDevice.begin_scene();
};

backend::end_frame()
{
	gRenderDevice.end_scene();
	
	gRenderDevice.present();
};

crenderdeviced3d9::crenderdeviced3d9()
{
	init();
};

crenderdeviced3d9::~crenderdeviced3d9()
{
	shutdown();
};

void crenderdeviced3d9::update()
{
	auto hResult{mpDevice->TestCooperativeLevel()};
	
	switch(hResult)
	{
	case D3DERR_DEVICELOST:
		break;
	case D3DERR_DEVICENOTRESET:
		break;
	};
};

void crenderdeviced3d9::clear()
{
	mpDevice->Clear(0, nullptr, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, D3DCOLOR_RGBA(255, 0, 0, 255), 1.0f, 0);
};

void crenderdeviced3d9::begin_scene()
{
	mpDevice->BeginScene();
};

void crenderdeviced3d9::end_scene()
{
	mpDevice->EndScene();
};

void crenderdeviced3d9::present()
{
	mpDevice->Present(nullptr, nullptr, nullptr, nullptr);
};

using pfnDirect3DCreate9 = IDirect3D9 *(*)(UINT SDKVersion);

void crenderdeviced3d9::init()
{
	HMODULE pD3D9Lib{LoadLibrary("d3d9.dll")};
	
	if(!pD3D9Lib)
		return;
	
	auto fnDirect3DCreate9{reinterpret_cast<pfnDirect3DCreate9>(GetProcAddress(pD3D9Lib, "Direct3DCreate9"))};
	
	if(!fnDirect3DCreate9)
		return;
	
	IDirect3D9 *pD3D{fnDirect3DCreate9(D3D_SDK_VERSION)};
	
	if(!pD3D)
		return;
	
	D3DPRESENT_PARAMETERS D3DPresentParams{};
	ZeroMemory(&D3DPresentParams, sizeof(D3DPresentParams));
	
	D3DPresentParams.Windowed = TODO;
	D3DPresentParams.SwapEffect = D3DSWAPEFFECT_DISCARD;
	
	D3DPresentParams.BackBufferWidth = TODO;
	D3DPresentParams.BackBufferHeight = TODO;
	D3DPresentParams.BackBufferCount = 1;
	
	D3DPresentParams.hDeviceWindow = TODO;
	
	D3DPresentParams.EnableAutoDepthStencil = true;
	D3DPresentParams.AutoDepthStencilFormat = D3DFMT_D24S8;
	
	D3DPresentParams.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;
	
	bool bFailed{pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, pWindow->GetHandle(), D3DCREATE_SOFTWARE_VERTEXPROCESSING, &D3DPresentParams, &mpDevice)};
	
	pD3D->Release();
	
	if(bFailed)
		return;
};

void crenderdeviced3d9::shutdown()
{
	mpDevice->Release();
};

}; // namespace urender