// OGLMapping.hpp
// KlayGE RenderEngine和OpenGL本地之间的映射 头文件
// Ver 2.8.0
// 版权所有(C) 龚敏敏, 2005
// Homepage: http://klayge.sourceforge.net
//
// 2.8.0
// 初次建立 (2005.7.19)
//
// 修改记录
/////////////////////////////////////////////////////////////////////////////////

#ifndef _OGLMAPPING_HPP
#define _OGLMAPPING_HPP

#define KLAYGE_LIB_NAME KlayGE_RenderEngine_OpenGL
#include <KlayGE/config/auto_link.hpp>

#include <KlayGE/PreDeclare.hpp>
#include <KlayGE/RenderStateObject.hpp>
#include <KlayGE/RenderLayout.hpp>
#include <KlayGE/Sampler.hpp>

#include <glloader/glloader.h>

namespace KlayGE
{
	class OGLMapping
	{
	public:
		static void Mapping(GLfloat* clr4, Color const & clr);

		static GLenum Mapping(CompareFunction func);

		static GLenum Mapping(StencilOperation op);

		static GLenum Mapping(AlphaBlendFactor factor);
		static GLenum Mapping(PolygonMode mode);
		static GLenum Mapping(ShadeMode mode);
		static GLenum Mapping(BlendOperation bo);
		static GLint Mapping(Sampler::TexAddressingMode mode);

		static void Mapping(GLenum& primType, uint32_t& primCount, RenderLayout const & rl);

		static void MappingFormat(GLint& internalFormat, GLenum& glformat, GLenum& gltype, ElementFormat ef);
	};
}

#endif			// _OGLMAPPING_HPP
