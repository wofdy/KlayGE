// AudioBuffer.cpp
// KlayGE 声音引擎 头文件
// Ver 2.0.4
// 版权所有(C) 龚敏敏, 2004
// Homepage: http://www.klayge.org
//
// 2.0.4
// 初次建立 (2004.4.7)
//
// 修改记录
/////////////////////////////////////////////////////////////////////////////////

#include <KlayGE/KlayGE.hpp>
#include <KlayGE/Util.hpp>

#include <KlayGE/AudioDataSource.hpp>

namespace KlayGE
{
	class NullAudioDataSource : public AudioDataSource
	{
	public:
		AudioFormat Format() const
			{ return AF_Unknown; }
		uint32_t Freq() const
			{ return 0; }

		size_t Size()
			{ return 0; }

		size_t Read(void* /*data*/, size_t /*size*/)
			{ return 0; }
		void Reset()
			{ }
	};

	AudioDataSource::~AudioDataSource()
	{
	}

	AudioDataSourcePtr AudioDataSource::NullObject()
	{
		static AudioDataSourcePtr obj = MakeSharedPtr<NullAudioDataSource>();
		return obj;
	}

	AudioFormat AudioDataSource::Format() const
	{
		return this->format_;
	}

	uint32_t AudioDataSource::Freq() const
	{
		return this->freq_;
	}
}
