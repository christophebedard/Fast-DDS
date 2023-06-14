// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file BenchmarkPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _FAST_DDS_GENERATED_BENCHMARK_PUBSUBTYPES_H_
#define _FAST_DDS_GENERATED_BENCHMARK_PUBSUBTYPES_H_

#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastrtps/utils/md5.h>

#include "Benchmark.h"


#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error \

    Generated Benchmark is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // GEN_API_VER


namespace detail {

    template<typename Tag, typename Tag::type M>
    struct BenchMark_rob
    {
        friend constexpr typename Tag::type get(
                Tag)
        {
            return M;
        }
    };

    struct BenchMark_f
    {
        typedef uint32_t BenchMark::* type;
        friend constexpr type get(
                BenchMark_f);
    };

    template struct BenchMark_rob<BenchMark_f, &BenchMark::m_index>;

    template <typename T, typename Tag>
    inline size_t constexpr BenchMark_offset_of() {
        return ((::size_t) &reinterpret_cast<char const volatile&>((((T*)0)->*get(Tag()))));
    }
}
/*!
 * @brief This class represents the TopicDataType of the type BenchMark defined by the user in the IDL file.
 * @ingroup BENCHMARK
 */
class BenchMarkPubSubType : public eprosima::fastdds::dds::TopicDataType
{
public:

    typedef BenchMark type;

    eProsima_user_DllExport BenchMarkPubSubType();

    eProsima_user_DllExport virtual ~BenchMarkPubSubType() override;

    eProsima_user_DllExport virtual bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

    eProsima_user_DllExport virtual bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override;

    eProsima_user_DllExport virtual bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    eProsima_user_DllExport virtual void* createData() override;

    eProsima_user_DllExport virtual void deleteData(
            void* data) override;

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
    eProsima_user_DllExport inline bool is_bounded() const override
    {
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

#ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
    eProsima_user_DllExport inline bool is_plain() const override
    {
        return is_plain_impl();
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

#ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
    eProsima_user_DllExport inline bool construct_sample(
            void* memory) const override
    {
        new (memory) BenchMark();
        return true;
    }

#endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

    MD5 m_md5;
    unsigned char* m_keyBuffer;

private:

    static constexpr bool is_plain_impl()
    {
        return 4ULL == (detail::BenchMark_offset_of<BenchMark, detail::BenchMark_f>() + sizeof(uint32_t));

    }};

#endif // _FAST_DDS_GENERATED_BENCHMARK_PUBSUBTYPES_H_