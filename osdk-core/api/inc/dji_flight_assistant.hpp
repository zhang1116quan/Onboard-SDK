/** @file dji_flight_assistant.hpp
 *  @version 3.9
 *  @date July 2019
 *
 *  @brief Implementation of flight assistant
 *
 *  @Copyright (c) 2019 DJI
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#ifndef DJI_FLIGHT_ASSISTANT_HPP
#define DJI_FLIGHT_ASSISTANT_HPP

#include "dji_flight_module.hpp"

namespace DJI {
namespace OSDK {

/*! @brief Flight control assistant API: set or get parameter
 *
 */
class FlightAssistant {
 public:
  FlightAssistant(Vehicle *vehicle);
  ~FlightAssistant();

  /*! @brief Set RTK enable or disable, blocking calls
   *
   *  @param rtkEnable RtkEnableData  RTK_DISABLE: disable, RTK_ENABLE: enable
   *  @param timeout blocking timeout in seconds
   *  @return OSDK ErrorCode::ErrorCodeType error code
   */
  ErrorCode::ErrorCodeType setRtkEnableSync(
      FlightModule::RtkEnableData rtkEnable, int timeout);

  /*! @brief Set RTK enable or disable, non-blocking calls
   *
   *  @param rtkEnable rtkEnableData, RTK_DISABLE: disable, RTK_ENABLE: enable
   *  @param UserCallBack callback function defined by user
   *  @arg @b retCode  OSDK ErrorCode::ErrorCodeType error code
   *  @arg @b userData the interface to transfer userData in when the callback
   * is
   *  called
   *  @param userData when UserCallBack is called, used in UserCallBack
   */
  void setRtkEnableAsync(FlightModule::RtkEnableData rtkEnable,
                         void (*UserCallBack)(ErrorCode::ErrorCodeType retCode,
                                              UserData userData),
                         UserData userData);

  /*! @brief Get rtk enable or disable, blocking calls
   *
   *  @param rtkEnable rtkEnableData, RTK_DISABLE: disable, RTK_ENABLE: enable
   *  @param timeout blocking timeout in seconds
   *  @return OSDK ErrorCode::ErrorCodeType error code
   */
  ErrorCode::ErrorCodeType getRtkEnableSync(
      FlightModule::RtkEnableData &rtkEnable, int timeout);

  /*! @brief get RTK enable or disable, non-blocking calls
   *
   *  @param UserCallBack callback function defined by user
   *  @arg @b retCode the OSDK ErrorCode::ErrorCodeType error code
   *  @arg @b rtkEnable rtkEnableData, RTK_DISABLE: disable, RTK_ENABLE: enable
   *  @arg @b userData the interface to trans userData in when the callback is
   *  called
   *  @param userData when UserCallBack is called, used in UserCallBack
   */
  void getRtkEnableAsync(
      void (*UserCallBack)(ErrorCode::ErrorCodeType retCode,
                           FlightModule::RtkEnableData rtkEnable,
                           UserData userData),
      UserData userData);

  /*! @brief Set go home altitude, blocking calls
   *
   *  @note If current altitude is higher than settings, aircraft will go home
   *  by current altitude. the altitude setting is between 20m to 500m, if
   *  setting exceed this range, for example setting is 10m or 510m, it will
   * remind you
   * ErrorCode::FlightControllerErr::ParamReadWirteErr::InvalidParameter.
   *  @param altitude go home altitude settings must between MIN_GO_HOME_HEIGHT
   * and MAX_FLIGHT_HEIGHT
   *  @param timeout blocking timeout in seconds
   *  @return OSDK ErrorCode::ErrorCodeType error code
   */
  ErrorCode::ErrorCodeType setGoHomeAltitudeSync(
      FlightModule::GoHomeAltitude altitude, int timeout);

  /*! @brief Set go home altitude, non-blocking calls
   *
   *  @note If current altitude is higher than settings, aircraft will go home
   *  by current altitude. the altitude setting is between 20m to 500m, if
   *  setting exceed this range, for example setting is 10m or 510m, it will
   * remind you
   * ErrorCode::FlightControllerErr::ParamReadWirteErr::InvalidParameter.
   *  @param altitude go home altitude
   *  @param UserCallBack callback function defined by user
   *  @arg @b retCode the OSDK ErrorCode::ErrorCodeType error code
   *  @arg @b userData the interface to trans userData in when the callback is
   * called
   *  @param userData when UserCallBack is called, used in UserCallBack
   */
  void setGoHomeAltitudeAsync(
      FlightModule::GoHomeAltitude altitude,
      void (*UserCallBack)(ErrorCode::ErrorCodeType retCode, UserData userData),
      UserData userData);

