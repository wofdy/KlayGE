// RenderView.cpp
// KlayGE 渲染视图类 实现文件
// Ver 3.3.0
// 版权所有(C) 龚敏敏, 2006
// Homepage: http://www.klayge.org
//
// 3.3.0
// 初次建立 (2006.5.31)
//
// 修改记录
//////////////////////////////////////////////////////////////////////////////////

#include <KlayGE/KlayGE.hpp>
#include <KlayGE/Util.hpp>
#include <KlayGE/RenderView.hpp>

namespace KlayGE
{
	class NullRenderView : public RenderView
	{
	public:
		void ClearColor(Color const & /*clr*/)
		{
		}

		void ClearDepth(float /*depth*/)
		{
		}
		
		void ClearStencil(int32_t /*stencil*/)
		{
		}

		void ClearDepthStencil(float /*depth*/, int32_t /*stencil*/)
		{
		}

		void OnAttached(FrameBuffer& /*fb*/, uint32_t /*att*/)
		{
		}

		void OnDetached(FrameBuffer& /*fb*/, uint32_t /*att*/)
		{
		}

		void OnBind(FrameBuffer& /*fb*/, uint32_t /*att*/)
		{
		}

		void OnUnbind(FrameBuffer& /*fb*/, uint32_t /*att*/)
		{
		}
	};

	RenderViewPtr RenderView::NullObject()
	{
		static RenderViewPtr obj = MakeSharedPtr<NullRenderView>();
		return obj;
	}

	void RenderView::OnBind(FrameBuffer& /*fb*/, uint32_t /*att*/)
	{
	}
	
	void RenderView::OnUnbind(FrameBuffer& /*fb*/, uint32_t /*att*/)
	{
	}
}
