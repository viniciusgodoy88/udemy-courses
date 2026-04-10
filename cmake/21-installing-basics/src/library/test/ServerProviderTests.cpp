#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <ServerProvider.h>

namespace test
{
using namespace ::testing;

TEST(ServerProviderTests, ServerProviderDoesNotReturnEmptyHostName)
{
    // when:
    const auto hostname = ServerProvider::getHostName();

    // expected:
    EXPECT_THAT(hostname, Not(IsEmpty()));
}

}
