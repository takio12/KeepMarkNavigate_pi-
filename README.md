# OpenCPN KeepMark Navigate Plugin Skeleton

This skeleton demonstrates the structure for a custom OpenCPN plugin that:

1. Creates a standalone destination Mark.
2. Creates a route from own ship to that destination.
3. Activates the route.
4. Leaves the destination point behind as a Mark after arrival or route deletion.

## Why this works

In OpenCPN, a standalone Mark can be used as a route waypoint. If you create the destination as an independent Mark first and then build the route using that point, the destination can remain as a Mark after the route is stopped or removed.

## Files

- `CMakeLists.txt`: minimal build skeleton
- `plugin.cpp`: implementation outline with the core flow

## What you must adapt

- Include the correct OpenCPN plugin SDK headers for your version.
- Inherit from the actual OpenCPN plugin base class.
- Replace placeholder methods with API calls to:
  - read own-ship position
  - add a standalone waypoint/mark
  - add a route
  - activate the route
- Add a toolbar button or context-menu item.
- Link wxWidgets and OpenCPN SDK libraries in CMake.

## Suggested next steps

1. Point CMake includes to your OpenCPN SDK.
2. Implement `CreateStandaloneMark()` using `PlugIn_Waypoint` or `PlugIn_Waypoint_Ex`.
3. Implement `CreateRouteFromOwnShipToMark()` using `PlugIn_Route` or `PlugIn_Route_Ex`.
4. Implement `ActivateRoute()` using the supported activation mechanism for your OpenCPN version.
5. Add UI: a toolbar tool named `Navigate + Keep Mark`.
6. Test with a temporary chart and simulated own-ship position.

## Notes

OpenCPN API details vary by version, so this project is intentionally a safe skeleton rather than pretending to be a drop-in buildable plugin.