  /*! @brief Get go home altitude, blocking calls
   *
   *  @param altitude go home altitude
   *  @param timeout blocking timeout in seconds
   *  @return OSDK ErrorCode::ErrorCodeType error code
   */
  ErrorCode::ErrorCodeType getGoHomeAltitudeSync(
      FlightModule::GoHomeAltitude &altitude, int timeout);

  /*! @brief Get go home altitude, non-blocking calls
   *
   *  @param UserCallBack callback function defined by user
   *  @arg @b retCode the OSDK ErrorCode::ErrorCodeType error code
   *  @arg @b altitude go home altitude
   *  @arg @b userData the interface to trans userData in when the callback is
   *  called
   *  @param userData when UserCallBack is called, used in UserCallBack
   */
  void getGoHomeAltitudeAsync(
      void (*UserCallBack)(ErrorCode::ErrorCodeType retCode,
                           FlightModule::GoHomeAltitude altitude,
                           UserData userData),
      UserData userData);

  /*! @brief Set homepoint position, blocking calls
   *
   *  @note  Set homepoint failed reason may as follows:
   *  1 Use the type DJI_HOMEPOINT_AIRCRAFT_LOACTON, but aircraft's gps level
   *  can't reach the status of record homepoint.
   *  2 The distance between new home point and init home point is larger than
   *  MAX_FLY_RADIUS(20km)
   *  @param homePoint SetHomepointData include latitude and longitude
   *  @param timeout blocking timeout in seconds
   *  @return  OSDK ErrorCode::ErrorCodeType error code
   */
  ErrorCode::ErrorCodeType setHomePointSync(
      FlightModule::SetHomepointData homePoint, int timeout);

  /*! @brief Set home point position, non-blocking calls
   *
   *  @note  Set home point failed reason may as follows:
   *  1. Use the type DJI_HOMEPOINT_AIRCRAFT_LOACTON, but aircraft's gps level
   *  can't reach the status of record homepoint.
   *  2. The distance between new home point and init home point is larger than
   *  MAX_FLY_RADIUS(20km)
   *  @param homePoint  SetHomepointData include latitude and longitude
   *  @param UserCallBack callback function defined by user
   *  @arg @b retCode the OSDK ErrorCode::ErrorCodeType error code
   *  @arg @b userData the interface to transfer userData in when the callback
   * is called
   *  @param when UserCallBack is called, used in UserCallBack
   */
  void setHomePointAsync(FlightModule::SetHomepointData homePoint,
                         void (*UserCallBack)(ErrorCode::ErrorCodeType retCode,
                                              UserData userData),
                         UserData userData);

  /*! @brief Set avoid obstacle switch enable or disable, blocking calls
   *
   *  @param avoidObstacle reference in FlightAssistant::AvoidObstacleData
   *  @param timeout blocking timeout in seconds
   *  @return OSDK ErrorCode::ErrorCodeType error code
   */
  ErrorCode::ErrorCodeType setAvoidObstacleSwitchSync(
      FlightModule::AvoidObstacleData avoidObstacle, int timeout);

  /*! @brief Set set avoid obstacle switch enable or disable, non-blocking calls
   *
   *  @param avoidObstacle reference in FlightAssistant::AvoidObstacleData
   *  @param UserCallBack callback function defined by user
   *  @arg @b retCode  OSDK ErrorCode::ErrorCodeType error code
   *  @arg @b userData the interface to trans userData in when the callback is
   * called
   *  @param userData when UserCallBack is called, used in UserCallBack
   */
  void setAvoidObstacleSwitchAsync(
      FlightModule::AvoidObstacleData avoidObstacle,
      void (*UserCallBack)(ErrorCode::ErrorCodeType retCode, UserData userData),
      UserData userData);

 private:
  FlightModule *controllerModule;
};
}  // namespace OSDK
}  // namespace DJI
#endif  // DJI_FLIGHT_ASSISTANT_HPP
