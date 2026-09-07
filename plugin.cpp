#include <memory>
#include <string>
#include <vector>

/*
  This is a skeleton for an OpenCPN plugin implementing:
  - create a standalone destination Mark
  - create a 2-point Route from own ship to that Mark
  - activate the Route

  You must replace placeholders with actual OpenCPN plugin API headers,
  base classes, and function calls from your installed SDK/version.
*/

struct LatLon {
    double lat{};
    double lon{};
};

class KeepMarkNavigatorPlugin {
public:
    bool Init() {
        // Register toolbar tool or context-menu hook here.
        return true;
    }

    void OnNavigateAndKeepMark(const LatLon& destination) {
        LatLon own = GetOwnShipPosition();
        auto markId = CreateStandaloneMark(destination, "Dest Mark");
        auto routeId = CreateRouteFromOwnShipToMark(own, destination, markId);
        ActivateRoute(routeId);
    }

private:
    LatLon GetOwnShipPosition() {
        // Replace with actual OpenCPN position query.
        return {0.0, 0.0};
    }

    std::string CreateStandaloneMark(const LatLon& pos, const std::string& name) {
        // Replace with PlugIn_Waypoint / PlugIn_Waypoint_Ex creation.
        // Important: create this as an independent Mark first.
        return "mark-guid-placeholder";
    }

    std::string CreateRouteFromOwnShipToMark(const LatLon& own,
                                             const LatLon& dest,
                                             const std::string& markGuid) {
        // Replace with PlugIn_Route / PlugIn_Route_Ex creation.
        // Route points should be: start waypoint at own ship, end waypoint using markGuid.
        return "route-guid-placeholder";
    }

    void ActivateRoute(const std::string& routeGuid) {
        // Replace with actual route activation API or REST call.
    }
};
