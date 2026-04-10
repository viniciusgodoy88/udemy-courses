#pragma once

#include <string>

/** \addtogroup ServerProvider
 *  @{
 */

namespace ServerProvider
{

///
/// \brief Gives address basing of build system configuration
/// \return Address of used server
///
APP_LIBRARY_API std::string getHostName();

}// namespace ServerProvider

/** }@ */